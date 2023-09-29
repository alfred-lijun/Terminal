// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0+ OR GPL-3.0 WITH Qt-GPL-exception-1.0

#include "terminalpane.h"

#include "terminalconstants.h"

#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/coreconstants.h>
#include <coreplugin/icontext.h>
#include <coreplugin/icore.h>
#include <coreplugin/locator/locatorconstants.h>

#include <projectexplorer/project.h>
#include <projectexplorer/projectmanager.h>

#include <utils/algorithm.h>
#include <utils/environment.h>
#include <utils/utilsicons.h>

#include <QMenu>
#include <QStandardPaths>
#include <QToolButton>
#include "terminalicons.h"

namespace Terminal {

using namespace Utils;
using namespace Core;

TerminalPane::TerminalPane(QObject *parent)
    : IOutputPane(parent)
{
    setZoomButtonsEnabled(true);

    connect(this, &IOutputPane::zoomInRequested, this, [this] {
        if (currentTerminal())
            currentTerminal()->zoomIn();
    });
    connect(this, &IOutputPane::zoomOutRequested, this, [this] {
        if (currentTerminal())
            currentTerminal()->zoomOut();
    });

    initActions();

    m_openSettingsButton = new QToolButton();
    m_openSettingsButton->setToolTip(tr("Configure..."));
    m_openSettingsButton->setIcon(Icons::SETTINGS_TOOLBAR.icon());

    m_newTerminalButton = new QToolButton();
    m_newTerminalButton->setDefaultAction(&newTerminal);

    m_closeTerminalButton = new QToolButton();
    m_closeTerminalButton->setDefaultAction(&closeTerminal);

    connect(m_openSettingsButton, &QToolButton::clicked, m_openSettingsButton, []() {
        ICore::showOptionsDialog("Terminal.General");
    });

    openTerminal();
}

TerminalPane::~TerminalPane() {}


void TerminalPane::openTerminal()
{
    TerminalWidget * terminalWidget = new TerminalWidget;
    m_tabWidget.setCurrentIndex(m_tabWidget.addTab(terminalWidget, tr("cmd")));
    m_tabWidget.currentWidget()->setFocus();
    emit navigateStateUpdate();
}

void TerminalPane::addTerminal(QWidget *terminal, const QString &title)
{
    m_tabWidget.setCurrentIndex(m_tabWidget.addTab(terminal, title));
    setupTerminalWidget(terminal);

    if (!m_isVisible)
        emit showPage(IOutputPane::ModeSwitch);

    terminal->setFocus();

    emit navigateStateUpdate();
}

void TerminalPane::ensureVisible(QWidget *terminal)
{
    if (!m_isVisible)
        emit showPage(IOutputPane::ModeSwitch);
    m_tabWidget.setCurrentWidget(terminal);
    terminal->setFocus();
}

QWidget *TerminalPane::stoppedTerminalWithId(Id identifier) const
{

    return nullptr;
}

QWidget *TerminalPane::outputWidget(QWidget *parent)
{
    Q_UNUSED(parent)
    if (!m_widgetInitialized) {
        m_widgetInitialized = true;
        m_tabWidget.setTabBarAutoHide(false);
        m_tabWidget.setDocumentMode(true);
        m_tabWidget.setTabsClosable(true);
        m_tabWidget.setMovable(true);

        connect(&m_tabWidget, &QTabWidget::tabCloseRequested, this, [this](int index) {
            removeTab(index);
        });

        connect(&m_tabWidget, &QTabWidget::currentChanged, this, [this](int index) {
            if (auto widget = m_tabWidget.widget(index))
                widget->setFocus();
            else
                emit hidePage();
        });
    }

    return &m_tabWidget;
}

TerminalWidget *TerminalPane::currentTerminal() const
{
    return static_cast<TerminalWidget *>(m_tabWidget.currentWidget());
}

void TerminalPane::removeTab(int index)
{
    delete m_tabWidget.widget(index);
    emit navigateStateUpdate();
}

void TerminalPane::setupTerminalWidget(QWidget *terminal)
{
    if (!terminal)
        return;
}

void TerminalPane::initActions()
{
    createShellMenu();

    newTerminal.setText(tr("New Terminal"));
    newTerminal.setIcon(NEW_TERMINAL_ICON.icon());

    closeTerminal.setIcon(CLOSE_TERMINAL_ICON.icon());
    closeTerminal.setToolTip(tr("Close the current Terminal."));

    connect(&newTerminal, &QAction::triggered, this, [this] {
        openTerminal();
    });
    connect(&closeTerminal, &QAction::triggered, this, [this] {
        removeTab(m_tabWidget.currentIndex());
    });
}

void TerminalPane::createShellMenu()
{

}

QList<QWidget *> TerminalPane::toolBarWidgets() const
{
    QList<QWidget *> widgets = IOutputPane::toolBarWidgets();
    widgets.prepend(m_newTerminalButton);
    widgets.prepend(m_closeTerminalButton);
    return widgets << m_openSettingsButton;
}

QString TerminalPane::displayName() const
{
    return tr("Terminal");
}

int TerminalPane::priorityInStatusBar() const
{
    return 50;
}

void TerminalPane::clearContents()
{
    if (const auto t = currentTerminal()){
        ((TerminalWidget *)t)->clearContents();
    }

}

void TerminalPane::visibilityChanged(bool visible)
{
    if (m_isVisible == visible)
        return;

    m_isVisible = visible;

    if (visible && m_tabWidget.count() == 0)
        openTerminal();

    IOutputPane::visibilityChanged(visible);
}

void TerminalPane::setFocus()
{
    if (const auto t = currentTerminal())
        t->setFocus();
}

bool TerminalPane::hasFocus() const
{
    if (const auto t = currentTerminal())
        return t->hasFocus();

    return false;
}

bool TerminalPane::canFocus() const
{
    return true;
}

bool TerminalPane::canNavigate() const
{
    return true;
}

bool TerminalPane::canNext() const
{
    return m_tabWidget.count() > 1;
}

bool TerminalPane::canPrevious() const
{
    return m_tabWidget.count() > 1;
}

void TerminalPane::goToNext()
{
    int nextIndex = m_tabWidget.currentIndex() + 1;
    if (nextIndex >= m_tabWidget.count())
        nextIndex = 0;

    m_tabWidget.setCurrentIndex(nextIndex);
    emit navigateStateUpdate();
}

void TerminalPane::goToPrev()
{
    int prevIndex = m_tabWidget.currentIndex() - 1;
    if (prevIndex < 0)
        prevIndex = m_tabWidget.count() - 1;

    m_tabWidget.setCurrentIndex(prevIndex);
    emit navigateStateUpdate();
}

} // namespace Terminal

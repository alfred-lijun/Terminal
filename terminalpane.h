// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0+ OR GPL-3.0 WITH Qt-GPL-exception-1.0

#pragma once

#include <coreplugin/ioutputpane.h>
#include <QAction>
#include <QMenu>
#include <QTabWidget>
#include <QToolButton>
#include "terminalwidget.h"

namespace Terminal {
class TerminalPane : public Core::IOutputPane
{
    Q_OBJECT
public:
    TerminalPane(QObject *parent = nullptr);
    ~TerminalPane() override;

    QWidget *outputWidget(QWidget *parent) override;
    QList<QWidget *> toolBarWidgets() const override;
    QString displayName() const override;
    int priorityInStatusBar() const override;
    void clearContents() override;
    void visibilityChanged(bool visible) override;
    void setFocus() override;
    bool hasFocus() const override;
    bool canFocus() const override;
    bool canNavigate() const override;
    bool canNext() const override;
    bool canPrevious() const override;
    void goToNext() override;
    void goToPrev() override;

    void openTerminal();
    void addTerminal(QWidget *terminal, const QString &title);

    QWidget *stoppedTerminalWithId(Utils::Id identifier) const;

    void ensureVisible(QWidget *terminal);

private:
    TerminalWidget *currentTerminal() const;
    void removeTab(int index);
    void setupTerminalWidget(QWidget *terminal);
    void initActions();
    void createShellMenu();

private:
    QTabWidget m_tabWidget;
    QToolButton *m_openSettingsButton{nullptr};
    QMenu m_shellMenu;
    bool m_widgetInitialized{false};
    bool m_isVisible{false};

    QToolButton *m_newTerminalButton{nullptr};
    QToolButton *m_closeTerminalButton{nullptr};

    QAction closeTerminal;
    QAction newTerminal;
};

} // namespace Terminal

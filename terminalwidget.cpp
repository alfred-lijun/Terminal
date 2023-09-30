#include "terminalwidget.h"
#include <QDebug>
#include <coreplugin/icore.h>
#include <coreplugin/icontext.h>
#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/actionmanager/command.h>
#include <coreplugin/actionmanager/actioncontainer.h>
#include <coreplugin/coreconstants.h>
#include <coreplugin/messagemanager.h>

TerminalWidget::TerminalWidget()
{
    setAttribute(Qt::WA_InputMethodEnabled);
    setAttribute(Qt::WA_MouseTracking);
    setAcceptDrops(true);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    setWindowTitle("cmd");
    font.setFamily("consolas");
    font.setPointSize(10);
    setFont(font);
    setTextColor(Qt::black);
    proc = new QProcess();
    connect(proc,SIGNAL(readyReadStandardOutput()),this,SLOT(readyReadStandardOutputSlot()));
    connect(proc,SIGNAL(readyReadStandardError()),this,SLOT(readyReadStandardErrorSlot()));
#ifdef Q_OS_WIN
    proc->start("cmd");
#elif Q_OS_LINUX
    proc->start("bash");
#endif
    QTextCursor editCursor = textCursor();
    QTextBlockFormat textBlockFormat;
    textBlockFormat.setLineHeight(20, QTextBlockFormat::FixedHeight);
    editCursor.setBlockFormat(textBlockFormat);setTextCursor(editCursor);
}

void TerminalWidget::clearContents()
{
    clear();
    proc->write("cls\n");
}

void TerminalWidget::keyPressEvent(QKeyEvent *e)
{
    QTextCursor editCursor = textCursor();// Qt::Key_Enter 是小键盘（数字键盘）的 Enter，对应的虚拟键码为：0x01000005// Qt::Key_Return 是大键盘区的 Enter，对应的虚拟键码为：0x01000004
    if(e->key() == Qt::Key_Return || e->key() == Qt::Key_Enter){
        e->ignore();
        editCursor.setPosition(lastPosition, QTextCursor::MoveAnchor);
        editCursor.movePosition(QTextCursor::End, QTextCursor::KeepAnchor);
        QString string = editCursor.selectedText();
        editCursor.clearSelection();
#ifdef Q_OS_WIN
        lastInput =  string.toLocal8Bit() + '\r' + '\n';
#elif Q_OS_LINUX
        lastInput =  string.toLocal8Bit() + '\n';
#endif
        proc->write(lastInput);
        Core::MessageManager::writeSilently("input: " + QString::fromStdString(lastInput.constData()));
        if(string == "cls"){
            clear();
        }
        return;
    }else if(e->key() == Qt::Key_Backspace && editCursor.position() <= lastPosition)
        return;
    else if(e->key() == Qt::Key_Delete && editCursor.position() <= lastPosition)
        return;
    else
        return QTextEdit::keyPressEvent(e);
}

void TerminalWidget::readyReadStandardOutputSlot()
{
    QByteArray ba = proc->readAllStandardOutput();
    QString output = QString::fromStdString(ba.constData());
    if(output.length() == 1){
        preSingal = output;
        return;
    }
    if(!preSingal.isEmpty()){
        output = preSingal + output;
        preSingal.clear();
    }
    if (output.length() > 0 && output != QString::fromStdString(lastInput.constData())){
        setTextColor(Qt::black);
        append(output.trimmed());
        Core::MessageManager::writeSilently("output: " + output.trimmed());
        moveCursor(QTextCursor::End);
        lastPosition = textCursor().position();
    }
}

void TerminalWidget::readyReadStandardErrorSlot(){
    QByteArray ba = proc->readAllStandardError();
    QString output = QString::fromStdString(ba.constData());
    if (output.length() > 0 && output != QString::fromStdString(lastInput.constData())){
        setTextColor(Qt::black);
        append(output.trimmed());
        Core::MessageManager::writeSilently("output: " + output.trimmed());
        moveCursor(QTextCursor::End);
        lastPosition = textCursor().position();
    }
}

void TerminalWidget::zoomIn()
{
    font.setPointSize(font.pointSize() + 1);
    setFont(font);
}

void TerminalWidget::zoomOut()
{
    font.setPointSize(qMax(font.pointSize() - 1, 1));
    setFont(font);
}

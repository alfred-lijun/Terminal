#include "terminalwidget.h"
#include <QDebug>
TerminalWidget::TerminalWidget()
{
    setAttribute(Qt::WA_InputMethodEnabled);
    setAttribute(Qt::WA_MouseTracking);
    setAcceptDrops(true);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    setWindowTitle("cmd");
    font.setFamily("consolas");
    font.setPointSize(12);
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
    QTextCodec * textCodec = QTextCodec::codecForName("System");// assert 断言，如果 textCodec 为空，则编译报错
    assert(textCodec != nullptr);
    QString output = textCodec->toUnicode(ba);
    if (output.length() > 0 && output != QString::fromLocal8Bit(lastInput)){
        setTextColor(Qt::black);
        append(output.trimmed());
        moveCursor(QTextCursor::End);
        lastPosition = textCursor().position();
    }
}

void TerminalWidget::readyReadStandardErrorSlot(){
    QByteArray ba = proc->readAllStandardError();
    QTextCodec* textCodec = QTextCodec::codecForName("System");// assert 断言，如果 textCodec 为空，则编译报错
    assert(textCodec != nullptr);
    QString output = textCodec->toUnicode(ba);
    if (output.length() > 0 && output != QString::fromLocal8Bit(lastInput)){
        setTextColor(Qt::black);
        append(output.trimmed());
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

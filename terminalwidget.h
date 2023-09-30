#ifndef TERMINALWIDGET_H
#define TERMINALWIDGET_H
#include <QTextEdit>
#include <QKeyEvent>
#include <QFont>
#include <QProcess>
#include <QByteArray>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextLayout>
#include <QTextCursor>
#include <QTextBlock>
#include <QTextCodec>
#include <assert.h>
class TerminalWidget: public QTextEdit
{Q_OBJECT
public:
    TerminalWidget();
    void clearContents();
    void zoomIn();
    void zoomOut();
protected:
    void keyPressEvent(QKeyEvent *e);
private:
    // 字体
    QFont font;
    // 命令行终端进程
    QProcess * proc;
    // 光标位置
    long long lastPosition = 0;
    // 上一次的输入内容
    QByteArray lastInput;
    QString preSingal;
public slots:
    /*** @brief readyReadStandardOutputSlot       标准输出*/
    void readyReadStandardOutputSlot();
    /*** @brief readyReadStandardErrorSlot        错误输出*/
    void readyReadStandardErrorSlot();
};
#endif // TERMINALWIDGET_H

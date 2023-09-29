#ifndef TERMINALPLUGIN_H
#define TERMINALPLUGIN_H

#include "terminal_global.h"
#include "terminalpane.h"
#include <extensionsystem/iplugin.h>

namespace Terminal {
namespace Internal {

class TerminalPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "Terminal.json")

public:
    TerminalPlugin();
    ~TerminalPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    TerminalPane * m_terminalPane;
};

} // namespace Internal
} // namespace Terminal

#endif // TERMINALPLUGIN_H

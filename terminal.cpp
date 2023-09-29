#include "terminal.h"
#include "terminalconstants.h"

#include <coreplugin/icore.h>
#include <coreplugin/icontext.h>
#include <coreplugin/actionmanager/actionmanager.h>
#include <coreplugin/actionmanager/command.h>
#include <coreplugin/actionmanager/actioncontainer.h>
#include <coreplugin/coreconstants.h>
#include <extensionsystem/iplugin.h>
#include <extensionsystem/pluginmanager.h>

#include <QAction>
#include <QMessageBox>
#include <QMainWindow>
#include <QMenu>

namespace Terminal {
namespace Internal {

TerminalPlugin::TerminalPlugin()
{
    // Create your members
}

TerminalPlugin::~TerminalPlugin()
{
    // Unregister objects from the plugin manager's object pool
    // Delete members
    ExtensionSystem::PluginManager::removeObject(m_terminalPane);
    delete m_terminalPane;
    m_terminalPane = nullptr;
}

bool TerminalPlugin::initialize(const QStringList &arguments, QString *errorString)
{
    // Register objects in the plugin manager's object pool
    // Load settings
    // Add actions to menus
    // Connect to other plugins' signals
    // In the initialize function, a plugin can be sure that the plugins it
    // depends on have initialized their members.
    Q_UNUSED(arguments)
    Q_UNUSED(errorString)
    return true;
}

void TerminalPlugin::extensionsInitialized()
{
    // Retrieve objects from the plugin manager's object pool
    // In the extensionsInitialized function, a plugin can be sure that all
    // plugins that depend on it are completely initialized.

    m_terminalPane = new TerminalPane;
    ExtensionSystem::PluginManager::addObject(m_terminalPane);
}

ExtensionSystem::IPlugin::ShutdownFlag TerminalPlugin::aboutToShutdown()
{
    // Save settings
    // Disconnect from signals that are not needed during shutdown
    // Hide UI (if you add UI that is not in the main window directly)
    return SynchronousShutdown;
}

} // namespace Internal
} // namespace Terminal

/****************************************************************************
** Meta object code from reading C++ file 'terminal.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../terminal.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'terminal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Terminal__Internal__TerminalPlugin_t {
    const uint offsetsAndSize[2];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Terminal__Internal__TerminalPlugin_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Terminal__Internal__TerminalPlugin_t qt_meta_stringdata_Terminal__Internal__TerminalPlugin = {
    {
QT_MOC_LITERAL(0, 34) // "Terminal::Internal::TerminalP..."

    },
    "Terminal::Internal::TerminalPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Terminal__Internal__TerminalPlugin[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Terminal::Internal::TerminalPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject Terminal::Internal::TerminalPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<ExtensionSystem::IPlugin::staticMetaObject>(),
    qt_meta_stringdata_Terminal__Internal__TerminalPlugin.offsetsAndSize,
    qt_meta_data_Terminal__Internal__TerminalPlugin,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Terminal__Internal__TerminalPlugin_t
, QtPrivate::TypeAndForceComplete<TerminalPlugin, std::true_type>



>,
    nullptr
} };


const QMetaObject *Terminal::Internal::TerminalPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Terminal::Internal::TerminalPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Terminal__Internal__TerminalPlugin.stringdata0))
        return static_cast<void*>(this);
    return ExtensionSystem::IPlugin::qt_metacast(_clname);
}

int Terminal::Internal::TerminalPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExtensionSystem::IPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData_TerminalPlugin[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x21,  'o',  'r',  'g',  '.',  'q', 
    't',  '-',  'p',  'r',  'o',  'j',  'e',  'c', 
    't',  '.',  'Q',  't',  '.',  'Q',  't',  'C', 
    'r',  'e',  'a',  't',  'o',  'r',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x6e,  'T',  'e',  'r',  'm',  'i',  'n', 
    'a',  'l',  'P',  'l',  'u',  'g',  'i',  'n', 
    // "MetaData"
    0x04,  0xa9,  0x6d,  'C',  'o',  'm',  'p',  'a', 
    't',  'V',  'e',  'r',  's',  'i',  'o',  'n', 
    0x65,  '0',  '.',  '0',  '.',  '1',  0x69,  'C', 
    'o',  'p',  'y',  'r',  'i',  'g',  'h',  't', 
    0x67,  '(',  'C',  ')',  ' ',  'b',  'b',  'k', 
    0x6c,  'D',  'e',  'p',  'e',  'n',  'd',  'e', 
    'n',  'c',  'i',  'e',  's',  0x81,  0xa2,  0x64, 
    'N',  'a',  'm',  'e',  0x64,  'C',  'o',  'r', 
    'e',  0x67,  'V',  'e',  'r',  's',  'i',  'o', 
    'n',  0x65,  '7',  '.',  '0',  '.',  '2',  0x6b, 
    'D',  'e',  's',  'c',  'r',  'i',  'p',  't', 
    'i',  'o',  'n',  0x78,  0x2b,  'P',  'u',  't', 
    ' ',  'a',  ' ',  's',  'h',  'o',  'r',  't', 
    ' ',  'd',  'e',  's',  'c',  'r',  'i',  'p', 
    't',  'i',  'o',  'n',  ' ',  'o',  'f',  ' ', 
    'y',  'o',  'u',  'r',  ' ',  'p',  'l',  'u', 
    'g',  'i',  'n',  ' ',  'h',  'e',  'r',  'e', 
    0x67,  'L',  'i',  'c',  'e',  'n',  's',  'e', 
    0x78,  0x22,  'P',  'u',  't',  ' ',  's',  'h', 
    'o',  'r',  't',  ' ',  'l',  'i',  'c',  'e', 
    'n',  's',  'e',  ' ',  'i',  'n',  'f',  'o', 
    'r',  'm',  'a',  't',  'i',  'o',  'n',  ' ', 
    'h',  'e',  'r',  'e',  0x64,  'N',  'a',  'm', 
    'e',  0x68,  'T',  'e',  'r',  'm',  'i',  'n', 
    'a',  'l',  0x63,  'U',  'r',  'l',  0x73,  'h', 
    't',  't',  'p',  's',  ':',  '/',  '/',  'w', 
    'w',  'w',  '.',  'b',  'b',  'k',  '.',  'c', 
    'o',  'm',  0x66,  'V',  'e',  'n',  'd',  'o', 
    'r',  0x63,  'b',  'b',  'k',  0x67,  'V',  'e', 
    'r',  's',  'i',  'o',  'n',  0x65,  '0',  '.', 
    '0',  '.',  '1', 
    0xff, 
};
using namespace Terminal;
using namespace Terminal::Internal;
QT_MOC_EXPORT_PLUGIN(Terminal::Internal::TerminalPlugin, TerminalPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

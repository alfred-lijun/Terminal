/****************************************************************************
** Meta object code from reading C++ file 'Emulation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtermwidget/Emulation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Emulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Konsole__Emulation_t {
    const uint offsetsAndSize[122];
    char stringdata0[816];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Konsole__Emulation_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Konsole__Emulation_t qt_meta_stringdata_Konsole__Emulation = {
    {
QT_MOC_LITERAL(0, 18), // "Konsole::Emulation"
QT_MOC_LITERAL(19, 8), // "sendData"
QT_MOC_LITERAL(28, 0), // ""
QT_MOC_LITERAL(29, 11), // "const char*"
QT_MOC_LITERAL(41, 4), // "data"
QT_MOC_LITERAL(46, 3), // "len"
QT_MOC_LITERAL(50, 14), // "lockPtyRequest"
QT_MOC_LITERAL(65, 7), // "suspend"
QT_MOC_LITERAL(73, 14), // "useUtf8Request"
QT_MOC_LITERAL(88, 8), // "stateSet"
QT_MOC_LITERAL(97, 5), // "state"
QT_MOC_LITERAL(103, 14), // "zmodemDetected"
QT_MOC_LITERAL(118, 25), // "changeTabTextColorRequest"
QT_MOC_LITERAL(144, 5), // "color"
QT_MOC_LITERAL(150, 23), // "programUsesMouseChanged"
QT_MOC_LITERAL(174, 9), // "usesMouse"
QT_MOC_LITERAL(184, 32), // "programBracketedPasteModeChanged"
QT_MOC_LITERAL(217, 18), // "bracketedPasteMode"
QT_MOC_LITERAL(236, 13), // "outputChanged"
QT_MOC_LITERAL(250, 12), // "titleChanged"
QT_MOC_LITERAL(263, 5), // "title"
QT_MOC_LITERAL(269, 8), // "newTitle"
QT_MOC_LITERAL(278, 16), // "imageSizeChanged"
QT_MOC_LITERAL(295, 9), // "lineCount"
QT_MOC_LITERAL(305, 11), // "columnCount"
QT_MOC_LITERAL(317, 20), // "imageSizeInitialized"
QT_MOC_LITERAL(338, 18), // "imageResizeRequest"
QT_MOC_LITERAL(357, 4), // "sizz"
QT_MOC_LITERAL(362, 28), // "profileChangeCommandReceived"
QT_MOC_LITERAL(391, 4), // "text"
QT_MOC_LITERAL(396, 21), // "flowControlKeyPressed"
QT_MOC_LITERAL(418, 17), // "suspendKeyPressed"
QT_MOC_LITERAL(436, 13), // "cursorChanged"
QT_MOC_LITERAL(450, 19), // "KeyboardCursorShape"
QT_MOC_LITERAL(470, 11), // "cursorShape"
QT_MOC_LITERAL(482, 21), // "blinkingCursorEnabled"
QT_MOC_LITERAL(504, 25), // "handleCommandFromKeyboard"
QT_MOC_LITERAL(530, 27), // "KeyboardTranslator::Command"
QT_MOC_LITERAL(558, 7), // "command"
QT_MOC_LITERAL(566, 23), // "outputFromKeypressEvent"
QT_MOC_LITERAL(590, 12), // "setImageSize"
QT_MOC_LITERAL(603, 5), // "lines"
QT_MOC_LITERAL(609, 7), // "columns"
QT_MOC_LITERAL(617, 8), // "sendText"
QT_MOC_LITERAL(626, 12), // "sendKeyEvent"
QT_MOC_LITERAL(639, 10), // "QKeyEvent*"
QT_MOC_LITERAL(650, 9), // "fromPaste"
QT_MOC_LITERAL(660, 14), // "sendMouseEvent"
QT_MOC_LITERAL(675, 7), // "buttons"
QT_MOC_LITERAL(683, 6), // "column"
QT_MOC_LITERAL(690, 4), // "line"
QT_MOC_LITERAL(695, 9), // "eventType"
QT_MOC_LITERAL(705, 10), // "sendString"
QT_MOC_LITERAL(716, 6), // "string"
QT_MOC_LITERAL(723, 6), // "length"
QT_MOC_LITERAL(730, 11), // "receiveData"
QT_MOC_LITERAL(742, 6), // "buffer"
QT_MOC_LITERAL(749, 14), // "bufferedUpdate"
QT_MOC_LITERAL(764, 8), // "showBulk"
QT_MOC_LITERAL(773, 16), // "usesMouseChanged"
QT_MOC_LITERAL(790, 25) // "bracketedPasteModeChanged"

    },
    "Konsole::Emulation\0sendData\0\0const char*\0"
    "data\0len\0lockPtyRequest\0suspend\0"
    "useUtf8Request\0stateSet\0state\0"
    "zmodemDetected\0changeTabTextColorRequest\0"
    "color\0programUsesMouseChanged\0usesMouse\0"
    "programBracketedPasteModeChanged\0"
    "bracketedPasteMode\0outputChanged\0"
    "titleChanged\0title\0newTitle\0"
    "imageSizeChanged\0lineCount\0columnCount\0"
    "imageSizeInitialized\0imageResizeRequest\0"
    "sizz\0profileChangeCommandReceived\0"
    "text\0flowControlKeyPressed\0suspendKeyPressed\0"
    "cursorChanged\0KeyboardCursorShape\0"
    "cursorShape\0blinkingCursorEnabled\0"
    "handleCommandFromKeyboard\0"
    "KeyboardTranslator::Command\0command\0"
    "outputFromKeypressEvent\0setImageSize\0"
    "lines\0columns\0sendText\0sendKeyEvent\0"
    "QKeyEvent*\0fromPaste\0sendMouseEvent\0"
    "buttons\0column\0line\0eventType\0sendString\0"
    "string\0length\0receiveData\0buffer\0"
    "bufferedUpdate\0showBulk\0usesMouseChanged\0"
    "bracketedPasteModeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Konsole__Emulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  188,    2, 0x06,    1 /* Public */,
       6,    1,  193,    2, 0x06,    4 /* Public */,
       8,    1,  196,    2, 0x06,    6 /* Public */,
       9,    1,  199,    2, 0x06,    8 /* Public */,
      11,    0,  202,    2, 0x06,   10 /* Public */,
      12,    1,  203,    2, 0x06,   11 /* Public */,
      14,    1,  206,    2, 0x06,   13 /* Public */,
      16,    1,  209,    2, 0x06,   15 /* Public */,
      18,    0,  212,    2, 0x06,   17 /* Public */,
      19,    2,  213,    2, 0x06,   18 /* Public */,
      22,    2,  218,    2, 0x06,   21 /* Public */,
      25,    0,  223,    2, 0x06,   24 /* Public */,
      26,    1,  224,    2, 0x06,   25 /* Public */,
      28,    1,  227,    2, 0x06,   27 /* Public */,
      30,    1,  230,    2, 0x06,   29 /* Public */,
      32,    2,  233,    2, 0x06,   31 /* Public */,
      36,    1,  238,    2, 0x06,   34 /* Public */,
      39,    0,  241,    2, 0x06,   36 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      40,    2,  242,    2, 0x0a,   37 /* Public */,
      43,    1,  247,    2, 0x0a,   40 /* Public */,
      44,    2,  250,    2, 0x0a,   42 /* Public */,
      47,    4,  255,    2, 0x0a,   45 /* Public */,
      52,    2,  264,    2, 0x0a,   50 /* Public */,
      52,    1,  269,    2, 0x2a,   53 /* Public | MethodCloned */,
      55,    2,  272,    2, 0x0a,   55 /* Public */,
      57,    0,  277,    2, 0x09,   58 /* Protected */,
      58,    0,  278,    2, 0x08,   59 /* Private */,
      59,    1,  279,    2, 0x08,   60 /* Private */,
      60,    1,  282,    2, 0x08,   62 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Bool,   31,
    QMetaType::Void, 0x80000000 | 33, QMetaType::Bool,   34,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   41,   42,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, 0x80000000 | 45, QMetaType::Bool,    2,   46,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   48,   49,   50,   51,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   53,   54,
    QMetaType::Void, 0x80000000 | 3,   53,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   56,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void Konsole::Emulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Emulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->lockPtyRequest((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->useUtf8Request((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->stateSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->zmodemDetected(); break;
        case 5: _t->changeTabTextColorRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->programUsesMouseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->programBracketedPasteModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->outputChanged(); break;
        case 9: _t->titleChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->imageSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->imageSizeInitialized(); break;
        case 12: _t->imageResizeRequest((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 13: _t->profileChangeCommandReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->flowControlKeyPressed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->cursorChanged((*reinterpret_cast< KeyboardCursorShape(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->handleCommandFromKeyboard((*reinterpret_cast< KeyboardTranslator::Command(*)>(_a[1]))); break;
        case 17: _t->outputFromKeypressEvent(); break;
        case 18: _t->setImageSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->sendText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->sendKeyEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->sendMouseEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 22: _t->sendString((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->sendString((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 24: _t->receiveData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->bufferedUpdate(); break;
        case 26: _t->showBulk(); break;
        case 27: _t->usesMouseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->bracketedPasteModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Emulation::*)(const char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::sendData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::lockPtyRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::useUtf8Request)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::stateSet)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::zmodemDetected)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::changeTabTextColorRequest)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::programUsesMouseChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::programBracketedPasteModeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::outputChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::titleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::imageSizeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::imageSizeInitialized)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::imageResizeRequest)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::profileChangeCommandReceived)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::flowControlKeyPressed)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(KeyboardCursorShape , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::cursorChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(KeyboardTranslator::Command );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::handleCommandFromKeyboard)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Emulation::outputFromKeypressEvent)) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject Konsole::Emulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Konsole__Emulation.offsetsAndSize,
    qt_meta_data_Konsole__Emulation,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Konsole__Emulation_t
, QtPrivate::TypeAndForceComplete<Emulation, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const char *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<KeyboardCursorShape, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<KeyboardTranslator::Command, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const char *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const char *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const char *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *Konsole::Emulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::Emulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Konsole__Emulation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::Emulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void Konsole::Emulation::sendData(const char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Konsole::Emulation::lockPtyRequest(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Konsole::Emulation::useUtf8Request(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Konsole::Emulation::stateSet(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Konsole::Emulation::zmodemDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Konsole::Emulation::changeTabTextColorRequest(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Konsole::Emulation::programUsesMouseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Konsole::Emulation::programBracketedPasteModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Konsole::Emulation::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Konsole::Emulation::titleChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Konsole::Emulation::imageSizeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Konsole::Emulation::imageSizeInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Konsole::Emulation::imageResizeRequest(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Konsole::Emulation::profileChangeCommandReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Konsole::Emulation::flowControlKeyPressed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Konsole::Emulation::cursorChanged(KeyboardCursorShape _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Konsole::Emulation::handleCommandFromKeyboard(KeyboardTranslator::Command _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Konsole::Emulation::outputFromKeypressEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

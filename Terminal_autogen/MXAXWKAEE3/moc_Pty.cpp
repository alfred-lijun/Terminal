/****************************************************************************
** Meta object code from reading C++ file 'Pty.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtermwidget/Pty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Konsole__Pty_t {
    const uint offsetsAndSize[24];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Konsole__Pty_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Konsole__Pty_t qt_meta_stringdata_Konsole__Pty = {
    {
QT_MOC_LITERAL(0, 12), // "Konsole::Pty"
QT_MOC_LITERAL(13, 12), // "receivedData"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 11), // "const char*"
QT_MOC_LITERAL(39, 6), // "buffer"
QT_MOC_LITERAL(46, 6), // "length"
QT_MOC_LITERAL(53, 11), // "setUtf8Mode"
QT_MOC_LITERAL(65, 2), // "on"
QT_MOC_LITERAL(68, 7), // "lockPty"
QT_MOC_LITERAL(76, 4), // "lock"
QT_MOC_LITERAL(81, 8), // "sendData"
QT_MOC_LITERAL(90, 12) // "dataReceived"

    },
    "Konsole::Pty\0receivedData\0\0const char*\0"
    "buffer\0length\0setUtf8Mode\0on\0lockPty\0"
    "lock\0sendData\0dataReceived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Konsole__Pty[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   49,    2, 0x0a,    4 /* Public */,
       8,    1,   52,    2, 0x0a,    6 /* Public */,
      10,    2,   55,    2, 0x0a,    8 /* Public */,
      11,    0,   60,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,

       0        // eod
};

void Konsole::Pty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Pty *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->receivedData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->setUtf8Mode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->lockPty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sendData((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->dataReceived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Pty::*)(const char * , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Pty::receivedData)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Konsole::Pty::staticMetaObject = { {
    QMetaObject::SuperData::link<KPtyProcess::staticMetaObject>(),
    qt_meta_stringdata_Konsole__Pty.offsetsAndSize,
    qt_meta_data_Konsole__Pty,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Konsole__Pty_t
, QtPrivate::TypeAndForceComplete<Pty, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const char *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const char *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Konsole::Pty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::Pty::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Konsole__Pty.stringdata0))
        return static_cast<void*>(this);
    return KPtyProcess::qt_metacast(_clname);
}

int Konsole::Pty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPtyProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Konsole::Pty::receivedData(const char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

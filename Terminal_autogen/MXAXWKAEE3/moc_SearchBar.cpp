/****************************************************************************
** Meta object code from reading C++ file 'SearchBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qtermwidget/SearchBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SearchBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchBar_t {
    const uint offsetsAndSize[20];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SearchBar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SearchBar_t qt_meta_stringdata_SearchBar = {
    {
QT_MOC_LITERAL(0, 9), // "SearchBar"
QT_MOC_LITERAL(10, 21), // "searchCriteriaChanged"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 23), // "highlightMatchesChanged"
QT_MOC_LITERAL(57, 16), // "highlightMatches"
QT_MOC_LITERAL(74, 8), // "findNext"
QT_MOC_LITERAL(83, 12), // "findPrevious"
QT_MOC_LITERAL(96, 12), // "noMatchFound"
QT_MOC_LITERAL(109, 4), // "hide"
QT_MOC_LITERAL(114, 20) // "clearBackgroundColor"

    },
    "SearchBar\0searchCriteriaChanged\0\0"
    "highlightMatchesChanged\0highlightMatches\0"
    "findNext\0findPrevious\0noMatchFound\0"
    "hide\0clearBackgroundColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchBar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    1,   57,    2, 0x06,    2 /* Public */,
       5,    0,   60,    2, 0x06,    4 /* Public */,
       6,    0,   61,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   62,    2, 0x0a,    6 /* Public */,
       8,    0,   63,    2, 0x0a,    7 /* Public */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SearchBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchCriteriaChanged(); break;
        case 1: _t->highlightMatchesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->findNext(); break;
        case 3: _t->findPrevious(); break;
        case 4: _t->noMatchFound(); break;
        case 5: _t->hide(); break;
        case 6: _t->clearBackgroundColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBar::searchCriteriaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchBar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBar::highlightMatchesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBar::findNext)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SearchBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchBar::findPrevious)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SearchBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SearchBar.offsetsAndSize,
    qt_meta_data_SearchBar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SearchBar_t
, QtPrivate::TypeAndForceComplete<SearchBar, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SearchBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SearchBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SearchBar::searchCriteriaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SearchBar::highlightMatchesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchBar::findNext()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SearchBar::findPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

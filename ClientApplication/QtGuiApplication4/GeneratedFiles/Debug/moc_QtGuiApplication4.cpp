/****************************************************************************
** Meta object code from reading C++ file 'QtGuiApplication4.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtGuiApplication4.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGuiApplication4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientApplication_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientApplication_t qt_meta_stringdata_ClientApplication = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ClientApplication"
QT_MOC_LITERAL(1, 18, 12), // "modelPressed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "checkBoxFiltered"
QT_MOC_LITERAL(4, 49, 7), // "ReadTXT"
QT_MOC_LITERAL(5, 57, 11), // "std::string"
QT_MOC_LITERAL(6, 69, 6), // "char[]"
QT_MOC_LITERAL(7, 76, 8), // "filename"
QT_MOC_LITERAL(8, 85, 9), // "wordIndex"
QT_MOC_LITERAL(9, 95, 1), // "s"
QT_MOC_LITERAL(10, 97, 10), // "closeEvent"
QT_MOC_LITERAL(11, 108, 12), // "QCloseEvent*"
QT_MOC_LITERAL(12, 121, 5) // "event"

    },
    "ClientApplication\0modelPressed\0\0"
    "checkBoxFiltered\0ReadTXT\0std::string\0"
    "char[]\0filename\0wordIndex\0s\0closeEvent\0"
    "QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    3,   36,    2, 0x08 /* Private */,
      10,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5, 0x80000000 | 6, QMetaType::Int, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void ClientApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientApplication *_t = static_cast<ClientApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelPressed(); break;
        case 1: _t->checkBoxFiltered(); break;
        case 2: { std::string _r = _t->ReadTXT((*reinterpret_cast< char(*)[]>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< std::string*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientApplication::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ClientApplication.data,
      qt_meta_data_ClientApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClientApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientApplication.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ClientApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'startatfordfield.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../startatfordfield.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startatfordfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_startAtFordField_t {
    QByteArrayData data[5];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_startAtFordField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_startAtFordField_t qt_meta_stringdata_startAtFordField = {
    {
QT_MOC_LITERAL(0, 0, 16), // "startAtFordField"
QT_MOC_LITERAL(1, 17, 34), // "on_pushButton_buySouvenirs_cl..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 34), // "on_pushButton_seePrefRoute_cl..."
QT_MOC_LITERAL(4, 88, 36) // "on_pushButton_buySouvenirs_2_..."

    },
    "startAtFordField\0on_pushButton_buySouvenirs_clicked\0"
    "\0on_pushButton_seePrefRoute_clicked\0"
    "on_pushButton_buySouvenirs_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_startAtFordField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void startAtFordField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        startAtFordField *_t = static_cast<startAtFordField *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_buySouvenirs_clicked(); break;
        case 1: _t->on_pushButton_seePrefRoute_clicked(); break;
        case 2: _t->on_pushButton_buySouvenirs_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject startAtFordField::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_startAtFordField.data,
      qt_meta_data_startAtFordField,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *startAtFordField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *startAtFordField::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_startAtFordField.stringdata0))
        return static_cast<void*>(const_cast< startAtFordField*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int startAtFordField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

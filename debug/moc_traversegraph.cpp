/****************************************************************************
** Meta object code from reading C++ file 'traversegraph.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../traversegraph.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'traversegraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_traversegraph_t {
    QByteArrayData data[8];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_traversegraph_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_traversegraph_t qt_meta_stringdata_traversegraph = {
    {
QT_MOC_LITERAL(0, 0, 13), // "traversegraph"
QT_MOC_LITERAL(1, 14, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 31), // "on_pushButton_backGraph_clicked"
QT_MOC_LITERAL(5, 85, 29), // "on_pushButton_backMST_clicked"
QT_MOC_LITERAL(6, 115, 29), // "on_pushButton_backDFS_clicked"
QT_MOC_LITERAL(7, 145, 29) // "on_pushButton_backBFS_clicked"

    },
    "traversegraph\0on_comboBox_currentIndexChanged\0"
    "\0index\0on_pushButton_backGraph_clicked\0"
    "on_pushButton_backMST_clicked\0"
    "on_pushButton_backDFS_clicked\0"
    "on_pushButton_backBFS_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_traversegraph[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void traversegraph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        traversegraph *_t = static_cast<traversegraph *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_backGraph_clicked(); break;
        case 2: _t->on_pushButton_backMST_clicked(); break;
        case 3: _t->on_pushButton_backDFS_clicked(); break;
        case 4: _t->on_pushButton_backBFS_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject traversegraph::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_traversegraph.data,
      qt_meta_data_traversegraph,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *traversegraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *traversegraph::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_traversegraph.stringdata0))
        return static_cast<void*>(const_cast< traversegraph*>(this));
    return QDialog::qt_metacast(_clname);
}

int traversegraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

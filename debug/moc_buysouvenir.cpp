/****************************************************************************
** Meta object code from reading C++ file 'buysouvenir.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../buysouvenir.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buysouvenir.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_buySouvenir_t {
    QByteArrayData data[11];
    char stringdata0[272];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_buySouvenir_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_buySouvenir_t qt_meta_stringdata_buySouvenir = {
    {
QT_MOC_LITERAL(0, 0, 11), // "buySouvenir"
QT_MOC_LITERAL(1, 12, 43), // "on_comboBox_stadiumName_curre..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 4), // "arg1"
QT_MOC_LITERAL(4, 62, 33), // "on_spinBox_qty_input_valueCha..."
QT_MOC_LITERAL(5, 96, 40), // "on_comboBox_souvenir_currentI..."
QT_MOC_LITERAL(6, 137, 31), // "on_pushButton_addToCart_clicked"
QT_MOC_LITERAL(7, 169, 37), // "on_pushButton_confirmPurchase..."
QT_MOC_LITERAL(8, 207, 31), // "on_pushButton_resetCart_clicked"
QT_MOC_LITERAL(9, 239, 10), // "setReceipt"
QT_MOC_LITERAL(10, 250, 21) // "on_pushButton_clicked"

    },
    "buySouvenir\0on_comboBox_stadiumName_currentIndexChanged\0"
    "\0arg1\0on_spinBox_qty_input_valueChanged\0"
    "on_comboBox_souvenir_currentIndexChanged\0"
    "on_pushButton_addToCart_clicked\0"
    "on_pushButton_confirmPurchase_clicked\0"
    "on_pushButton_resetCart_clicked\0"
    "setReceipt\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_buySouvenir[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void buySouvenir::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        buySouvenir *_t = static_cast<buySouvenir *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_stadiumName_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_spinBox_qty_input_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_souvenir_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_addToCart_clicked(); break;
        case 4: _t->on_pushButton_confirmPurchase_clicked(); break;
        case 5: _t->on_pushButton_resetCart_clicked(); break;
        case 6: _t->setReceipt(); break;
        case 7: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject buySouvenir::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_buySouvenir.data,
      qt_meta_data_buySouvenir,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *buySouvenir::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *buySouvenir::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_buySouvenir.stringdata0))
        return static_cast<void*>(const_cast< buySouvenir*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int buySouvenir::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

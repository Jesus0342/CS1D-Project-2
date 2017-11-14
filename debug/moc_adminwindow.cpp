/****************************************************************************
** Meta object code from reading C++ file 'adminwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adminwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminWindow_t {
    QByteArrayData data[13];
    char stringdata0[334];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminWindow_t qt_meta_stringdata_AdminWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminWindow"
QT_MOC_LITERAL(1, 12, 46), // "on_comboBox_adminFunctions_cu..."
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 5), // "index"
QT_MOC_LITERAL(4, 66, 33), // "on_pushButton_addStadiums_cli..."
QT_MOC_LITERAL(5, 100, 27), // "on_pushButton_reset_clicked"
QT_MOC_LITERAL(6, 128, 37), // "on_pushButton_backAddStadiums..."
QT_MOC_LITERAL(7, 166, 28), // "on_pushButton_logout_clicked"
QT_MOC_LITERAL(8, 195, 23), // "populateBox_stadiumName"
QT_MOC_LITERAL(9, 219, 32), // "on_pushButton_confirmAdd_clicked"
QT_MOC_LITERAL(10, 252, 33), // "on_pushButton_clearFields_cli..."
QT_MOC_LITERAL(11, 286, 42), // "on_comboBox_stadiumList_curre..."
QT_MOC_LITERAL(12, 329, 4) // "arg1"

    },
    "AdminWindow\0on_comboBox_adminFunctions_currentIndexChanged\0"
    "\0index\0on_pushButton_addStadiums_clicked\0"
    "on_pushButton_reset_clicked\0"
    "on_pushButton_backAddStadiums_clicked\0"
    "on_pushButton_logout_clicked\0"
    "populateBox_stadiumName\0"
    "on_pushButton_confirmAdd_clicked\0"
    "on_pushButton_clearFields_clicked\0"
    "on_comboBox_stadiumList_currentTextChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void AdminWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminWindow *_t = static_cast<AdminWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_comboBox_adminFunctions_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_addStadiums_clicked(); break;
        case 2: _t->on_pushButton_reset_clicked(); break;
        case 3: _t->on_pushButton_backAddStadiums_clicked(); break;
        case 4: _t->on_pushButton_logout_clicked(); break;
        case 5: _t->populateBox_stadiumName(); break;
        case 6: _t->on_pushButton_confirmAdd_clicked(); break;
        case 7: _t->on_pushButton_clearFields_clicked(); break;
        case 8: _t->on_comboBox_stadiumList_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AdminWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdminWindow.data,
      qt_meta_data_AdminWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdminWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdminWindow.stringdata0))
        return static_cast<void*>(const_cast< AdminWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdminWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'flcreatezcdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flcreatezcdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flcreatezcdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FLCreateZCDlg_t {
    QByteArrayData data[7];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FLCreateZCDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FLCreateZCDlg_t qt_meta_stringdata_FLCreateZCDlg = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FLCreateZCDlg"
QT_MOC_LITERAL(1, 14, 5), // "onAdd"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "onDelete"
QT_MOC_LITERAL(4, 30, 6), // "OnEdit"
QT_MOC_LITERAL(5, 37, 4), // "onOk"
QT_MOC_LITERAL(6, 42, 8) // "onCancle"

    },
    "FLCreateZCDlg\0onAdd\0\0onDelete\0OnEdit\0"
    "onOk\0onCancle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FLCreateZCDlg[] = {

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
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FLCreateZCDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FLCreateZCDlg *_t = static_cast<FLCreateZCDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAdd(); break;
        case 1: _t->onDelete(); break;
        case 2: _t->OnEdit(); break;
        case 3: _t->onOk(); break;
        case 4: _t->onCancle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FLCreateZCDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FLCreateZCDlg.data,
      qt_meta_data_FLCreateZCDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FLCreateZCDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FLCreateZCDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FLCreateZCDlg.stringdata0))
        return static_cast<void*>(const_cast< FLCreateZCDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int FLCreateZCDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

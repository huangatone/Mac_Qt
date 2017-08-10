/****************************************************************************
** Meta object code from reading C++ file 'flcreatefloordlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flcreatefloordlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flcreatefloordlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FLCreateFloorDlg_t {
    QByteArrayData data[8];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FLCreateFloorDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FLCreateFloorDlg_t qt_meta_stringdata_FLCreateFloorDlg = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FLCreateFloorDlg"
QT_MOC_LITERAL(1, 17, 13), // "onSelectGraph"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "onAdd"
QT_MOC_LITERAL(4, 38, 8), // "onDelete"
QT_MOC_LITERAL(5, 47, 6), // "OnEdit"
QT_MOC_LITERAL(6, 54, 4), // "onOk"
QT_MOC_LITERAL(7, 59, 8) // "onCancle"

    },
    "FLCreateFloorDlg\0onSelectGraph\0\0onAdd\0"
    "onDelete\0OnEdit\0onOk\0onCancle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FLCreateFloorDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FLCreateFloorDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FLCreateFloorDlg *_t = static_cast<FLCreateFloorDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSelectGraph(); break;
        case 1: _t->onAdd(); break;
        case 2: _t->onDelete(); break;
        case 3: _t->OnEdit(); break;
        case 4: _t->onOk(); break;
        case 5: _t->onCancle(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FLCreateFloorDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FLCreateFloorDlg.data,
      qt_meta_data_FLCreateFloorDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FLCreateFloorDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FLCreateFloorDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FLCreateFloorDlg.stringdata0))
        return static_cast<void*>(const_cast< FLCreateFloorDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int FLCreateFloorDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'flcreatejobdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flcreatejobdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flcreatejobdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FLCreateJobDlg_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FLCreateJobDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FLCreateJobDlg_t qt_meta_stringdata_FLCreateJobDlg = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FLCreateJobDlg"
QT_MOC_LITERAL(1, 15, 12), // "onSelectPath"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "onSelectGraph"
QT_MOC_LITERAL(4, 43, 10), // "onAddFloor"
QT_MOC_LITERAL(5, 54, 13), // "onDeleteFloor"
QT_MOC_LITERAL(6, 68, 11), // "OnEditFllor"
QT_MOC_LITERAL(7, 80, 4), // "onOk"
QT_MOC_LITERAL(8, 85, 8), // "onCancle"
QT_MOC_LITERAL(9, 94, 15), // "on_item_clicked"
QT_MOC_LITERAL(10, 110, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 127, 18) // "on_jobname_changed"

    },
    "FLCreateJobDlg\0onSelectPath\0\0onSelectGraph\0"
    "onAddFloor\0onDeleteFloor\0OnEditFllor\0"
    "onOk\0onCancle\0on_item_clicked\0"
    "QTreeWidgetItem*\0on_jobname_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FLCreateJobDlg[] = {

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
       1,    0,   59,    2, 0x09 /* Protected */,
       3,    0,   60,    2, 0x09 /* Protected */,
       4,    0,   61,    2, 0x09 /* Protected */,
       5,    0,   62,    2, 0x09 /* Protected */,
       6,    0,   63,    2, 0x09 /* Protected */,
       7,    0,   64,    2, 0x09 /* Protected */,
       8,    0,   65,    2, 0x09 /* Protected */,
       9,    2,   66,    2, 0x09 /* Protected */,
      11,    1,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void FLCreateJobDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FLCreateJobDlg *_t = static_cast<FLCreateJobDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSelectPath(); break;
        case 1: _t->onSelectGraph(); break;
        case 2: _t->onAddFloor(); break;
        case 3: _t->onDeleteFloor(); break;
        case 4: _t->OnEditFllor(); break;
        case 5: _t->onOk(); break;
        case 6: _t->onCancle(); break;
        case 7: _t->on_item_clicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_jobname_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FLCreateJobDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FLCreateJobDlg.data,
      qt_meta_data_FLCreateJobDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FLCreateJobDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FLCreateJobDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FLCreateJobDlg.stringdata0))
        return static_cast<void*>(const_cast< FLCreateJobDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int FLCreateJobDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

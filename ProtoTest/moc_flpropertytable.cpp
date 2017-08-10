/****************************************************************************
** Meta object code from reading C++ file 'flpropertytable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flpropertytable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flpropertytable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FLPropertyTable_t {
    QByteArrayData data[12];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FLPropertyTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FLPropertyTable_t qt_meta_stringdata_FLPropertyTable = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FLPropertyTable"
QT_MOC_LITERAL(1, 16, 15), // "PropertyChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "FLObject*"
QT_MOC_LITERAL(4, 43, 4), // "node"
QT_MOC_LITERAL(5, 48, 6), // "strKey"
QT_MOC_LITERAL(6, 55, 8), // "strValue"
QT_MOC_LITERAL(7, 64, 11), // "editChanged"
QT_MOC_LITERAL(8, 76, 12), // "comboChanged"
QT_MOC_LITERAL(9, 89, 16), // "on_edit_finished"
QT_MOC_LITERAL(10, 106, 11), // "on_setcorrs"
QT_MOC_LITERAL(11, 118, 8) // "on_setff"

    },
    "FLPropertyTable\0PropertyChanged\0\0"
    "FLObject*\0node\0strKey\0strValue\0"
    "editChanged\0comboChanged\0on_edit_finished\0"
    "on_setcorrs\0on_setff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FLPropertyTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   51,    2, 0x09 /* Protected */,
       8,    1,   54,    2, 0x09 /* Protected */,
       9,    0,   57,    2, 0x09 /* Protected */,
      10,    0,   58,    2, 0x09 /* Protected */,
      11,    0,   59,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FLPropertyTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FLPropertyTable *_t = static_cast<FLPropertyTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PropertyChanged((*reinterpret_cast< FLObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->editChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->comboChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_edit_finished(); break;
        case 4: _t->on_setcorrs(); break;
        case 5: _t->on_setff(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FLPropertyTable::*_t)(FLObject * , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FLPropertyTable::PropertyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FLPropertyTable::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_FLPropertyTable.data,
      qt_meta_data_FLPropertyTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FLPropertyTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FLPropertyTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FLPropertyTable.stringdata0))
        return static_cast<void*>(const_cast< FLPropertyTable*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int FLPropertyTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FLPropertyTable::PropertyChanged(FLObject * _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'flheatmap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flheatmap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flheatmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FLHeatMap_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FLHeatMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FLHeatMap_t qt_meta_stringdata_FLHeatMap = {
    {
QT_MOC_LITERAL(0, 0, 9), // "FLHeatMap"
QT_MOC_LITERAL(1, 10, 13), // "on_Tx_changed"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "FLHeatMap\0on_Tx_changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FLHeatMap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void FLHeatMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FLHeatMap *_t = static_cast<FLHeatMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Tx_changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FLHeatMap::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FLHeatMap::on_Tx_changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FLHeatMap::staticMetaObject = {
    { &FLObject::staticMetaObject, qt_meta_stringdata_FLHeatMap.data,
      qt_meta_data_FLHeatMap,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FLHeatMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FLHeatMap::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FLHeatMap.stringdata0))
        return static_cast<void*>(const_cast< FLHeatMap*>(this));
    return FLObject::qt_metacast(_clname);
}

int FLHeatMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FLObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FLHeatMap::on_Tx_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

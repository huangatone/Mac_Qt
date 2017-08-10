/****************************************************************************
** Meta object code from reading C++ file 'flfloorview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "flfloorview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flfloorview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FLFloorView_t {
    QByteArrayData data[20];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FLFloorView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FLFloorView_t qt_meta_stringdata_FLFloorView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FLFloorView"
QT_MOC_LITERAL(1, 12, 21), // "Item_Position_Changed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(4, 50, 16), // "focusItemChanged"
QT_MOC_LITERAL(5, 67, 9), // "FLObject*"
QT_MOC_LITERAL(6, 77, 3), // "obj"
QT_MOC_LITERAL(7, 81, 18), // "on_PropertyChanged"
QT_MOC_LITERAL(8, 100, 6), // "strKey"
QT_MOC_LITERAL(9, 107, 14), // "on_data_Change"
QT_MOC_LITERAL(10, 122, 18), // "on_FLObject_Change"
QT_MOC_LITERAL(11, 141, 4), // "mode"
QT_MOC_LITERAL(12, 146, 13), // "refresh_items"
QT_MOC_LITERAL(13, 160, 11), // "on_write_zc"
QT_MOC_LITERAL(14, 172, 14), // "on_select_wios"
QT_MOC_LITERAL(15, 187, 15), // "ShowContextMenu"
QT_MOC_LITERAL(16, 203, 3), // "pos"
QT_MOC_LITERAL(17, 207, 14), // "toggleMoveable"
QT_MOC_LITERAL(18, 222, 15), // "changeFloorPlan"
QT_MOC_LITERAL(19, 238, 10) // "fit_window"

    },
    "FLFloorView\0Item_Position_Changed\0\0"
    "QGraphicsItem*\0focusItemChanged\0"
    "FLObject*\0obj\0on_PropertyChanged\0"
    "strKey\0on_data_Change\0on_FLObject_Change\0"
    "mode\0refresh_items\0on_write_zc\0"
    "on_select_wios\0ShowContextMenu\0pos\0"
    "toggleMoveable\0changeFloorPlan\0"
    "fit_window"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FLFloorView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   80,    2, 0x09 /* Protected */,
       9,    1,   83,    2, 0x09 /* Protected */,
      10,    2,   86,    2, 0x09 /* Protected */,
      12,    0,   91,    2, 0x09 /* Protected */,
      13,    0,   92,    2, 0x09 /* Protected */,
      14,    0,   93,    2, 0x09 /* Protected */,
      15,    1,   94,    2, 0x0a /* Public */,
      17,    0,   97,    2, 0x0a /* Public */,
      18,    0,   98,    2, 0x0a /* Public */,
      19,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FLFloorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FLFloorView *_t = static_cast<FLFloorView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Item_Position_Changed((*reinterpret_cast< QGraphicsItem*(*)>(_a[1]))); break;
        case 1: _t->focusItemChanged((*reinterpret_cast< FLObject*(*)>(_a[1]))); break;
        case 2: _t->on_PropertyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_data_Change((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_FLObject_Change((*reinterpret_cast< FLObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->refresh_items(); break;
        case 6: _t->on_write_zc(); break;
        case 7: _t->on_select_wios(); break;
        case 8: _t->ShowContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->toggleMoveable(); break;
        case 10: _t->changeFloorPlan(); break;
        case 11: _t->fit_window(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLObject* >(); break;
            }
            break;
        case 4:
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
            typedef void (FLFloorView::*_t)(QGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FLFloorView::Item_Position_Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FLFloorView::*_t)(FLObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FLFloorView::focusItemChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FLFloorView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_FLFloorView.data,
      qt_meta_data_FLFloorView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FLFloorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FLFloorView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FLFloorView.stringdata0))
        return static_cast<void*>(const_cast< FLFloorView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int FLFloorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void FLFloorView::Item_Position_Changed(QGraphicsItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FLFloorView::focusItemChanged(FLObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

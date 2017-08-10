/****************************************************************************
** Meta object code from reading C++ file 'fltreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fltreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fltreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FLTreeWidget_t {
    QByteArrayData data[21];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FLTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FLTreeWidget_t qt_meta_stringdata_FLTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FLTreeWidget"
QT_MOC_LITERAL(1, 13, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 49, 13), // "itemMenuEvent"
QT_MOC_LITERAL(5, 63, 4), // "item"
QT_MOC_LITERAL(6, 68, 2), // "pt"
QT_MOC_LITERAL(7, 71, 7), // "addNode"
QT_MOC_LITERAL(8, 79, 6), // "FLJob*"
QT_MOC_LITERAL(9, 86, 4), // "pJob"
QT_MOC_LITERAL(10, 91, 8), // "FLFloor*"
QT_MOC_LITERAL(11, 100, 6), // "FLWio*"
QT_MOC_LITERAL(12, 107, 9), // "FLObject*"
QT_MOC_LITERAL(13, 117, 10), // "deleteNode"
QT_MOC_LITERAL(14, 128, 6), // "pFloor"
QT_MOC_LITERAL(15, 135, 4), // "pWio"
QT_MOC_LITERAL(16, 140, 4), // "pObj"
QT_MOC_LITERAL(17, 145, 17), // "FLZoneControllor*"
QT_MOC_LITERAL(18, 163, 18), // "on_propertyChanged"
QT_MOC_LITERAL(19, 182, 10), // "parentItem"
QT_MOC_LITERAL(20, 193, 4) // "node"

    },
    "FLTreeWidget\0itemDoubleClicked\0\0"
    "QTreeWidgetItem*\0itemMenuEvent\0item\0"
    "pt\0addNode\0FLJob*\0pJob\0FLFloor*\0FLWio*\0"
    "FLObject*\0deleteNode\0pFloor\0pWio\0pObj\0"
    "FLZoneControllor*\0on_propertyChanged\0"
    "parentItem\0node"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FLTreeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    2,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   97,    2, 0x0a /* Public */,
       7,    1,  100,    2, 0x0a /* Public */,
       7,    1,  103,    2, 0x0a /* Public */,
       7,    1,  106,    2, 0x0a /* Public */,
      13,    1,  109,    2, 0x0a /* Public */,
      13,    1,  112,    2, 0x0a /* Public */,
      13,    1,  115,    2, 0x0a /* Public */,
      13,    1,  118,    2, 0x0a /* Public */,
      13,    1,  121,    2, 0x0a /* Public */,
      18,    1,  124,    2, 0x0a /* Public */,
      19,    1,  127,    2, 0x0a /* Public */,
      19,    1,  130,    2, 0x0a /* Public */,
      19,    1,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 10,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void, 0x80000000 | 12,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 10,   14,
    QMetaType::Void, 0x80000000 | 11,   15,
    QMetaType::Void, 0x80000000 | 12,   16,
    QMetaType::Void, 0x80000000 | 17,   16,
    QMetaType::Void, QMetaType::QString,    2,
    0x80000000 | 3, 0x80000000 | 10,   20,
    0x80000000 | 3, 0x80000000 | 17,   20,
    0x80000000 | 3, 0x80000000 | 11,   20,

       0        // eod
};

void FLTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FLTreeWidget *_t = static_cast<FLTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->itemMenuEvent((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QPoint(*)>(_a[2]))); break;
        case 2: _t->addNode((*reinterpret_cast< FLJob*(*)>(_a[1]))); break;
        case 3: _t->addNode((*reinterpret_cast< FLFloor*(*)>(_a[1]))); break;
        case 4: _t->addNode((*reinterpret_cast< FLWio*(*)>(_a[1]))); break;
        case 5: _t->addNode((*reinterpret_cast< FLObject*(*)>(_a[1]))); break;
        case 6: _t->deleteNode((*reinterpret_cast< FLJob*(*)>(_a[1]))); break;
        case 7: _t->deleteNode((*reinterpret_cast< FLFloor*(*)>(_a[1]))); break;
        case 8: _t->deleteNode((*reinterpret_cast< FLWio*(*)>(_a[1]))); break;
        case 9: _t->deleteNode((*reinterpret_cast< FLObject*(*)>(_a[1]))); break;
        case 10: _t->deleteNode((*reinterpret_cast< FLZoneControllor*(*)>(_a[1]))); break;
        case 11: _t->on_propertyChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: { QTreeWidgetItem* _r = _t->parentItem((*reinterpret_cast< FLFloor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 13: { QTreeWidgetItem* _r = _t->parentItem((*reinterpret_cast< FLZoneControllor*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        case 14: { QTreeWidgetItem* _r = _t->parentItem((*reinterpret_cast< FLWio*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QTreeWidgetItem**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLJob* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLFloor* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLWio* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLObject* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLJob* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLFloor* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLWio* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLObject* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLZoneControllor* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLFloor* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLZoneControllor* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FLWio* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FLTreeWidget::*_t)(QTreeWidgetItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FLTreeWidget::itemDoubleClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FLTreeWidget::*_t)(QTreeWidgetItem * , QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FLTreeWidget::itemMenuEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FLTreeWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_FLTreeWidget.data,
      qt_meta_data_FLTreeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FLTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FLTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FLTreeWidget.stringdata0))
        return static_cast<void*>(const_cast< FLTreeWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int FLTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void FLTreeWidget::itemDoubleClicked(QTreeWidgetItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FLTreeWidget::itemMenuEvent(QTreeWidgetItem * _t1, QPoint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

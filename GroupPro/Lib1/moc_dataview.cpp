/****************************************************************************
** Meta object code from reading C++ file 'dataview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dataview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HtmlItemDelegate_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HtmlItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HtmlItemDelegate_t qt_meta_stringdata_HtmlItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 16) // "HtmlItemDelegate"

    },
    "HtmlItemDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HtmlItemDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void HtmlItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject HtmlItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_HtmlItemDelegate.data,
      qt_meta_data_HtmlItemDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HtmlItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtmlItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HtmlItemDelegate.stringdata0))
        return static_cast<void*>(const_cast< HtmlItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int HtmlItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DataView_t {
    QByteArrayData data[19];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataView_t qt_meta_stringdata_DataView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DataView"
QT_MOC_LITERAL(1, 9, 12), // "ReplyRequest"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "AddRequest"
QT_MOC_LITERAL(4, 34, 10), // "DelRequest"
QT_MOC_LITERAL(5, 45, 11), // "EditRequest"
QT_MOC_LITERAL(6, 57, 11), // "CodeChanged"
QT_MOC_LITERAL(7, 69, 4), // "code"
QT_MOC_LITERAL(8, 74, 12), // "slotPrevData"
QT_MOC_LITERAL(9, 87, 12), // "slotNextData"
QT_MOC_LITERAL(10, 100, 23), // "slotCurrentIndexChanged"
QT_MOC_LITERAL(11, 124, 5), // "index"
QT_MOC_LITERAL(12, 130, 20), // "slotEnableReasonMenu"
QT_MOC_LITERAL(13, 151, 6), // "bReply"
QT_MOC_LITERAL(14, 158, 5), // "bEdit"
QT_MOC_LITERAL(15, 164, 4), // "bDel"
QT_MOC_LITERAL(16, 169, 19), // "slotEnableQueryMenu"
QT_MOC_LITERAL(17, 189, 4), // "bAdd"
QT_MOC_LITERAL(18, 194, 18) // "on_btnView_clicked"

    },
    "DataView\0ReplyRequest\0\0AddRequest\0"
    "DelRequest\0EditRequest\0CodeChanged\0"
    "code\0slotPrevData\0slotNextData\0"
    "slotCurrentIndexChanged\0index\0"
    "slotEnableReasonMenu\0bReply\0bEdit\0"
    "bDel\0slotEnableQueryMenu\0bAdd\0"
    "on_btnView_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x0a /* Public */,
      12,    3,   81,    2, 0x0a /* Public */,
      16,    4,   88,    2, 0x0a /* Public */,
      18,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   13,   14,   15,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   17,   14,   13,   15,
    QMetaType::Void,

       0        // eod
};

void DataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataView *_t = static_cast<DataView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReplyRequest(); break;
        case 1: _t->AddRequest(); break;
        case 2: _t->DelRequest(); break;
        case 3: _t->EditRequest(); break;
        case 4: _t->CodeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotPrevData(); break;
        case 6: _t->slotNextData(); break;
        case 7: _t->slotCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slotEnableReasonMenu((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->slotEnableQueryMenu((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: _t->on_btnView_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DataView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataView::ReplyRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DataView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataView::AddRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DataView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataView::DelRequest)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DataView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataView::EditRequest)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DataView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DataView::CodeChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject DataView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DataView.data,
      qt_meta_data_DataView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataView.stringdata0))
        return static_cast<void*>(const_cast< DataView*>(this));
    return QWidget::qt_metacast(_clname);
}

int DataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void DataView::ReplyRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DataView::AddRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void DataView::DelRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DataView::EditRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DataView::CodeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

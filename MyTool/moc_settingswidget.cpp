/****************************************************************************
** Meta object code from reading C++ file 'settingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsWidget_t {
    QByteArrayData data[20];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsWidget_t qt_meta_stringdata_SettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SettingsWidget"
QT_MOC_LITERAL(1, 15, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "saveSettings"
QT_MOC_LITERAL(4, 45, 10), // "changeFont"
QT_MOC_LITERAL(5, 56, 34), // "on_pushButtonChangeSDKPath_pr..."
QT_MOC_LITERAL(6, 91, 11), // "getSettings"
QT_MOC_LITERAL(7, 103, 19), // "settingsSlotChanged"
QT_MOC_LITERAL(8, 123, 13), // "chooseFontApp"
QT_MOC_LITERAL(9, 137, 16), // "chooseFontTables"
QT_MOC_LITERAL(10, 154, 15), // "chooseFontShell"
QT_MOC_LITERAL(11, 170, 21), // "setSettingsToDefaults"
QT_MOC_LITERAL(12, 192, 31), // "on_buttonRemoveSettings_pressed"
QT_MOC_LITERAL(13, 224, 12), // "curveChanged"
QT_MOC_LITERAL(14, 237, 10), // "changePage"
QT_MOC_LITERAL(15, 248, 17), // "animationFinished"
QT_MOC_LITERAL(16, 266, 26), // "on_buttonAssociate_clicked"
QT_MOC_LITERAL(17, 293, 36), // "on_shellPushButtonBackground_..."
QT_MOC_LITERAL(18, 330, 30), // "on_shellPushButtonFont_clicked"
QT_MOC_LITERAL(19, 361, 17) // "detectSdExtFolder"

    },
    "SettingsWidget\0settingsChanged\0\0"
    "saveSettings\0changeFont\0"
    "on_pushButtonChangeSDKPath_pressed\0"
    "getSettings\0settingsSlotChanged\0"
    "chooseFontApp\0chooseFontTables\0"
    "chooseFontShell\0setSettingsToDefaults\0"
    "on_buttonRemoveSettings_pressed\0"
    "curveChanged\0changePage\0animationFinished\0"
    "on_buttonAssociate_clicked\0"
    "on_shellPushButtonBackground_clicked\0"
    "on_shellPushButtonFont_clicked\0"
    "detectSdExtFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  105,    2, 0x0a /* Public */,
       4,    0,  106,    2, 0x0a /* Public */,
       5,    0,  107,    2, 0x08 /* Private */,
       6,    0,  108,    2, 0x08 /* Private */,
       7,    0,  109,    2, 0x08 /* Private */,
       8,    0,  110,    2, 0x08 /* Private */,
       9,    0,  111,    2, 0x08 /* Private */,
      10,    0,  112,    2, 0x08 /* Private */,
      11,    0,  113,    2, 0x08 /* Private */,
      12,    0,  114,    2, 0x08 /* Private */,
      13,    1,  115,    2, 0x08 /* Private */,
      14,    1,  118,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,
      16,    0,  122,    2, 0x08 /* Private */,
      17,    0,  123,    2, 0x08 /* Private */,
      18,    0,  124,    2, 0x08 /* Private */,
      19,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsWidget *_t = static_cast<SettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->changeFont(); break;
        case 3: _t->on_pushButtonChangeSDKPath_pressed(); break;
        case 4: _t->getSettings(); break;
        case 5: _t->settingsSlotChanged(); break;
        case 6: _t->chooseFontApp(); break;
        case 7: _t->chooseFontTables(); break;
        case 8: _t->chooseFontShell(); break;
        case 9: _t->setSettingsToDefaults(); break;
        case 10: _t->on_buttonRemoveSettings_pressed(); break;
        case 11: _t->curveChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->changePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->animationFinished(); break;
        case 14: _t->on_buttonAssociate_clicked(); break;
        case 15: _t->on_shellPushButtonBackground_clicked(); break;
        case 16: _t->on_shellPushButtonFont_clicked(); break;
        case 17: _t->detectSdExtFolder(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SettingsWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsWidget::settingsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsWidget.data,
      qt_meta_data_SettingsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsWidget.stringdata0))
        return static_cast<void*>(const_cast< SettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void SettingsWidget::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

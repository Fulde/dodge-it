/****************************************************************************
** Meta object code from reading C++ file 'widgetgame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Dodge-it/widgetgame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetgame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WidgetGame_t {
<<<<<<< HEAD
    QByteArrayData data[3];
    char stringdata[33];
=======
    QByteArrayData data[4];
    char stringdata[42];
>>>>>>> f63247787ccb70ce1f2f52054b4a468f268810b0
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WidgetGame_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WidgetGame_t qt_meta_stringdata_WidgetGame = {
    {
QT_MOC_LITERAL(0, 0, 10),
<<<<<<< HEAD
QT_MOC_LITERAL(1, 11, 19),
QT_MOC_LITERAL(2, 31, 0)
    },
    "WidgetGame\0on_btnPause_clicked\0\0"
=======
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 19)
    },
    "WidgetGame\0timerHit\0\0on_btnPause_clicked\0"
>>>>>>> f63247787ccb70ce1f2f52054b4a468f268810b0
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetGame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
<<<<<<< HEAD
       1,   14, // methods
=======
       2,   14, // methods
>>>>>>> f63247787ccb70ce1f2f52054b4a468f268810b0
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
<<<<<<< HEAD
       1,    0,   19,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
=======
       1,    0,   24,    2, 0x08,
       3,    0,   25,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
>>>>>>> f63247787ccb70ce1f2f52054b4a468f268810b0

       0        // eod
};

void WidgetGame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetGame *_t = static_cast<WidgetGame *>(_o);
        switch (_id) {
<<<<<<< HEAD
        case 0: _t->on_btnPause_clicked(); break;
=======
        case 0: _t->timerHit(); break;
        case 1: _t->on_btnPause_clicked(); break;
>>>>>>> f63247787ccb70ce1f2f52054b4a468f268810b0
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WidgetGame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetGame.data,
      qt_meta_data_WidgetGame,  qt_static_metacall, 0, 0}
};


const QMetaObject *WidgetGame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetGame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetGame.stringdata))
        return static_cast<void*>(const_cast< WidgetGame*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetGame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
<<<<<<< HEAD
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
=======
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
>>>>>>> f63247787ccb70ce1f2f52054b4a468f268810b0
    }
    return _id;
}
QT_END_MOC_NAMESPACE

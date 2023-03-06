/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DndEncounterTracker1/mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[23];
    char stringdata5[21];
    char stringdata6[27];
    char stringdata7[33];
    char stringdata8[22];
    char stringdata9[26];
    char stringdata10[26];
    char stringdata11[10];
    char stringdata12[7];
    char stringdata13[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 21),  // "on_addEntityB_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 24),  // "on_removeEntityB_clicked"
        QT_MOC_LITERAL(59, 22),  // "on_startButton_clicked"
        QT_MOC_LITERAL(82, 20),  // "on_nextTurnB_clicked"
        QT_MOC_LITERAL(103, 26),  // "on_activateActionB_clicked"
        QT_MOC_LITERAL(130, 32),  // "on_removeFromQueueButton_clicked"
        QT_MOC_LITERAL(163, 21),  // "on_saveButton_clicked"
        QT_MOC_LITERAL(185, 25),  // "on_actionimport_triggered"
        QT_MOC_LITERAL(211, 25),  // "on_actionexport_triggered"
        QT_MOC_LITERAL(237, 9),  // "getEntity"
        QT_MOC_LITERAL(247, 6),  // "Entity"
        QT_MOC_LITERAL(254, 6)   // "entity"
    },
    "MainWindow",
    "on_addEntityB_clicked",
    "",
    "on_removeEntityB_clicked",
    "on_startButton_clicked",
    "on_nextTurnB_clicked",
    "on_activateActionB_clicked",
    "on_removeFromQueueButton_clicked",
    "on_saveButton_clicked",
    "on_actionimport_triggered",
    "on_actionexport_triggered",
    "getEntity",
    "Entity",
    "entity"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    0,   82,    2, 0x08,    9 /* Private */,
      11,    1,   83,    2, 0x0a,   10 /* Public */,

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
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_addEntityB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeEntityB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nextTurnB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_activateActionB_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_removeFromQueueButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionimport_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionexport_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getEntity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Entity, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_addEntityB_clicked(); break;
        case 1: _t->on_removeEntityB_clicked(); break;
        case 2: _t->on_startButton_clicked(); break;
        case 3: _t->on_nextTurnB_clicked(); break;
        case 4: _t->on_activateActionB_clicked(); break;
        case 5: _t->on_removeFromQueueButton_clicked(); break;
        case 6: _t->on_saveButton_clicked(); break;
        case 7: _t->on_actionimport_triggered(); break;
        case 8: _t->on_actionexport_triggered(); break;
        case 9: _t->getEntity((*reinterpret_cast< std::add_pointer_t<Entity>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

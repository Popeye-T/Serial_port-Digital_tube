/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_open_serial_port_clicked",
    "",
    "on_message_send_btn_clicked",
    "on_serial_scan_clicked",
    "on_number_send_btn_clicked",
    "on_on_message_send_clean_btn_clicked_clicked",
    "isSerialOpen",
    "sendHexData",
    "sendPlainData",
    "updateDateTime",
    "on_local_time_freq_btn_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[23];
    char stringdata5[27];
    char stringdata6[45];
    char stringdata7[13];
    char stringdata8[12];
    char stringdata9[14];
    char stringdata10[15];
    char stringdata11[31];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 27),  // "on_open_serial_port_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 27),  // "on_message_send_btn_clicked"
        QT_MOC_LITERAL(68, 22),  // "on_serial_scan_clicked"
        QT_MOC_LITERAL(91, 26),  // "on_number_send_btn_clicked"
        QT_MOC_LITERAL(118, 44),  // "on_on_message_send_clean_btn_..."
        QT_MOC_LITERAL(163, 12),  // "isSerialOpen"
        QT_MOC_LITERAL(176, 11),  // "sendHexData"
        QT_MOC_LITERAL(188, 13),  // "sendPlainData"
        QT_MOC_LITERAL(202, 14),  // "updateDateTime"
        QT_MOC_LITERAL(217, 30)   // "on_local_time_freq_btn_clicked"
    },
    "MainWindow",
    "on_open_serial_port_clicked",
    "",
    "on_message_send_btn_clicked",
    "on_serial_scan_clicked",
    "on_number_send_btn_clicked",
    "on_on_message_send_clean_btn_clicked_clicked",
    "isSerialOpen",
    "sendHexData",
    "sendPlainData",
    "updateDateTime",
    "on_local_time_freq_btn_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
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
      11,    0,   83,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_open_serial_port_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_message_send_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_serial_scan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_number_send_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_on_message_send_clean_btn_clicked_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSerialOpen'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendHexData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendPlainData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDateTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_local_time_freq_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_open_serial_port_clicked(); break;
        case 1: _t->on_message_send_btn_clicked(); break;
        case 2: _t->on_serial_scan_clicked(); break;
        case 3: _t->on_number_send_btn_clicked(); break;
        case 4: _t->on_on_message_send_clean_btn_clicked_clicked(); break;
        case 5: { bool _r = _t->isSerialOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->sendHexData(); break;
        case 7: _t->sendPlainData(); break;
        case 8: _t->updateDateTime(); break;
        case 9: _t->on_local_time_freq_btn_clicked(); break;
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
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
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

/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
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
    "data_recv",
    "data_recv_hex",
    "on_serial_scan_clicked",
    "on_number_send_btn_clicked",
    "on_message_recv_clean_btn_clicked",
    "on_on_message_send_clean_btn_clicked_clicked",
    "on_checkBox_recv_clicked",
    "isSerialOpen",
    "sendHexData",
    "sendPlainData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[10];
    char stringdata5[14];
    char stringdata6[23];
    char stringdata7[27];
    char stringdata8[34];
    char stringdata9[45];
    char stringdata10[25];
    char stringdata11[13];
    char stringdata12[12];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 27),  // "on_open_serial_port_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 27),  // "on_message_send_btn_clicked"
        QT_MOC_LITERAL(68, 9),  // "data_recv"
        QT_MOC_LITERAL(78, 13),  // "data_recv_hex"
        QT_MOC_LITERAL(92, 22),  // "on_serial_scan_clicked"
        QT_MOC_LITERAL(115, 26),  // "on_number_send_btn_clicked"
        QT_MOC_LITERAL(142, 33),  // "on_message_recv_clean_btn_cli..."
        QT_MOC_LITERAL(176, 44),  // "on_on_message_send_clean_btn_..."
        QT_MOC_LITERAL(221, 24),  // "on_checkBox_recv_clicked"
        QT_MOC_LITERAL(246, 12),  // "isSerialOpen"
        QT_MOC_LITERAL(259, 11),  // "sendHexData"
        QT_MOC_LITERAL(271, 13)   // "sendPlainData"
    },
    "MainWindow",
    "on_open_serial_port_clicked",
    "",
    "on_message_send_btn_clicked",
    "data_recv",
    "data_recv_hex",
    "on_serial_scan_clicked",
    "on_number_send_btn_clicked",
    "on_message_recv_clean_btn_clicked",
    "on_on_message_send_clean_btn_clicked_clicked",
    "on_checkBox_recv_clicked",
    "isSerialOpen",
    "sendHexData",
    "sendPlainData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    0,   95,    2, 0x08,   10 /* Private */,
      12,    0,   96,    2, 0x08,   11 /* Private */,
      13,    0,   97,    2, 0x08,   12 /* Private */,

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
    QMetaType::Bool,
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
        // method 'data_recv'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'data_recv_hex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_serial_scan_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_number_send_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_message_recv_clean_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_on_message_send_clean_btn_clicked_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBox_recv_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSerialOpen'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendHexData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendPlainData'
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
        case 2: _t->data_recv(); break;
        case 3: _t->data_recv_hex(); break;
        case 4: _t->on_serial_scan_clicked(); break;
        case 5: _t->on_number_send_btn_clicked(); break;
        case 6: _t->on_message_recv_clean_btn_clicked(); break;
        case 7: _t->on_on_message_send_clean_btn_clicked_clicked(); break;
        case 8: _t->on_checkBox_recv_clicked(); break;
        case 9: { bool _r = _t->isSerialOpen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->sendHexData(); break;
        case 11: _t->sendPlainData(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP

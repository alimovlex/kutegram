/****************************************************************************
** Meta object code from reading C++ file 'platformutils.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/platformutils.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'platformutils.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlatformUtils_t {
    QByteArrayData data[25];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlatformUtils_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlatformUtils_t qt_meta_stringdata_PlatformUtils = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PlatformUtils"
QT_MOC_LITERAL(1, 14, 12), // "showAndRaise"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "quit"
QT_MOC_LITERAL(4, 33, 13), // "trayActivated"
QT_MOC_LITERAL(5, 47, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(6, 81, 6), // "reason"
QT_MOC_LITERAL(7, 88, 14), // "messageClicked"
QT_MOC_LITERAL(8, 103, 13), // "menuTriggered"
QT_MOC_LITERAL(9, 117, 8), // "QAction*"
QT_MOC_LITERAL(10, 126, 6), // "action"
QT_MOC_LITERAL(11, 133, 32), // "windowsExtendFrameIntoClientArea"
QT_MOC_LITERAL(12, 166, 4), // "left"
QT_MOC_LITERAL(13, 171, 3), // "top"
QT_MOC_LITERAL(14, 175, 5), // "right"
QT_MOC_LITERAL(15, 181, 6), // "bottom"
QT_MOC_LITERAL(16, 188, 27), // "windowsIsCompositionEnabled"
QT_MOC_LITERAL(17, 216, 28), // "windowsRealColorizationColor"
QT_MOC_LITERAL(18, 245, 9), // "isWindows"
QT_MOC_LITERAL(19, 255, 13), // "gotNewMessage"
QT_MOC_LITERAL(20, 269, 6), // "peerId"
QT_MOC_LITERAL(21, 276, 8), // "peerName"
QT_MOC_LITERAL(22, 285, 10), // "senderName"
QT_MOC_LITERAL(23, 296, 4), // "text"
QT_MOC_LITERAL(24, 301, 6) // "silent"

    },
    "PlatformUtils\0showAndRaise\0\0quit\0"
    "trayActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0messageClicked\0menuTriggered\0"
    "QAction*\0action\0windowsExtendFrameIntoClientArea\0"
    "left\0top\0right\0bottom\0windowsIsCompositionEnabled\0"
    "windowsRealColorizationColor\0isWindows\0"
    "gotNewMessage\0peerId\0peerName\0senderName\0"
    "text\0silent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlatformUtils[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x0a /* Public */,
       7,    0,   69,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x0a /* Public */,
      11,    4,   73,    2, 0x0a /* Public */,
      16,    0,   82,    2, 0x0a /* Public */,
      17,    0,   83,    2, 0x0a /* Public */,
      18,    0,   84,    2, 0x0a /* Public */,
      19,    5,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   12,   13,   14,   15,
    QMetaType::Bool,
    QMetaType::QColor,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   21,   22,   23,   24,

       0        // eod
};

void PlatformUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlatformUtils *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showAndRaise(); break;
        case 1: _t->quit(); break;
        case 2: _t->trayActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 3: _t->messageClicked(); break;
        case 4: _t->menuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->windowsExtendFrameIntoClientArea((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: { bool _r = _t->windowsIsCompositionEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QColor _r = _t->windowsRealColorizationColor();
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->isWindows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->gotNewMessage((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlatformUtils::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlatformUtils.data,
    qt_meta_data_PlatformUtils,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlatformUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlatformUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlatformUtils.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlatformUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

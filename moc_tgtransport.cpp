/****************************************************************************
** Meta object code from reading C++ file 'tgtransport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "libkg/tgtransport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tgtransport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TgTransport_t {
    QByteArrayData data[72];
    char stringdata0[893];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TgTransport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TgTransport_t qt_meta_stringdata_TgTransport = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TgTransport"
QT_MOC_LITERAL(1, 12, 10), // "timerEvent"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "QTimerEvent*"
QT_MOC_LITERAL(4, 37, 5), // "event"
QT_MOC_LITERAL(5, 43, 12), // "resetSession"
QT_MOC_LITERAL(6, 56, 11), // "saveSession"
QT_MOC_LITERAL(7, 68, 5), // "reset"
QT_MOC_LITERAL(8, 74, 11), // "loadSession"
QT_MOC_LITERAL(9, 86, 10), // "hasSession"
QT_MOC_LITERAL(10, 97, 9), // "hasUserId"
QT_MOC_LITERAL(11, 107, 9), // "getUserId"
QT_MOC_LITERAL(12, 117, 6), // "TgLong"
QT_MOC_LITERAL(13, 124, 18), // "checkAuthorization"
QT_MOC_LITERAL(14, 143, 11), // "sendMsgsAck"
QT_MOC_LITERAL(15, 155, 6), // "config"
QT_MOC_LITERAL(16, 162, 8), // "TgObject"
QT_MOC_LITERAL(17, 171, 9), // "setConfig"
QT_MOC_LITERAL(18, 181, 9), // "migrateTo"
QT_MOC_LITERAL(19, 191, 4), // "dcId"
QT_MOC_LITERAL(20, 196, 7), // "resetDc"
QT_MOC_LITERAL(21, 204, 5), // "setDc"
QT_MOC_LITERAL(22, 210, 4), // "host"
QT_MOC_LITERAL(23, 215, 4), // "port"
QT_MOC_LITERAL(24, 220, 5), // "start"
QT_MOC_LITERAL(25, 226, 4), // "stop"
QT_MOC_LITERAL(26, 231, 15), // "sendMsgsAckBool"
QT_MOC_LITERAL(27, 247, 16), // "sendPlainMessage"
QT_MOC_LITERAL(28, 264, 4), // "data"
QT_MOC_LITERAL(29, 269, 6), // "oldMid"
QT_MOC_LITERAL(30, 276, 13), // "sendMTMessage"
QT_MOC_LITERAL(31, 290, 9), // "isMsgsAck"
QT_MOC_LITERAL(32, 300, 9), // "authorize"
QT_MOC_LITERAL(33, 310, 16), // "sendIntermediate"
QT_MOC_LITERAL(34, 327, 16), // "readIntermediate"
QT_MOC_LITERAL(35, 344, 14), // "processMessage"
QT_MOC_LITERAL(36, 359, 7), // "message"
QT_MOC_LITERAL(37, 367, 14), // "initConnection"
QT_MOC_LITERAL(38, 382, 10), // "gzipPacket"
QT_MOC_LITERAL(39, 393, 15), // "getNewMessageId"
QT_MOC_LITERAL(40, 409, 16), // "generateSequence"
QT_MOC_LITERAL(41, 426, 9), // "isContent"
QT_MOC_LITERAL(42, 436, 22), // "broadcastMessageChange"
QT_MOC_LITERAL(43, 459, 6), // "oldMsg"
QT_MOC_LITERAL(44, 466, 6), // "newMsg"
QT_MOC_LITERAL(45, 473, 10), // "_connected"
QT_MOC_LITERAL(46, 484, 13), // "_disconnected"
QT_MOC_LITERAL(47, 498, 10), // "_readyRead"
QT_MOC_LITERAL(48, 509, 10), // "_bytesSent"
QT_MOC_LITERAL(49, 520, 5), // "count"
QT_MOC_LITERAL(50, 526, 6), // "_error"
QT_MOC_LITERAL(51, 533, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(52, 562, 11), // "socketError"
QT_MOC_LITERAL(53, 574, 12), // "handleObject"
QT_MOC_LITERAL(54, 587, 9), // "messageId"
QT_MOC_LITERAL(55, 597, 11), // "handleResPQ"
QT_MOC_LITERAL(56, 609, 22), // "handleServerDHParamsOk"
QT_MOC_LITERAL(57, 632, 13), // "handleDhGenOk"
QT_MOC_LITERAL(58, 646, 18), // "handleMsgContainer"
QT_MOC_LITERAL(59, 665, 15), // "handleRpcResult"
QT_MOC_LITERAL(60, 681, 16), // "handleGzipPacked"
QT_MOC_LITERAL(61, 698, 14), // "handleRpcError"
QT_MOC_LITERAL(62, 713, 16), // "handlePingMethod"
QT_MOC_LITERAL(63, 730, 13), // "handleMsgCopy"
QT_MOC_LITERAL(64, 744, 24), // "handleBadMsgNotification"
QT_MOC_LITERAL(65, 769, 19), // "handleBadServerSalt"
QT_MOC_LITERAL(66, 789, 12), // "handleConfig"
QT_MOC_LITERAL(67, 802, 19), // "handleAuthorization"
QT_MOC_LITERAL(68, 822, 12), // "handleVector"
QT_MOC_LITERAL(69, 835, 21), // "handleMsgDetailedInfo"
QT_MOC_LITERAL(70, 857, 24), // "handleMsgNewDetailedInfo"
QT_MOC_LITERAL(71, 882, 10) // "handleBool"

    },
    "TgTransport\0timerEvent\0\0QTimerEvent*\0"
    "event\0resetSession\0saveSession\0reset\0"
    "loadSession\0hasSession\0hasUserId\0"
    "getUserId\0TgLong\0checkAuthorization\0"
    "sendMsgsAck\0config\0TgObject\0setConfig\0"
    "migrateTo\0dcId\0resetDc\0setDc\0host\0"
    "port\0start\0stop\0sendMsgsAckBool\0"
    "sendPlainMessage\0data\0oldMid\0sendMTMessage\0"
    "isMsgsAck\0authorize\0sendIntermediate\0"
    "readIntermediate\0processMessage\0message\0"
    "initConnection\0gzipPacket\0getNewMessageId\0"
    "generateSequence\0isContent\0"
    "broadcastMessageChange\0oldMsg\0newMsg\0"
    "_connected\0_disconnected\0_readyRead\0"
    "_bytesSent\0count\0_error\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "handleObject\0messageId\0handleResPQ\0"
    "handleServerDHParamsOk\0handleDhGenOk\0"
    "handleMsgContainer\0handleRpcResult\0"
    "handleGzipPacked\0handleRpcError\0"
    "handlePingMethod\0handleMsgCopy\0"
    "handleBadMsgNotification\0handleBadServerSalt\0"
    "handleConfig\0handleAuthorization\0"
    "handleVector\0handleMsgDetailedInfo\0"
    "handleMsgNewDetailedInfo\0handleBool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TgTransport[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  279,    2, 0x0a /* Public */,
       5,    0,  282,    2, 0x0a /* Public */,
       6,    1,  283,    2, 0x0a /* Public */,
       6,    0,  286,    2, 0x2a /* Public | MethodCloned */,
       8,    0,  287,    2, 0x0a /* Public */,
       9,    0,  288,    2, 0x0a /* Public */,
      10,    0,  289,    2, 0x0a /* Public */,
      11,    0,  290,    2, 0x0a /* Public */,
      13,    0,  291,    2, 0x0a /* Public */,
      14,    0,  292,    2, 0x0a /* Public */,
      15,    0,  293,    2, 0x0a /* Public */,
      17,    1,  294,    2, 0x0a /* Public */,
      18,    1,  297,    2, 0x0a /* Public */,
      20,    0,  300,    2, 0x0a /* Public */,
      21,    3,  301,    2, 0x0a /* Public */,
      19,    0,  308,    2, 0x0a /* Public */,
      24,    0,  309,    2, 0x0a /* Public */,
      25,    1,  310,    2, 0x0a /* Public */,
      25,    0,  313,    2, 0x2a /* Public | MethodCloned */,
      27,    2,  314,    2, 0x0a /* Public */,
      30,    3,  319,    2, 0x0a /* Public */,
      32,    0,  326,    2, 0x0a /* Public */,
      33,    1,  327,    2, 0x0a /* Public */,
      34,    0,  330,    2, 0x0a /* Public */,
      35,    1,  331,    2, 0x0a /* Public */,
      37,    0,  334,    2, 0x0a /* Public */,
      38,    1,  335,    2, 0x0a /* Public */,
      39,    0,  338,    2, 0x0a /* Public */,
      40,    1,  339,    2, 0x0a /* Public */,
      42,    2,  342,    2, 0x0a /* Public */,
      45,    0,  347,    2, 0x0a /* Public */,
      46,    0,  348,    2, 0x0a /* Public */,
      47,    0,  349,    2, 0x0a /* Public */,
      48,    1,  350,    2, 0x0a /* Public */,
      50,    1,  353,    2, 0x0a /* Public */,
      53,    2,  356,    2, 0x0a /* Public */,
      55,    2,  361,    2, 0x0a /* Public */,
      56,    2,  366,    2, 0x0a /* Public */,
      57,    2,  371,    2, 0x0a /* Public */,
      58,    2,  376,    2, 0x0a /* Public */,
      59,    2,  381,    2, 0x0a /* Public */,
      60,    2,  386,    2, 0x0a /* Public */,
      61,    2,  391,    2, 0x0a /* Public */,
      62,    2,  396,    2, 0x0a /* Public */,
      63,    2,  401,    2, 0x0a /* Public */,
      64,    2,  406,    2, 0x0a /* Public */,
      65,    2,  411,    2, 0x0a /* Public */,
      66,    2,  416,    2, 0x0a /* Public */,
      67,    2,  421,    2, 0x0a /* Public */,
      68,    2,  426,    2, 0x0a /* Public */,
      69,    2,  431,    2, 0x0a /* Public */,
      70,    2,  436,    2, 0x0a /* Public */,
      71,    2,  441,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 12,
    QMetaType::Void,
    0x80000000 | 12,
    0x80000000 | 16,
    QMetaType::Void, 0x80000000 | 16,   15,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, QMetaType::Int,   22,   23,   19,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void,
    QMetaType::LongLong, QMetaType::QByteArray, QMetaType::LongLong,   28,   29,
    QMetaType::LongLong, QMetaType::QByteArray, QMetaType::LongLong, QMetaType::Bool,   28,   29,   31,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   28,
    QMetaType::QByteArray,
    QMetaType::Void, QMetaType::QByteArray,   36,
    QMetaType::Void,
    QMetaType::QByteArray, QMetaType::QByteArray,   28,
    QMetaType::LongLong,
    QMetaType::Int, QMetaType::Bool,   41,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   43,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   49,
    QMetaType::Void, 0x80000000 | 51,   52,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   28,   54,

       0        // eod
};

void TgTransport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TgTransport *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timerEvent((*reinterpret_cast< QTimerEvent*(*)>(_a[1]))); break;
        case 1: _t->resetSession(); break;
        case 2: _t->saveSession((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->saveSession(); break;
        case 4: _t->loadSession(); break;
        case 5: { bool _r = _t->hasSession();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->hasUserId();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { TgLong _r = _t->getUserId();
            if (_a[0]) *reinterpret_cast< TgLong*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->checkAuthorization(); break;
        case 9: { TgLong _r = _t->sendMsgsAck();
            if (_a[0]) *reinterpret_cast< TgLong*>(_a[0]) = std::move(_r); }  break;
        case 10: { TgObject _r = _t->config();
            if (_a[0]) *reinterpret_cast< TgObject*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->setConfig((*reinterpret_cast< TgObject(*)>(_a[1]))); break;
        case 12: _t->migrateTo((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 13: _t->resetDc(); break;
        case 14: _t->setDc((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3]))); break;
        case 15: { qint32 _r = _t->dcId();
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->start(); break;
        case 17: _t->stop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->stop(); break;
        case 19: { qint64 _r = _t->sendPlainMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 20: { qint64 _r = _t->sendMTMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->authorize(); break;
        case 22: _t->sendIntermediate((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 23: { QByteArray _r = _t->readIntermediate();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->processMessage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 25: _t->initConnection(); break;
        case 26: { QByteArray _r = _t->gzipPacket((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 27: { qint64 _r = _t->getNewMessageId();
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 28: { qint32 _r = _t->generateSequence((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->broadcastMessageChange((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 30: _t->_connected(); break;
        case 31: _t->_disconnected(); break;
        case 32: _t->_readyRead(); break;
        case 33: _t->_bytesSent((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 34: _t->_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 35: _t->handleObject((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 36: _t->handleResPQ((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 37: _t->handleServerDHParamsOk((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 38: _t->handleDhGenOk((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 39: _t->handleMsgContainer((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 40: _t->handleRpcResult((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 41: _t->handleGzipPacked((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 42: _t->handleRpcError((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 43: _t->handlePingMethod((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 44: _t->handleMsgCopy((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 45: _t->handleBadMsgNotification((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 46: _t->handleBadServerSalt((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 47: _t->handleConfig((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 48: _t->handleAuthorization((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 49: _t->handleVector((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 50: _t->handleMsgDetailedInfo((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 51: _t->handleMsgNewDetailedInfo((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 52: _t->handleBool((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TgTransport::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TgTransport.data,
    qt_meta_data_TgTransport,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TgTransport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TgTransport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TgTransport.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TgTransport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

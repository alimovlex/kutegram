/****************************************************************************
** Meta object code from reading C++ file 'tgclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "libkg/tgclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tgclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TgClient_t {
    QByteArrayData data[150];
    char stringdata0[1861];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TgClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TgClient_t qt_meta_stringdata_TgClient = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TgClient"
QT_MOC_LITERAL(1, 9, 9), // "connected"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "hasUserId"
QT_MOC_LITERAL(4, 30, 11), // "socketError"
QT_MOC_LITERAL(5, 42, 9), // "errorCode"
QT_MOC_LITERAL(6, 52, 12), // "errorMessage"
QT_MOC_LITERAL(7, 65, 12), // "disconnected"
QT_MOC_LITERAL(8, 78, 11), // "initialized"
QT_MOC_LITERAL(9, 90, 8), // "rpcError"
QT_MOC_LITERAL(10, 99, 13), // "TgLongVariant"
QT_MOC_LITERAL(11, 113, 9), // "messageId"
QT_MOC_LITERAL(12, 123, 10), // "authorized"
QT_MOC_LITERAL(13, 134, 6), // "userId"
QT_MOC_LITERAL(14, 141, 11), // "tfaRequired"
QT_MOC_LITERAL(15, 153, 15), // "fileDownloading"
QT_MOC_LITERAL(16, 169, 6), // "fileId"
QT_MOC_LITERAL(17, 176, 15), // "processedLength"
QT_MOC_LITERAL(18, 192, 11), // "totalLength"
QT_MOC_LITERAL(19, 204, 18), // "progressPercentage"
QT_MOC_LITERAL(20, 223, 14), // "fileDownloaded"
QT_MOC_LITERAL(21, 238, 8), // "filePath"
QT_MOC_LITERAL(22, 247, 20), // "fileDownloadCanceled"
QT_MOC_LITERAL(23, 268, 13), // "fileUploading"
QT_MOC_LITERAL(24, 282, 12), // "fileUploaded"
QT_MOC_LITERAL(25, 295, 8), // "TgObject"
QT_MOC_LITERAL(26, 304, 9), // "inputFile"
QT_MOC_LITERAL(27, 314, 18), // "fileUploadCanceled"
QT_MOC_LITERAL(28, 333, 14), // "messageChanged"
QT_MOC_LITERAL(29, 348, 6), // "oldMsg"
QT_MOC_LITERAL(30, 355, 6), // "newMsg"
QT_MOC_LITERAL(31, 362, 25), // "helpCountriesListResponse"
QT_MOC_LITERAL(32, 388, 4), // "data"
QT_MOC_LITERAL(33, 393, 20), // "authSentCodeResponse"
QT_MOC_LITERAL(34, 414, 25), // "authAuthorizationResponse"
QT_MOC_LITERAL(35, 440, 23), // "messagesDialogsResponse"
QT_MOC_LITERAL(36, 464, 24), // "messagesMessagesResponse"
QT_MOC_LITERAL(37, 489, 26), // "vectorDialogFilterResponse"
QT_MOC_LITERAL(38, 516, 8), // "TgVector"
QT_MOC_LITERAL(39, 525, 18), // "vectorUserResponse"
QT_MOC_LITERAL(40, 544, 12), // "boolResponse"
QT_MOC_LITERAL(41, 557, 8), // "response"
QT_MOC_LITERAL(42, 566, 15), // "unknownResponse"
QT_MOC_LITERAL(43, 582, 5), // "conId"
QT_MOC_LITERAL(44, 588, 9), // "gotUpdate"
QT_MOC_LITERAL(45, 598, 6), // "update"
QT_MOC_LITERAL(46, 605, 6), // "TgList"
QT_MOC_LITERAL(47, 612, 5), // "users"
QT_MOC_LITERAL(48, 618, 5), // "chats"
QT_MOC_LITERAL(49, 624, 4), // "date"
QT_MOC_LITERAL(50, 629, 3), // "seq"
QT_MOC_LITERAL(51, 633, 8), // "seqStart"
QT_MOC_LITERAL(52, 642, 16), // "gotMessageUpdate"
QT_MOC_LITERAL(53, 659, 13), // "messageUpdate"
QT_MOC_LITERAL(54, 673, 11), // "getObjectId"
QT_MOC_LITERAL(55, 685, 3), // "var"
QT_MOC_LITERAL(56, 689, 14), // "getJpegPayload"
QT_MOC_LITERAL(57, 704, 5), // "bytes"
QT_MOC_LITERAL(58, 710, 5), // "start"
QT_MOC_LITERAL(59, 716, 4), // "stop"
QT_MOC_LITERAL(60, 721, 14), // "cacheDirectory"
QT_MOC_LITERAL(61, 736, 4), // "QDir"
QT_MOC_LITERAL(62, 741, 16), // "sessionDirectory"
QT_MOC_LITERAL(63, 758, 11), // "sessionName"
QT_MOC_LITERAL(64, 770, 12), // "resetSession"
QT_MOC_LITERAL(65, 783, 9), // "migrateTo"
QT_MOC_LITERAL(66, 793, 6), // "config"
QT_MOC_LITERAL(67, 800, 4), // "dcId"
QT_MOC_LITERAL(68, 805, 14), // "getClientForDc"
QT_MOC_LITERAL(69, 820, 9), // "TgClient*"
QT_MOC_LITERAL(70, 830, 5), // "TgInt"
QT_MOC_LITERAL(71, 836, 10), // "hasSession"
QT_MOC_LITERAL(72, 847, 9), // "getUserId"
QT_MOC_LITERAL(73, 857, 6), // "isMain"
QT_MOC_LITERAL(74, 864, 11), // "isConnected"
QT_MOC_LITERAL(75, 876, 13), // "isInitialized"
QT_MOC_LITERAL(76, 890, 12), // "isAuthorized"
QT_MOC_LITERAL(77, 903, 12), // "cancelUpload"
QT_MOC_LITERAL(78, 916, 10), // "uploadFile"
QT_MOC_LITERAL(79, 927, 18), // "uploadNextFilePart"
QT_MOC_LITERAL(80, 946, 19), // "handleUploadingFile"
QT_MOC_LITERAL(81, 966, 14), // "cancelDownload"
QT_MOC_LITERAL(82, 981, 12), // "downloadFile"
QT_MOC_LITERAL(83, 994, 8), // "fileSize"
QT_MOC_LITERAL(84, 1003, 20), // "downloadNextFilePart"
QT_MOC_LITERAL(85, 1024, 13), // "migrateFileTo"
QT_MOC_LITERAL(86, 1038, 22), // "fileProbablyDownloaded"
QT_MOC_LITERAL(87, 1061, 21), // "handleDownloadingFile"
QT_MOC_LITERAL(88, 1083, 19), // "exportAuthorization"
QT_MOC_LITERAL(89, 1103, 19), // "importAuthorization"
QT_MOC_LITERAL(90, 1123, 2), // "id"
QT_MOC_LITERAL(91, 1126, 12), // "handleObject"
QT_MOC_LITERAL(92, 1139, 12), // "handleVector"
QT_MOC_LITERAL(93, 1152, 10), // "handleBool"
QT_MOC_LITERAL(94, 1163, 20), // "handleMessageChanged"
QT_MOC_LITERAL(95, 1184, 15), // "handleConnected"
QT_MOC_LITERAL(96, 1200, 17), // "handleSocketError"
QT_MOC_LITERAL(97, 1218, 18), // "handleDisconnected"
QT_MOC_LITERAL(98, 1237, 17), // "handleInitialized"
QT_MOC_LITERAL(99, 1255, 14), // "handleRpcError"
QT_MOC_LITERAL(100, 1270, 16), // "handleAuthorized"
QT_MOC_LITERAL(101, 1287, 17), // "handleTFARequired"
QT_MOC_LITERAL(102, 1305, 14), // "emptyInputPeer"
QT_MOC_LITERAL(103, 1320, 13), // "selfInputPeer"
QT_MOC_LITERAL(104, 1334, 11), // "toInputPeer"
QT_MOC_LITERAL(105, 1346, 3), // "obj"
QT_MOC_LITERAL(106, 1350, 9), // "getPeerId"
QT_MOC_LITERAL(107, 1360, 6), // "isUser"
QT_MOC_LITERAL(108, 1367, 6), // "isChat"
QT_MOC_LITERAL(109, 1374, 9), // "isChannel"
QT_MOC_LITERAL(110, 1384, 7), // "isGroup"
QT_MOC_LITERAL(111, 1392, 17), // "getDialogsOffsets"
QT_MOC_LITERAL(112, 1410, 7), // "dialogs"
QT_MOC_LITERAL(113, 1418, 14), // "commonPeerType"
QT_MOC_LITERAL(114, 1433, 10), // "peersEqual"
QT_MOC_LITERAL(115, 1444, 5), // "peer1"
QT_MOC_LITERAL(116, 1450, 5), // "peer2"
QT_MOC_LITERAL(117, 1456, 20), // "helpGetCountriesList"
QT_MOC_LITERAL(118, 1477, 4), // "hash"
QT_MOC_LITERAL(119, 1482, 8), // "langCode"
QT_MOC_LITERAL(120, 1491, 12), // "authSendCode"
QT_MOC_LITERAL(121, 1504, 11), // "phoneNumber"
QT_MOC_LITERAL(122, 1516, 10), // "authSignIn"
QT_MOC_LITERAL(123, 1527, 13), // "phoneCodeHash"
QT_MOC_LITERAL(124, 1541, 9), // "phoneCode"
QT_MOC_LITERAL(125, 1551, 18), // "messagesGetDialogs"
QT_MOC_LITERAL(126, 1570, 10), // "offsetDate"
QT_MOC_LITERAL(127, 1581, 8), // "offsetId"
QT_MOC_LITERAL(128, 1590, 10), // "offsetPeer"
QT_MOC_LITERAL(129, 1601, 5), // "limit"
QT_MOC_LITERAL(130, 1607, 8), // "folderId"
QT_MOC_LITERAL(131, 1616, 13), // "excludePinned"
QT_MOC_LITERAL(132, 1630, 29), // "messagesGetDialogsWithOffsets"
QT_MOC_LITERAL(133, 1660, 7), // "offsets"
QT_MOC_LITERAL(134, 1668, 10), // "authSignUp"
QT_MOC_LITERAL(135, 1679, 9), // "firstName"
QT_MOC_LITERAL(136, 1689, 8), // "lastName"
QT_MOC_LITERAL(137, 1698, 18), // "messagesGetHistory"
QT_MOC_LITERAL(138, 1717, 9), // "inputPeer"
QT_MOC_LITERAL(139, 1727, 9), // "addOffset"
QT_MOC_LITERAL(140, 1737, 5), // "maxId"
QT_MOC_LITERAL(141, 1743, 5), // "minId"
QT_MOC_LITERAL(142, 1749, 19), // "messagesSendMessage"
QT_MOC_LITERAL(143, 1769, 7), // "message"
QT_MOC_LITERAL(144, 1777, 5), // "media"
QT_MOC_LITERAL(145, 1783, 8), // "randomId"
QT_MOC_LITERAL(146, 1792, 17), // "messagesSendMedia"
QT_MOC_LITERAL(147, 1810, 24), // "messagesGetDialogFilters"
QT_MOC_LITERAL(148, 1835, 13), // "usersGetUsers"
QT_MOC_LITERAL(149, 1849, 11) // "registerQML"

    },
    "TgClient\0connected\0\0hasUserId\0socketError\0"
    "errorCode\0errorMessage\0disconnected\0"
    "initialized\0rpcError\0TgLongVariant\0"
    "messageId\0authorized\0userId\0tfaRequired\0"
    "fileDownloading\0fileId\0processedLength\0"
    "totalLength\0progressPercentage\0"
    "fileDownloaded\0filePath\0fileDownloadCanceled\0"
    "fileUploading\0fileUploaded\0TgObject\0"
    "inputFile\0fileUploadCanceled\0"
    "messageChanged\0oldMsg\0newMsg\0"
    "helpCountriesListResponse\0data\0"
    "authSentCodeResponse\0authAuthorizationResponse\0"
    "messagesDialogsResponse\0"
    "messagesMessagesResponse\0"
    "vectorDialogFilterResponse\0TgVector\0"
    "vectorUserResponse\0boolResponse\0"
    "response\0unknownResponse\0conId\0gotUpdate\0"
    "update\0TgList\0users\0chats\0date\0seq\0"
    "seqStart\0gotMessageUpdate\0messageUpdate\0"
    "getObjectId\0var\0getJpegPayload\0bytes\0"
    "start\0stop\0cacheDirectory\0QDir\0"
    "sessionDirectory\0sessionName\0resetSession\0"
    "migrateTo\0config\0dcId\0getClientForDc\0"
    "TgClient*\0TgInt\0hasSession\0getUserId\0"
    "isMain\0isConnected\0isInitialized\0"
    "isAuthorized\0cancelUpload\0uploadFile\0"
    "uploadNextFilePart\0handleUploadingFile\0"
    "cancelDownload\0downloadFile\0fileSize\0"
    "downloadNextFilePart\0migrateFileTo\0"
    "fileProbablyDownloaded\0handleDownloadingFile\0"
    "exportAuthorization\0importAuthorization\0"
    "id\0handleObject\0handleVector\0handleBool\0"
    "handleMessageChanged\0handleConnected\0"
    "handleSocketError\0handleDisconnected\0"
    "handleInitialized\0handleRpcError\0"
    "handleAuthorized\0handleTFARequired\0"
    "emptyInputPeer\0selfInputPeer\0toInputPeer\0"
    "obj\0getPeerId\0isUser\0isChat\0isChannel\0"
    "isGroup\0getDialogsOffsets\0dialogs\0"
    "commonPeerType\0peersEqual\0peer1\0peer2\0"
    "helpGetCountriesList\0hash\0langCode\0"
    "authSendCode\0phoneNumber\0authSignIn\0"
    "phoneCodeHash\0phoneCode\0messagesGetDialogs\0"
    "offsetDate\0offsetId\0offsetPeer\0limit\0"
    "folderId\0excludePinned\0"
    "messagesGetDialogsWithOffsets\0offsets\0"
    "authSignUp\0firstName\0lastName\0"
    "messagesGetHistory\0inputPeer\0addOffset\0"
    "maxId\0minId\0messagesSendMessage\0message\0"
    "media\0randomId\0messagesSendMedia\0"
    "messagesGetDialogFilters\0usersGetUsers\0"
    "registerQML"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TgClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     119,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  609,    2, 0x06 /* Public */,
       4,    2,  612,    2, 0x06 /* Public */,
       7,    1,  617,    2, 0x06 /* Public */,
       8,    1,  620,    2, 0x06 /* Public */,
       9,    3,  623,    2, 0x06 /* Public */,
      12,    1,  630,    2, 0x06 /* Public */,
      14,    0,  633,    2, 0x06 /* Public */,
      15,    4,  634,    2, 0x06 /* Public */,
      20,    2,  643,    2, 0x06 /* Public */,
      22,    2,  648,    2, 0x06 /* Public */,
      23,    4,  653,    2, 0x06 /* Public */,
      24,    2,  662,    2, 0x06 /* Public */,
      27,    1,  667,    2, 0x06 /* Public */,
      28,    2,  670,    2, 0x06 /* Public */,
      31,    2,  675,    2, 0x06 /* Public */,
      33,    2,  680,    2, 0x06 /* Public */,
      34,    2,  685,    2, 0x06 /* Public */,
      35,    2,  690,    2, 0x06 /* Public */,
      36,    2,  695,    2, 0x06 /* Public */,
      37,    2,  700,    2, 0x06 /* Public */,
      39,    2,  705,    2, 0x06 /* Public */,
      40,    2,  710,    2, 0x06 /* Public */,
      42,    3,  715,    2, 0x06 /* Public */,
      44,    7,  722,    2, 0x06 /* Public */,
      52,    2,  737,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      54,    1,  742,    2, 0x0a /* Public */,
      56,    1,  745,    2, 0x0a /* Public */,
      58,    0,  748,    2, 0x0a /* Public */,
      59,    0,  749,    2, 0x0a /* Public */,
      60,    0,  750,    2, 0x0a /* Public */,
      62,    0,  751,    2, 0x0a /* Public */,
      63,    0,  752,    2, 0x0a /* Public */,
      64,    0,  753,    2, 0x0a /* Public */,
      65,    2,  754,    2, 0x0a /* Public */,
      68,    1,  759,    2, 0x0a /* Public */,
      67,    0,  762,    2, 0x0a /* Public */,
      71,    0,  763,    2, 0x0a /* Public */,
       3,    0,  764,    2, 0x0a /* Public */,
      72,    0,  765,    2, 0x0a /* Public */,
      73,    0,  766,    2, 0x0a /* Public */,
      74,    0,  767,    2, 0x0a /* Public */,
      75,    0,  768,    2, 0x0a /* Public */,
      76,    0,  769,    2, 0x0a /* Public */,
      77,    1,  770,    2, 0x0a /* Public */,
      78,    1,  773,    2, 0x0a /* Public */,
      79,    1,  776,    2, 0x0a /* Public */,
      80,    2,  779,    2, 0x0a /* Public */,
      81,    1,  784,    2, 0x0a /* Public */,
      82,    5,  787,    2, 0x0a /* Public */,
      82,    4,  798,    2, 0x2a /* Public | MethodCloned */,
      82,    3,  807,    2, 0x2a /* Public | MethodCloned */,
      82,    2,  814,    2, 0x2a /* Public | MethodCloned */,
      84,    0,  819,    2, 0x0a /* Public */,
      85,    2,  820,    2, 0x0a /* Public */,
      86,    1,  825,    2, 0x0a /* Public */,
      87,    2,  828,    2, 0x0a /* Public */,
      88,    1,  833,    2, 0x0a /* Public */,
      89,    2,  836,    2, 0x0a /* Public */,
      91,    2,  841,    2, 0x0a /* Public */,
      92,    2,  846,    2, 0x0a /* Public */,
      93,    2,  851,    2, 0x0a /* Public */,
      94,    2,  856,    2, 0x0a /* Public */,
      95,    0,  861,    2, 0x0a /* Public */,
      96,    2,  862,    2, 0x0a /* Public */,
      97,    0,  867,    2, 0x0a /* Public */,
      98,    0,  868,    2, 0x0a /* Public */,
      99,    3,  869,    2, 0x0a /* Public */,
     100,    1,  876,    2, 0x0a /* Public */,
     101,    0,  879,    2, 0x0a /* Public */,
     102,    0,  880,    2, 0x0a /* Public */,
     103,    0,  881,    2, 0x0a /* Public */,
     104,    1,  882,    2, 0x0a /* Public */,
     106,    1,  885,    2, 0x0a /* Public */,
     107,    1,  888,    2, 0x0a /* Public */,
     108,    1,  891,    2, 0x0a /* Public */,
     109,    1,  894,    2, 0x0a /* Public */,
     110,    1,  897,    2, 0x0a /* Public */,
     111,    1,  900,    2, 0x0a /* Public */,
     113,    1,  903,    2, 0x0a /* Public */,
     114,    2,  906,    2, 0x0a /* Public */,
     117,    2,  911,    2, 0x0a /* Public */,
     117,    1,  916,    2, 0x2a /* Public | MethodCloned */,
     117,    0,  919,    2, 0x2a /* Public | MethodCloned */,
     120,    1,  920,    2, 0x0a /* Public */,
     122,    3,  923,    2, 0x0a /* Public */,
     125,    7,  930,    2, 0x0a /* Public */,
     125,    6,  945,    2, 0x2a /* Public | MethodCloned */,
     125,    5,  958,    2, 0x2a /* Public | MethodCloned */,
     125,    4,  969,    2, 0x2a /* Public | MethodCloned */,
     125,    3,  978,    2, 0x2a /* Public | MethodCloned */,
     125,    2,  985,    2, 0x2a /* Public | MethodCloned */,
     125,    1,  990,    2, 0x2a /* Public | MethodCloned */,
     125,    0,  993,    2, 0x2a /* Public | MethodCloned */,
     132,    5,  994,    2, 0x0a /* Public */,
     132,    4, 1005,    2, 0x2a /* Public | MethodCloned */,
     132,    3, 1014,    2, 0x2a /* Public | MethodCloned */,
     132,    2, 1021,    2, 0x2a /* Public | MethodCloned */,
     132,    1, 1026,    2, 0x2a /* Public | MethodCloned */,
     132,    0, 1029,    2, 0x2a /* Public | MethodCloned */,
     134,    4, 1030,    2, 0x0a /* Public */,
     134,    3, 1039,    2, 0x2a /* Public | MethodCloned */,
     137,    8, 1046,    2, 0x0a /* Public */,
     137,    7, 1063,    2, 0x2a /* Public | MethodCloned */,
     137,    6, 1078,    2, 0x2a /* Public | MethodCloned */,
     137,    5, 1091,    2, 0x2a /* Public | MethodCloned */,
     137,    4, 1102,    2, 0x2a /* Public | MethodCloned */,
     137,    3, 1111,    2, 0x2a /* Public | MethodCloned */,
     137,    2, 1118,    2, 0x2a /* Public | MethodCloned */,
     137,    1, 1123,    2, 0x2a /* Public | MethodCloned */,
     142,    4, 1126,    2, 0x0a /* Public */,
     142,    3, 1135,    2, 0x2a /* Public | MethodCloned */,
     142,    2, 1142,    2, 0x2a /* Public | MethodCloned */,
     146,    4, 1147,    2, 0x0a /* Public */,
     146,    3, 1156,    2, 0x2a /* Public | MethodCloned */,
     146,    2, 1163,    2, 0x2a /* Public | MethodCloned */,
     147,    0, 1168,    2, 0x0a /* Public */,
     148,    1, 1169,    2, 0x0a /* Public */,
     148,    0, 1172,    2, 0x2a /* Public | MethodCloned */,
     149,    0, 1173,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 10,    5,    6,   11,
    QMetaType::Void, 0x80000000 | 10,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, QMetaType::Int,   16,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   16,   21,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   16,   21,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10, QMetaType::Int,   16,   17,   18,   19,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 25,   16,   26,
    QMetaType::Void, 0x80000000 | 10,   16,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   29,   30,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10,   32,   11,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10,   32,   11,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10,   32,   11,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10,   32,   11,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10,   32,   11,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 10,   32,   11,
    QMetaType::Void, 0x80000000 | 38, 0x80000000 | 10,   32,   11,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,   41,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QByteArray, 0x80000000 | 10,   43,   32,   11,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10, 0x80000000 | 46, 0x80000000 | 46, QMetaType::Int, QMetaType::Int, QMetaType::Int,   45,   11,   47,   48,   49,   50,   51,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10,   53,   11,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 25,   55,
    QMetaType::QByteArray, QMetaType::QByteArray,   57,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 61,
    0x80000000 | 61,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, QMetaType::Int,   66,   67,
    0x80000000 | 69, QMetaType::Int,   67,
    0x80000000 | 70,
    QMetaType::Bool,
    QMetaType::Bool,
    0x80000000 | 10,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 10,   16,
    0x80000000 | 10, QMetaType::QString,   21,
    0x80000000 | 10, 0x80000000 | 10,   16,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,   41,   11,
    QMetaType::Void, 0x80000000 | 10,   16,
    0x80000000 | 10, QMetaType::QString, 0x80000000 | 25, 0x80000000 | 10, 0x80000000 | 70, 0x80000000 | 10,   21,   26,   83,   67,   16,
    0x80000000 | 10, QMetaType::QString, 0x80000000 | 25, 0x80000000 | 10, 0x80000000 | 70,   21,   26,   83,   67,
    0x80000000 | 10, QMetaType::QString, 0x80000000 | 25, 0x80000000 | 10,   21,   26,   83,
    0x80000000 | 10, QMetaType::QString, 0x80000000 | 25,   21,   26,
    0x80000000 | 10,
    0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 70,   11,   67,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 10,   41,   11,
    QMetaType::LongLong, QMetaType::Int,   67,
    QMetaType::LongLong, QMetaType::LongLong, QMetaType::QByteArray,   90,   57,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   32,   11,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::LongLong,   32,   11,
    QMetaType::Void, QMetaType::Bool, QMetaType::LongLong,   41,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   29,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::LongLong,    5,    6,   11,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void,
    0x80000000 | 25,
    0x80000000 | 25,
    0x80000000 | 25, 0x80000000 | 25,  105,
    0x80000000 | 10, 0x80000000 | 25,  105,
    QMetaType::Bool, 0x80000000 | 25,  105,
    QMetaType::Bool, 0x80000000 | 25,  105,
    QMetaType::Bool, 0x80000000 | 25,  105,
    QMetaType::Bool, 0x80000000 | 25,  105,
    0x80000000 | 25, 0x80000000 | 25,  112,
    0x80000000 | 10, 0x80000000 | 25,  105,
    QMetaType::Bool, 0x80000000 | 25, 0x80000000 | 25,  115,  116,
    0x80000000 | 10, QMetaType::Int, QMetaType::QString,  118,  119,
    0x80000000 | 10, QMetaType::Int,  118,
    0x80000000 | 10,
    0x80000000 | 10, QMetaType::QString,  121,
    0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::QString,  121,  123,  124,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Bool, 0x80000000 | 10,  126,  127,  128,  129,  130,  131,  118,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  126,  127,  128,  129,  130,  131,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int, 0x80000000 | 25, QMetaType::Int, QMetaType::Int,  126,  127,  128,  129,  130,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int, 0x80000000 | 25, QMetaType::Int,  126,  127,  128,  129,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int, 0x80000000 | 25,  126,  127,  128,
    0x80000000 | 10, QMetaType::Int, QMetaType::Int,  126,  127,
    0x80000000 | 10, QMetaType::Int,  126,
    0x80000000 | 10,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Bool, 0x80000000 | 10,  133,  129,  130,  131,  118,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Bool,  133,  129,  130,  131,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int,  133,  129,  130,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int,  133,  129,
    0x80000000 | 10, 0x80000000 | 25,  133,
    0x80000000 | 10,
    0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,  121,  123,  135,  136,
    0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::QString,  121,  123,  135,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 10,  138,  127,  126,  139,  129,  140,  141,  118,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  138,  127,  126,  139,  129,  140,  141,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  138,  127,  126,  139,  129,  140,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,  138,  127,  126,  139,  129,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int, QMetaType::Int,  138,  127,  126,  139,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int, QMetaType::Int,  138,  127,  126,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::Int,  138,  127,
    0x80000000 | 10, 0x80000000 | 25,  138,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::QString, 0x80000000 | 25, 0x80000000 | 10,  138,  143,  144,  145,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::QString, 0x80000000 | 25,  138,  143,  144,
    0x80000000 | 10, 0x80000000 | 25, QMetaType::QString,  138,  143,
    0x80000000 | 10, 0x80000000 | 25, 0x80000000 | 25, QMetaType::QString, 0x80000000 | 10,  138,  144,  143,  145,
    0x80000000 | 10, 0x80000000 | 25, 0x80000000 | 25, QMetaType::QString,  138,  144,  143,
    0x80000000 | 10, 0x80000000 | 25, 0x80000000 | 25,  138,  144,
    0x80000000 | 10,
    0x80000000 | 10, 0x80000000 | 38,   47,
    0x80000000 | 10,
    QMetaType::Void,

       0        // eod
};

void TgClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TgClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->socketError((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->disconnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->initialized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->rpcError((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3]))); break;
        case 5: _t->authorized((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 6: _t->tfaRequired(); break;
        case 7: _t->fileDownloading((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4]))); break;
        case 8: _t->fileDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->fileDownloadCanceled((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->fileUploading((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4]))); break;
        case 11: _t->fileUploaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2]))); break;
        case 12: _t->fileUploadCanceled((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 13: _t->messageChanged((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 14: _t->helpCountriesListResponse((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 15: _t->authSentCodeResponse((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 16: _t->authAuthorizationResponse((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 17: _t->messagesDialogsResponse((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 18: _t->messagesMessagesResponse((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 19: _t->vectorDialogFilterResponse((*reinterpret_cast< TgVector(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 20: _t->vectorUserResponse((*reinterpret_cast< TgVector(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 21: _t->boolResponse((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 22: _t->unknownResponse((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3]))); break;
        case 23: _t->gotUpdate((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2])),(*reinterpret_cast< TgList(*)>(_a[3])),(*reinterpret_cast< TgList(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7]))); break;
        case 24: _t->gotMessageUpdate((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 25: { qint32 _r = _t->getObjectId((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint32*>(_a[0]) = std::move(_r); }  break;
        case 26: { QByteArray _r = _t->getJpegPayload((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->start(); break;
        case 28: _t->stop(); break;
        case 29: { QDir _r = _t->cacheDirectory();
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = std::move(_r); }  break;
        case 30: { QDir _r = _t->sessionDirectory();
            if (_a[0]) *reinterpret_cast< QDir*>(_a[0]) = std::move(_r); }  break;
        case 31: { QString _r = _t->sessionName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->resetSession(); break;
        case 33: _t->migrateTo((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 34: { TgClient* _r = _t->getClientForDc((*reinterpret_cast< qint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgClient**>(_a[0]) = std::move(_r); }  break;
        case 35: { TgInt _r = _t->dcId();
            if (_a[0]) *reinterpret_cast< TgInt*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->hasSession();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->hasUserId();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: { TgLongVariant _r = _t->getUserId();
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 39: { bool _r = _t->isMain();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: { bool _r = _t->isConnected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 41: { bool _r = _t->isInitialized();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 42: { bool _r = _t->isAuthorized();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->cancelUpload((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 44: { TgLongVariant _r = _t->uploadFile((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 45: { TgLongVariant _r = _t->uploadNextFilePart((*reinterpret_cast< TgLongVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->handleUploadingFile((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 47: _t->cancelDownload((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 48: { TgLongVariant _r = _t->downloadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3])),(*reinterpret_cast< TgInt(*)>(_a[4])),(*reinterpret_cast< TgLongVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 49: { TgLongVariant _r = _t->downloadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3])),(*reinterpret_cast< TgInt(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 50: { TgLongVariant _r = _t->downloadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 51: { TgLongVariant _r = _t->downloadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 52: { TgLongVariant _r = _t->downloadNextFilePart();
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 53: { TgLongVariant _r = _t->migrateFileTo((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< TgInt(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->fileProbablyDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 55: _t->handleDownloadingFile((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 56: { qint64 _r = _t->exportAuthorization((*reinterpret_cast< qint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 57: { qint64 _r = _t->importAuthorization((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->handleObject((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 59: _t->handleVector((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 60: _t->handleBool((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 61: _t->handleMessageChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 62: _t->handleConnected(); break;
        case 63: _t->handleSocketError((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 64: _t->handleDisconnected(); break;
        case 65: _t->handleInitialized(); break;
        case 66: _t->handleRpcError((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 67: _t->handleAuthorized((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 68: _t->handleTFARequired(); break;
        case 69: { TgObject _r = _t->emptyInputPeer();
            if (_a[0]) *reinterpret_cast< TgObject*>(_a[0]) = std::move(_r); }  break;
        case 70: { TgObject _r = _t->selfInputPeer();
            if (_a[0]) *reinterpret_cast< TgObject*>(_a[0]) = std::move(_r); }  break;
        case 71: { TgObject _r = _t->toInputPeer((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgObject*>(_a[0]) = std::move(_r); }  break;
        case 72: { TgLongVariant _r = _t->getPeerId((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 73: { bool _r = _t->isUser((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: { bool _r = _t->isChat((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 75: { bool _r = _t->isChannel((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: { bool _r = _t->isGroup((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: { TgObject _r = _t->getDialogsOffsets((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgObject*>(_a[0]) = std::move(_r); }  break;
        case 78: { TgLongVariant _r = _t->commonPeerType((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 79: { bool _r = _t->peersEqual((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 80: { TgLongVariant _r = _t->helpGetCountriesList((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 81: { TgLongVariant _r = _t->helpGetCountriesList((*reinterpret_cast< qint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 82: { TgLongVariant _r = _t->helpGetCountriesList();
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 83: { TgLongVariant _r = _t->authSendCode((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 84: { TgLongVariant _r = _t->authSignIn((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 85: { TgLongVariant _r = _t->messagesGetDialogs((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< TgObject(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< TgLongVariant(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 86: { TgLongVariant _r = _t->messagesGetDialogs((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< TgObject(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 87: { TgLongVariant _r = _t->messagesGetDialogs((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< TgObject(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 88: { TgLongVariant _r = _t->messagesGetDialogs((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< TgObject(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 89: { TgLongVariant _r = _t->messagesGetDialogs((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< TgObject(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 90: { TgLongVariant _r = _t->messagesGetDialogs((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 91: { TgLongVariant _r = _t->messagesGetDialogs((*reinterpret_cast< qint32(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 92: { TgLongVariant _r = _t->messagesGetDialogs();
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 93: { TgLongVariant _r = _t->messagesGetDialogsWithOffsets((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< TgLongVariant(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 94: { TgLongVariant _r = _t->messagesGetDialogsWithOffsets((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 95: { TgLongVariant _r = _t->messagesGetDialogsWithOffsets((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 96: { TgLongVariant _r = _t->messagesGetDialogsWithOffsets((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 97: { TgLongVariant _r = _t->messagesGetDialogsWithOffsets((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 98: { TgLongVariant _r = _t->messagesGetDialogsWithOffsets();
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 99: { TgLongVariant _r = _t->authSignUp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 100: { TgLongVariant _r = _t->authSignUp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 101: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])),(*reinterpret_cast< TgLongVariant(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 102: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 103: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 104: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 105: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 106: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< qint32(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 107: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 108: { TgLongVariant _r = _t->messagesGetHistory((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 109: { TgLongVariant _r = _t->messagesSendMessage((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< TgObject(*)>(_a[3])),(*reinterpret_cast< TgLongVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 110: { TgLongVariant _r = _t->messagesSendMessage((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< TgObject(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 111: { TgLongVariant _r = _t->messagesSendMessage((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 112: { TgLongVariant _r = _t->messagesSendMedia((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< TgLongVariant(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 113: { TgLongVariant _r = _t->messagesSendMedia((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 114: { TgLongVariant _r = _t->messagesSendMedia((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 115: { TgLongVariant _r = _t->messagesGetDialogFilters();
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 116: { TgLongVariant _r = _t->usersGetUsers((*reinterpret_cast< TgVector(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 117: { TgLongVariant _r = _t->usersGetUsers();
            if (_a[0]) *reinterpret_cast< TgLongVariant*>(_a[0]) = std::move(_r); }  break;
        case 118: _t->registerQML(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TgClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(qint32 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::socketError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::initialized)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(qint32 , QString , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::rpcError)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::authorized)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TgClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::tfaRequired)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant , TgLongVariant , TgLongVariant , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::fileDownloading)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::fileDownloaded)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::fileDownloadCanceled)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant , TgLongVariant , TgLongVariant , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::fileUploading)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant , TgObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::fileUploaded)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::fileUploadCanceled)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgLongVariant , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::messageChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgObject , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::helpCountriesListResponse)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgObject , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::authSentCodeResponse)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgObject , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::authAuthorizationResponse)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgObject , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::messagesDialogsResponse)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgObject , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::messagesMessagesResponse)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgVector , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::vectorDialogFilterResponse)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgVector , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::vectorUserResponse)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(bool , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::boolResponse)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(qint32 , QByteArray , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::unknownResponse)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgObject , TgLongVariant , TgList , TgList , qint32 , qint32 , qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::gotUpdate)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (TgClient::*)(TgObject , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TgClient::gotMessageUpdate)) {
                *result = 24;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TgClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TgClient.data,
    qt_meta_data_TgClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TgClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TgClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TgClient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TgClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 119)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 119;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 119)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 119;
    }
    return _id;
}

// SIGNAL 0
void TgClient::connected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TgClient::socketError(qint32 _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TgClient::disconnected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TgClient::initialized(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TgClient::rpcError(qint32 _t1, QString _t2, TgLongVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TgClient::authorized(TgLongVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TgClient::tfaRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TgClient::fileDownloading(TgLongVariant _t1, TgLongVariant _t2, TgLongVariant _t3, qint32 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TgClient::fileDownloaded(TgLongVariant _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TgClient::fileDownloadCanceled(TgLongVariant _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TgClient::fileUploading(TgLongVariant _t1, TgLongVariant _t2, TgLongVariant _t3, qint32 _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TgClient::fileUploaded(TgLongVariant _t1, TgObject _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TgClient::fileUploadCanceled(TgLongVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void TgClient::messageChanged(TgLongVariant _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void TgClient::helpCountriesListResponse(TgObject _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void TgClient::authSentCodeResponse(TgObject _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void TgClient::authAuthorizationResponse(TgObject _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void TgClient::messagesDialogsResponse(TgObject _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void TgClient::messagesMessagesResponse(TgObject _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void TgClient::vectorDialogFilterResponse(TgVector _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void TgClient::vectorUserResponse(TgVector _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void TgClient::boolResponse(bool _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void TgClient::unknownResponse(qint32 _t1, QByteArray _t2, TgLongVariant _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void TgClient::gotUpdate(TgObject _t1, TgLongVariant _t2, TgList _t3, TgList _t4, qint32 _t5, qint32 _t6, qint32 _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void TgClient::gotMessageUpdate(TgObject _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

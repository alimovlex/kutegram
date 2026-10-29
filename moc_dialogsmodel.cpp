/****************************************************************************
** Meta object code from reading C++ file 'dialogsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/dialogsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogsModel_t {
    QByteArrayData data[38];
    char stringdata0[397];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogsModel_t qt_meta_stringdata_DialogsModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DialogsModel"
QT_MOC_LITERAL(1, 13, 16), // "sendNotification"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "peerId"
QT_MOC_LITERAL(4, 38, 8), // "peerName"
QT_MOC_LITERAL(5, 47, 10), // "senderName"
QT_MOC_LITERAL(6, 58, 4), // "text"
QT_MOC_LITERAL(7, 63, 6), // "silent"
QT_MOC_LITERAL(8, 70, 10), // "authorized"
QT_MOC_LITERAL(9, 81, 13), // "TgLongVariant"
QT_MOC_LITERAL(10, 95, 6), // "userId"
QT_MOC_LITERAL(11, 102, 26), // "messagesGetDialogsResponse"
QT_MOC_LITERAL(12, 129, 8), // "TgObject"
QT_MOC_LITERAL(13, 138, 4), // "data"
QT_MOC_LITERAL(14, 143, 9), // "messageId"
QT_MOC_LITERAL(15, 153, 16), // "avatarDownloaded"
QT_MOC_LITERAL(16, 170, 7), // "photoId"
QT_MOC_LITERAL(17, 178, 8), // "filePath"
QT_MOC_LITERAL(18, 187, 7), // "refresh"
QT_MOC_LITERAL(19, 195, 21), // "canFetchMoreDownwards"
QT_MOC_LITERAL(20, 217, 18), // "fetchMoreDownwards"
QT_MOC_LITERAL(21, 236, 14), // "foldersChanged"
QT_MOC_LITERAL(22, 251, 15), // "QList<TgObject>"
QT_MOC_LITERAL(23, 267, 7), // "folders"
QT_MOC_LITERAL(24, 275, 8), // "inFolder"
QT_MOC_LITERAL(25, 284, 5), // "index"
QT_MOC_LITERAL(26, 290, 11), // "folderIndex"
QT_MOC_LITERAL(27, 302, 9), // "gotUpdate"
QT_MOC_LITERAL(28, 312, 6), // "update"
QT_MOC_LITERAL(29, 319, 6), // "TgList"
QT_MOC_LITERAL(30, 326, 5), // "users"
QT_MOC_LITERAL(31, 332, 5), // "chats"
QT_MOC_LITERAL(32, 338, 4), // "date"
QT_MOC_LITERAL(33, 343, 3), // "seq"
QT_MOC_LITERAL(34, 347, 8), // "seqStart"
QT_MOC_LITERAL(35, 356, 16), // "gotMessageUpdate"
QT_MOC_LITERAL(36, 373, 6), // "client"
QT_MOC_LITERAL(37, 380, 16) // "avatarDownloader"

    },
    "DialogsModel\0sendNotification\0\0peerId\0"
    "peerName\0senderName\0text\0silent\0"
    "authorized\0TgLongVariant\0userId\0"
    "messagesGetDialogsResponse\0TgObject\0"
    "data\0messageId\0avatarDownloaded\0photoId\0"
    "filePath\0refresh\0canFetchMoreDownwards\0"
    "fetchMoreDownwards\0foldersChanged\0"
    "QList<TgObject>\0folders\0inFolder\0index\0"
    "folderIndex\0gotUpdate\0update\0TgList\0"
    "users\0chats\0date\0seq\0seqStart\0"
    "gotMessageUpdate\0client\0avatarDownloader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,  124, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   80,    2, 0x0a /* Public */,
      11,    2,   83,    2, 0x0a /* Public */,
      15,    2,   88,    2, 0x0a /* Public */,
      18,    0,   93,    2, 0x0a /* Public */,
      19,    0,   94,    2, 0x0a /* Public */,
      20,    0,   95,    2, 0x0a /* Public */,
      21,    1,   96,    2, 0x0a /* Public */,
      24,    2,   99,    2, 0x0a /* Public */,
      27,    7,  104,    2, 0x0a /* Public */,
      35,    2,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 9,   13,   14,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   16,   17,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   25,   26,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 9, 0x80000000 | 29, 0x80000000 | 29, QMetaType::Int, QMetaType::Int, QMetaType::Int,   28,   14,   30,   31,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 9,   28,   14,

 // properties: name, type, flags
      36, QMetaType::QObjectStar, 0x00095103,
      37, QMetaType::QObjectStar, 0x00095103,
      23, QMetaType::QObjectStar, 0x00095103,

       0        // eod
};

void DialogsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNotification((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->authorized((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 2: _t->messagesGetDialogsResponse((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 3: _t->avatarDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->refresh(); break;
        case 5: { bool _r = _t->canFetchMoreDownwards();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->fetchMoreDownwards(); break;
        case 7: _t->foldersChanged((*reinterpret_cast< QList<TgObject>(*)>(_a[1]))); break;
        case 8: { bool _r = _t->inFolder((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->gotUpdate((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2])),(*reinterpret_cast< TgList(*)>(_a[3])),(*reinterpret_cast< TgList(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7]))); break;
        case 10: _t->gotMessageUpdate((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogsModel::*)(qint64 , QString , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogsModel::sendNotification)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DialogsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->client(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->avatarDownloader(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->folders(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DialogsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClient(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setAvatarDownloader(*reinterpret_cast< QObject**>(_v)); break;
        case 2: _t->setFolders(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DialogsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_DialogsModel.data,
    qt_meta_data_DialogsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int DialogsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DialogsModel::sendNotification(qint64 _t1, QString _t2, QString _t3, QString _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

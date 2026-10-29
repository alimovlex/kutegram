/****************************************************************************
** Meta object code from reading C++ file 'messagesmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/messagesmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagesmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessagesModel_t {
    QByteArrayData data[57];
    char stringdata0[677];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessagesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessagesModel_t qt_meta_stringdata_MessagesModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MessagesModel"
QT_MOC_LITERAL(1, 14, 8), // "scrollTo"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "index"
QT_MOC_LITERAL(4, 30, 15), // "downloadUpdated"
QT_MOC_LITERAL(5, 46, 9), // "messageId"
QT_MOC_LITERAL(6, 56, 5), // "state"
QT_MOC_LITERAL(7, 62, 8), // "filePath"
QT_MOC_LITERAL(8, 71, 12), // "draftChanged"
QT_MOC_LITERAL(9, 84, 5), // "draft"
QT_MOC_LITERAL(10, 90, 17), // "uploadingProgress"
QT_MOC_LITERAL(11, 108, 8), // "progress"
QT_MOC_LITERAL(12, 117, 12), // "scrollForNew"
QT_MOC_LITERAL(13, 130, 17), // "sentMessageUpdate"
QT_MOC_LITERAL(14, 148, 8), // "TgObject"
QT_MOC_LITERAL(15, 157, 6), // "update"
QT_MOC_LITERAL(16, 164, 13), // "TgLongVariant"
QT_MOC_LITERAL(17, 178, 10), // "authorized"
QT_MOC_LITERAL(18, 189, 6), // "userId"
QT_MOC_LITERAL(19, 196, 26), // "messagesGetHistoryResponse"
QT_MOC_LITERAL(20, 223, 4), // "data"
QT_MOC_LITERAL(21, 228, 16), // "avatarDownloaded"
QT_MOC_LITERAL(22, 245, 7), // "photoId"
QT_MOC_LITERAL(23, 253, 15), // "photoDownloaded"
QT_MOC_LITERAL(24, 269, 14), // "fileDownloaded"
QT_MOC_LITERAL(25, 284, 6), // "fileId"
QT_MOC_LITERAL(26, 291, 20), // "fileDownloadCanceled"
QT_MOC_LITERAL(27, 312, 13), // "fileUploading"
QT_MOC_LITERAL(28, 326, 15), // "processedLength"
QT_MOC_LITERAL(29, 342, 11), // "totalLength"
QT_MOC_LITERAL(30, 354, 18), // "progressPercentage"
QT_MOC_LITERAL(31, 373, 12), // "fileUploaded"
QT_MOC_LITERAL(32, 386, 9), // "inputFile"
QT_MOC_LITERAL(33, 396, 18), // "fileUploadCanceled"
QT_MOC_LITERAL(34, 415, 11), // "sendMessage"
QT_MOC_LITERAL(35, 427, 7), // "message"
QT_MOC_LITERAL(36, 435, 10), // "uploadFile"
QT_MOC_LITERAL(37, 446, 12), // "cancelUpload"
QT_MOC_LITERAL(38, 459, 16), // "gotMessageUpdate"
QT_MOC_LITERAL(39, 476, 9), // "gotUpdate"
QT_MOC_LITERAL(40, 486, 6), // "TgList"
QT_MOC_LITERAL(41, 493, 5), // "users"
QT_MOC_LITERAL(42, 499, 5), // "chats"
QT_MOC_LITERAL(43, 505, 4), // "date"
QT_MOC_LITERAL(44, 510, 3), // "seq"
QT_MOC_LITERAL(45, 514, 8), // "seqStart"
QT_MOC_LITERAL(46, 523, 21), // "canFetchMoreDownwards"
QT_MOC_LITERAL(47, 545, 18), // "fetchMoreDownwards"
QT_MOC_LITERAL(48, 564, 19), // "canFetchMoreUpwards"
QT_MOC_LITERAL(49, 584, 16), // "fetchMoreUpwards"
QT_MOC_LITERAL(50, 601, 13), // "linkActivated"
QT_MOC_LITERAL(51, 615, 4), // "link"
QT_MOC_LITERAL(52, 620, 12), // "downloadFile"
QT_MOC_LITERAL(53, 633, 14), // "cancelDownload"
QT_MOC_LITERAL(54, 648, 6), // "client"
QT_MOC_LITERAL(55, 655, 16), // "avatarDownloader"
QT_MOC_LITERAL(56, 672, 4) // "peer"

    },
    "MessagesModel\0scrollTo\0\0index\0"
    "downloadUpdated\0messageId\0state\0"
    "filePath\0draftChanged\0draft\0"
    "uploadingProgress\0progress\0scrollForNew\0"
    "sentMessageUpdate\0TgObject\0update\0"
    "TgLongVariant\0authorized\0userId\0"
    "messagesGetHistoryResponse\0data\0"
    "avatarDownloaded\0photoId\0photoDownloaded\0"
    "fileDownloaded\0fileId\0fileDownloadCanceled\0"
    "fileUploading\0processedLength\0totalLength\0"
    "progressPercentage\0fileUploaded\0"
    "inputFile\0fileUploadCanceled\0sendMessage\0"
    "message\0uploadFile\0cancelUpload\0"
    "gotMessageUpdate\0gotUpdate\0TgList\0"
    "users\0chats\0date\0seq\0seqStart\0"
    "canFetchMoreDownwards\0fetchMoreDownwards\0"
    "canFetchMoreUpwards\0fetchMoreUpwards\0"
    "linkActivated\0link\0downloadFile\0"
    "cancelDownload\0client\0avatarDownloader\0"
    "peer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessagesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       3,  256, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    3,  152,    2, 0x06 /* Public */,
       8,    1,  159,    2, 0x06 /* Public */,
      10,    1,  162,    2, 0x06 /* Public */,
      12,    0,  165,    2, 0x06 /* Public */,
      13,    2,  166,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  171,    2, 0x0a /* Public */,
      19,    2,  174,    2, 0x0a /* Public */,
      21,    2,  179,    2, 0x0a /* Public */,
      23,    2,  184,    2, 0x0a /* Public */,
      24,    2,  189,    2, 0x0a /* Public */,
      26,    2,  194,    2, 0x0a /* Public */,
      27,    4,  199,    2, 0x0a /* Public */,
      31,    2,  208,    2, 0x0a /* Public */,
      33,    1,  213,    2, 0x0a /* Public */,
      34,    1,  216,    2, 0x0a /* Public */,
      36,    0,  219,    2, 0x0a /* Public */,
      37,    0,  220,    2, 0x0a /* Public */,
      38,    2,  221,    2, 0x0a /* Public */,
      39,    7,  226,    2, 0x0a /* Public */,
      46,    0,  241,    2, 0x0a /* Public */,
      47,    0,  242,    2, 0x0a /* Public */,
      48,    0,  243,    2, 0x0a /* Public */,
      49,    0,  244,    2, 0x0a /* Public */,
      50,    2,  245,    2, 0x0a /* Public */,
      52,    1,  250,    2, 0x0a /* Public */,
      53,    1,  253,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   18,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   20,    5,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   22,    7,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   22,    7,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   25,    7,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString,   25,    7,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16, 0x80000000 | 16, QMetaType::Int,   25,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 14,   25,   32,
    QMetaType::Void, 0x80000000 | 16,   25,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,    5,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 40, 0x80000000 | 40, QMetaType::Int, QMetaType::Int, QMetaType::Int,   15,    5,   41,   42,   43,   44,   45,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   51,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
      54, QMetaType::QObjectStar, 0x00095103,
      55, QMetaType::QObjectStar, 0x00095103,
      56, QMetaType::QByteArray, 0x00095103,

       0        // eod
};

void MessagesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MessagesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scrollTo((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 1: _t->downloadUpdated((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->draftChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->uploadingProgress((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 4: _t->scrollForNew(); break;
        case 5: _t->sentMessageUpdate((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 6: _t->authorized((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 7: _t->messagesGetHistoryResponse((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 8: _t->avatarDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->photoDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->fileDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->fileDownloadCanceled((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->fileUploading((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2])),(*reinterpret_cast< TgLongVariant(*)>(_a[3])),(*reinterpret_cast< qint32(*)>(_a[4]))); break;
        case 13: _t->fileUploaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2]))); break;
        case 14: _t->fileUploadCanceled((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 15: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->uploadFile(); break;
        case 17: _t->cancelUpload(); break;
        case 18: _t->gotMessageUpdate((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 19: _t->gotUpdate((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2])),(*reinterpret_cast< TgList(*)>(_a[3])),(*reinterpret_cast< TgList(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5])),(*reinterpret_cast< qint32(*)>(_a[6])),(*reinterpret_cast< qint32(*)>(_a[7]))); break;
        case 20: { bool _r = _t->canFetchMoreDownwards();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->fetchMoreDownwards(); break;
        case 22: { bool _r = _t->canFetchMoreUpwards();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->fetchMoreUpwards(); break;
        case 24: _t->linkActivated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2]))); break;
        case 25: _t->downloadFile((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 26: _t->cancelDownload((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MessagesModel::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesModel::scrollTo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessagesModel::*)(qint32 , qint32 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesModel::downloadUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MessagesModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesModel::draftChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MessagesModel::*)(qint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesModel::uploadingProgress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MessagesModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesModel::scrollForNew)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MessagesModel::*)(TgObject , TgLongVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesModel::sentMessageUpdate)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MessagesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->client(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->avatarDownloader(); break;
        case 2: *reinterpret_cast< QByteArray*>(_v) = _t->peer(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MessagesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClient(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setAvatarDownloader(*reinterpret_cast< QObject**>(_v)); break;
        case 2: _t->setPeer(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MessagesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_MessagesModel.data,
    qt_meta_data_MessagesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MessagesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessagesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessagesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int MessagesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
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
void MessagesModel::scrollTo(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessagesModel::downloadUpdated(qint32 _t1, qint32 _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MessagesModel::draftChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MessagesModel::uploadingProgress(qint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MessagesModel::scrollForNew()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MessagesModel::sentMessageUpdate(TgObject _t1, TgLongVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

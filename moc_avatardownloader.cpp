/****************************************************************************
** Meta object code from reading C++ file 'avatardownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/avatardownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avatardownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarDownloader_t {
    QByteArrayData data[22];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarDownloader_t qt_meta_stringdata_AvatarDownloader = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AvatarDownloader"
QT_MOC_LITERAL(1, 17, 16), // "avatarDownloaded"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "TgLongVariant"
QT_MOC_LITERAL(4, 49, 7), // "photoId"
QT_MOC_LITERAL(5, 57, 8), // "filePath"
QT_MOC_LITERAL(6, 66, 15), // "photoDownloaded"
QT_MOC_LITERAL(7, 82, 10), // "authorized"
QT_MOC_LITERAL(8, 93, 6), // "userId"
QT_MOC_LITERAL(9, 100, 14), // "fileDownloaded"
QT_MOC_LITERAL(10, 115, 6), // "fileId"
QT_MOC_LITERAL(11, 122, 20), // "fileDownloadCanceled"
QT_MOC_LITERAL(12, 143, 14), // "downloadAvatar"
QT_MOC_LITERAL(13, 158, 8), // "TgObject"
QT_MOC_LITERAL(14, 167, 4), // "peer"
QT_MOC_LITERAL(15, 172, 13), // "downloadPhoto"
QT_MOC_LITERAL(16, 186, 5), // "photo"
QT_MOC_LITERAL(17, 192, 13), // "getAvatarText"
QT_MOC_LITERAL(18, 206, 5), // "title"
QT_MOC_LITERAL(19, 212, 9), // "userColor"
QT_MOC_LITERAL(20, 222, 2), // "id"
QT_MOC_LITERAL(21, 225, 6) // "client"

    },
    "AvatarDownloader\0avatarDownloaded\0\0"
    "TgLongVariant\0photoId\0filePath\0"
    "photoDownloaded\0authorized\0userId\0"
    "fileDownloaded\0fileId\0fileDownloadCanceled\0"
    "downloadAvatar\0TgObject\0peer\0downloadPhoto\0"
    "photo\0getAvatarText\0title\0userColor\0"
    "id\0client"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarDownloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   69,    2, 0x0a /* Public */,
       9,    2,   72,    2, 0x0a /* Public */,
      11,    2,   77,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      19,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,   10,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,   10,    5,
    QMetaType::LongLong, 0x80000000 | 13,   14,
    QMetaType::LongLong, 0x80000000 | 13,   16,
    QMetaType::QString, QMetaType::QString,   18,
    QMetaType::QColor, 0x80000000 | 3,   20,

 // properties: name, type, flags
      21, QMetaType::QObjectStar, 0x00095103,

       0        // eod
};

void AvatarDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AvatarDownloader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->avatarDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->photoDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->authorized((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 3: _t->fileDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->fileDownloadCanceled((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: { qint64 _r = _t->downloadAvatar((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 6: { qint64 _r = _t->downloadPhoto((*reinterpret_cast< TgObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->getAvatarText((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QColor _r = _t->userColor((*reinterpret_cast< TgLongVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QColor*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarDownloader::*)(TgLongVariant , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarDownloader::avatarDownloaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AvatarDownloader::*)(TgLongVariant , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarDownloader::photoDownloaded)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AvatarDownloader *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->client(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AvatarDownloader *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClient(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AvatarDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AvatarDownloader.data,
    qt_meta_data_AvatarDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AvatarDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarDownloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AvatarDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AvatarDownloader::avatarDownloaded(TgLongVariant _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AvatarDownloader::photoDownloaded(TgLongVariant _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

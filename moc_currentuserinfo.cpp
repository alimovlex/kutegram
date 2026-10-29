/****************************************************************************
** Meta object code from reading C++ file 'currentuserinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/currentuserinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentuserinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurrentUserInfo_t {
    QByteArrayData data[21];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurrentUserInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurrentUserInfo_t qt_meta_stringdata_CurrentUserInfo = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CurrentUserInfo"
QT_MOC_LITERAL(1, 16, 15), // "userInfoChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "name"
QT_MOC_LITERAL(4, 38, 8), // "username"
QT_MOC_LITERAL(5, 47, 14), // "thumbnailColor"
QT_MOC_LITERAL(6, 62, 13), // "thumbnailText"
QT_MOC_LITERAL(7, 76, 20), // "userAvatarDownloaded"
QT_MOC_LITERAL(8, 97, 6), // "avatar"
QT_MOC_LITERAL(9, 104, 10), // "authorized"
QT_MOC_LITERAL(10, 115, 13), // "TgLongVariant"
QT_MOC_LITERAL(11, 129, 6), // "userId"
QT_MOC_LITERAL(12, 136, 21), // "usersGetUsersResponse"
QT_MOC_LITERAL(13, 158, 8), // "TgVector"
QT_MOC_LITERAL(14, 167, 4), // "data"
QT_MOC_LITERAL(15, 172, 9), // "messageId"
QT_MOC_LITERAL(16, 182, 16), // "avatarDownloaded"
QT_MOC_LITERAL(17, 199, 7), // "photoId"
QT_MOC_LITERAL(18, 207, 8), // "filePath"
QT_MOC_LITERAL(19, 216, 6), // "client"
QT_MOC_LITERAL(20, 223, 16) // "avatarDownloader"

    },
    "CurrentUserInfo\0userInfoChanged\0\0name\0"
    "username\0thumbnailColor\0thumbnailText\0"
    "userAvatarDownloaded\0avatar\0authorized\0"
    "TgLongVariant\0userId\0usersGetUsersResponse\0"
    "TgVector\0data\0messageId\0avatarDownloaded\0"
    "photoId\0filePath\0client\0avatarDownloader"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurrentUserInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x06 /* Public */,
       7,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   51,    2, 0x0a /* Public */,
      12,    2,   54,    2, 0x0a /* Public */,
      16,    2,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QColor, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 10,   14,   15,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString,   17,   18,

 // properties: name, type, flags
      19, QMetaType::QObjectStar, 0x00095103,
      20, QMetaType::QObjectStar, 0x00095103,

       0        // eod
};

void CurrentUserInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurrentUserInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userInfoChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->userAvatarDownloaded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->authorized((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 3: _t->usersGetUsersResponse((*reinterpret_cast< TgVector(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 4: _t->avatarDownloaded((*reinterpret_cast< TgLongVariant(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurrentUserInfo::*)(QString , QString , QColor , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentUserInfo::userInfoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurrentUserInfo::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentUserInfo::userAvatarDownloaded)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CurrentUserInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->client(); break;
        case 1: *reinterpret_cast< QObject**>(_v) = _t->avatarDownloader(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CurrentUserInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClient(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setAvatarDownloader(*reinterpret_cast< QObject**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CurrentUserInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CurrentUserInfo.data,
    qt_meta_data_CurrentUserInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurrentUserInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurrentUserInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentUserInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CurrentUserInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CurrentUserInfo::userInfoChanged(QString _t1, QString _t2, QColor _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurrentUserInfo::userAvatarDownloaded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

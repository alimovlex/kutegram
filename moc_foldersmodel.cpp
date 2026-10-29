/****************************************************************************
** Meta object code from reading C++ file 'foldersmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/foldersmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foldersmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FoldersModel_t {
    QByteArrayData data[20];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FoldersModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FoldersModel_t qt_meta_stringdata_FoldersModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FoldersModel"
QT_MOC_LITERAL(1, 13, 14), // "foldersChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "QList<TgObject>"
QT_MOC_LITERAL(4, 45, 7), // "folders"
QT_MOC_LITERAL(5, 53, 10), // "authorized"
QT_MOC_LITERAL(6, 64, 13), // "TgLongVariant"
QT_MOC_LITERAL(7, 78, 6), // "userId"
QT_MOC_LITERAL(8, 85, 32), // "messagesGetDialogFiltersResponse"
QT_MOC_LITERAL(9, 118, 8), // "TgVector"
QT_MOC_LITERAL(10, 127, 4), // "data"
QT_MOC_LITERAL(11, 132, 9), // "messageId"
QT_MOC_LITERAL(12, 142, 7), // "refresh"
QT_MOC_LITERAL(13, 150, 21), // "canFetchMoreDownwards"
QT_MOC_LITERAL(14, 172, 18), // "fetchMoreDownwards"
QT_MOC_LITERAL(15, 191, 13), // "matchesFilter"
QT_MOC_LITERAL(16, 205, 8), // "TgObject"
QT_MOC_LITERAL(17, 214, 6), // "filter"
QT_MOC_LITERAL(18, 221, 4), // "peer"
QT_MOC_LITERAL(19, 226, 6) // "client"

    },
    "FoldersModel\0foldersChanged\0\0"
    "QList<TgObject>\0folders\0authorized\0"
    "TgLongVariant\0userId\0"
    "messagesGetDialogFiltersResponse\0"
    "TgVector\0data\0messageId\0refresh\0"
    "canFetchMoreDownwards\0fetchMoreDownwards\0"
    "matchesFilter\0TgObject\0filter\0peer\0"
    "client"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FoldersModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       8,    2,   55,    2, 0x0a /* Public */,
      12,    0,   60,    2, 0x0a /* Public */,
      13,    0,   61,    2, 0x0a /* Public */,
      14,    0,   62,    2, 0x0a /* Public */,
      15,    2,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 6,   10,   11,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 16, 0x80000000 | 16,   17,   18,

 // properties: name, type, flags
      19, QMetaType::QObjectStar, 0x00095103,

       0        // eod
};

void FoldersModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FoldersModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->foldersChanged((*reinterpret_cast< QList<TgObject>(*)>(_a[1]))); break;
        case 1: _t->authorized((*reinterpret_cast< TgLongVariant(*)>(_a[1]))); break;
        case 2: _t->messagesGetDialogFiltersResponse((*reinterpret_cast< TgVector(*)>(_a[1])),(*reinterpret_cast< TgLongVariant(*)>(_a[2]))); break;
        case 3: _t->refresh(); break;
        case 4: { bool _r = _t->canFetchMoreDownwards();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->fetchMoreDownwards(); break;
        case 6: { bool _r = _t->matchesFilter((*reinterpret_cast< TgObject(*)>(_a[1])),(*reinterpret_cast< TgObject(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FoldersModel::*)(QList<TgObject> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FoldersModel::foldersChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FoldersModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->client(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FoldersModel *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject FoldersModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_FoldersModel.data,
    qt_meta_data_FoldersModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FoldersModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FoldersModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FoldersModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int FoldersModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void FoldersModel::foldersChanged(QList<TgObject> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'poolbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/poolbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'poolbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PoolBrowser_t {
    QByteArrayData data[16];
    char stringdata[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PoolBrowser_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PoolBrowser_t qt_meta_stringdata_PoolBrowser = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 9),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 10),
QT_MOC_LITERAL(4, 34, 12),
QT_MOC_LITERAL(5, 47, 27),
QT_MOC_LITERAL(6, 75, 3),
QT_MOC_LITERAL(7, 79, 10),
QT_MOC_LITERAL(8, 90, 13),
QT_MOC_LITERAL(9, 104, 20),
QT_MOC_LITERAL(10, 125, 14),
QT_MOC_LITERAL(11, 140, 8),
QT_MOC_LITERAL(12, 149, 21),
QT_MOC_LITERAL(13, 171, 21),
QT_MOC_LITERAL(14, 193, 22),
QT_MOC_LITERAL(15, 216, 7)
    },
    "PoolBrowser\0jokeReady\0\0jokeAsJSON\0"
    "networkError\0QNetworkReply::NetworkError\0"
    "err\0jokeReady2\0networkError2\0"
    "parseNetworkResponse\0QNetworkReply*\0"
    "finished\0parseNetworkResponse2\0"
    "randomChuckNorrisJoke\0randomChuckNorrisJoke2\0"
    "bittrex\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PoolBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x05,
       4,    1,   62,    2, 0x05,
       7,    1,   65,    2, 0x05,
       8,    1,   68,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       9,    1,   71,    2, 0x0a,
      12,    1,   74,    2, 0x0a,
      13,    0,   77,    2, 0x0a,
      14,    0,   78,    2, 0x0a,
      15,    0,   79,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PoolBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PoolBrowser *_t = static_cast<PoolBrowser *>(_o);
        switch (_id) {
        case 0: _t->jokeReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->networkError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->jokeReady2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->networkError2((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 4: _t->parseNetworkResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->parseNetworkResponse2((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->randomChuckNorrisJoke(); break;
        case 7: _t->randomChuckNorrisJoke2(); break;
        case 8: _t->bittrex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PoolBrowser::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PoolBrowser::jokeReady)) {
                *result = 0;
            }
        }
        {
            typedef void (PoolBrowser::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PoolBrowser::networkError)) {
                *result = 1;
            }
        }
        {
            typedef void (PoolBrowser::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PoolBrowser::jokeReady2)) {
                *result = 2;
            }
        }
        {
            typedef void (PoolBrowser::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PoolBrowser::networkError2)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject PoolBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PoolBrowser.data,
      qt_meta_data_PoolBrowser,  qt_static_metacall, 0, 0}
};


const QMetaObject *PoolBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PoolBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PoolBrowser.stringdata))
        return static_cast<void*>(const_cast< PoolBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int PoolBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void PoolBrowser::jokeReady(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PoolBrowser::networkError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PoolBrowser::jokeReady2(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PoolBrowser::networkError2(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

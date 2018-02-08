/****************************************************************************
** Meta object code from reading C++ file 'QWsSocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtWebsocket/QWsSocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QWsSocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtWebsocket__QWsSocket_t {
    QByteArrayData data[35];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWebsocket__QWsSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWebsocket__QWsSocket_t qt_meta_stringdata_QtWebsocket__QWsSocket = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QtWebsocket::QWsSocket"
QT_MOC_LITERAL(1, 23, 13), // "frameReceived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "frame"
QT_MOC_LITERAL(4, 44, 4), // "pong"
QT_MOC_LITERAL(5, 49, 11), // "elapsedTime"
QT_MOC_LITERAL(6, 61, 9), // "encrypted"
QT_MOC_LITERAL(7, 71, 9), // "sslErrors"
QT_MOC_LITERAL(8, 81, 16), // "QList<QSslError>"
QT_MOC_LITERAL(9, 98, 6), // "errors"
QT_MOC_LITERAL(10, 105, 13), // "connectToHost"
QT_MOC_LITERAL(11, 119, 8), // "hostName"
QT_MOC_LITERAL(12, 128, 4), // "port"
QT_MOC_LITERAL(13, 133, 8), // "OpenMode"
QT_MOC_LITERAL(14, 142, 4), // "mode"
QT_MOC_LITERAL(15, 147, 12), // "QHostAddress"
QT_MOC_LITERAL(16, 160, 7), // "address"
QT_MOC_LITERAL(17, 168, 18), // "disconnectFromHost"
QT_MOC_LITERAL(18, 187, 5), // "abort"
QT_MOC_LITERAL(19, 193, 6), // "reason"
QT_MOC_LITERAL(20, 200, 4), // "ping"
QT_MOC_LITERAL(21, 205, 5), // "close"
QT_MOC_LITERAL(22, 211, 15), // "CloseStatusCode"
QT_MOC_LITERAL(23, 227, 15), // "closeStatusCode"
QT_MOC_LITERAL(24, 243, 13), // "processDataV0"
QT_MOC_LITERAL(25, 257, 13), // "processDataV4"
QT_MOC_LITERAL(26, 271, 16), // "processHandshake"
QT_MOC_LITERAL(27, 288, 22), // "processTcpStateChanged"
QT_MOC_LITERAL(28, 311, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(29, 340, 11), // "socketState"
QT_MOC_LITERAL(30, 352, 15), // "processTcpError"
QT_MOC_LITERAL(31, 368, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(32, 397, 3), // "err"
QT_MOC_LITERAL(33, 401, 14), // "startHandshake"
QT_MOC_LITERAL(34, 416, 11) // "onEncrypted"

    },
    "QtWebsocket::QWsSocket\0frameReceived\0"
    "\0frame\0pong\0elapsedTime\0encrypted\0"
    "sslErrors\0QList<QSslError>\0errors\0"
    "connectToHost\0hostName\0port\0OpenMode\0"
    "mode\0QHostAddress\0address\0disconnectFromHost\0"
    "abort\0reason\0ping\0close\0CloseStatusCode\0"
    "closeStatusCode\0processDataV0\0"
    "processDataV4\0processHandshake\0"
    "processTcpStateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "processTcpError\0QAbstractSocket::SocketError\0"
    "err\0startHandshake\0onEncrypted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWebsocket__QWsSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       1,    1,  142,    2, 0x06 /* Public */,
       4,    1,  145,    2, 0x06 /* Public */,
       6,    0,  148,    2, 0x06 /* Public */,
       7,    1,  149,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,  152,    2, 0x0a /* Public */,
      10,    2,  159,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  164,    2, 0x2a /* Public | MethodCloned */,
      10,    3,  167,    2, 0x0a /* Public */,
      10,    2,  174,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  179,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  182,    2, 0x0a /* Public */,
      18,    1,  183,    2, 0x0a /* Public */,
      18,    0,  186,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  187,    2, 0x0a /* Public */,
      21,    2,  188,    2, 0x09 /* Protected */,
      21,    1,  193,    2, 0x29 /* Protected | MethodCloned */,
      21,    0,  196,    2, 0x29 /* Protected | MethodCloned */,
      24,    0,  197,    2, 0x09 /* Protected */,
      25,    0,  198,    2, 0x09 /* Protected */,
      26,    0,  199,    2, 0x09 /* Protected */,
      27,    1,  200,    2, 0x09 /* Protected */,
      30,    1,  203,    2, 0x09 /* Protected */,
      33,    0,  206,    2, 0x09 /* Protected */,
      34,    0,  207,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::ULongLong,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort, 0x80000000 | 13,   11,   12,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 15, QMetaType::UShort, 0x80000000 | 13,   16,   12,   14,
    QMetaType::Void, 0x80000000 | 15, QMetaType::UShort,   16,   12,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString,   23,   19,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtWebsocket::QWsSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWsSocket *_t = static_cast<QWsSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->frameReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->pong((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 3: _t->encrypted(); break;
        case 4: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 5: _t->connectToHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< OpenMode(*)>(_a[3]))); break;
        case 6: _t->connectToHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 7: _t->connectToHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->connectToHost((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2])),(*reinterpret_cast< OpenMode(*)>(_a[3]))); break;
        case 9: _t->connectToHost((*reinterpret_cast< const QHostAddress(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 10: _t->connectToHost((*reinterpret_cast< const QHostAddress(*)>(_a[1]))); break;
        case 11: _t->disconnectFromHost(); break;
        case 12: _t->abort((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->abort(); break;
        case 14: _t->ping(); break;
        case 15: _t->close((*reinterpret_cast< CloseStatusCode(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 16: _t->close((*reinterpret_cast< CloseStatusCode(*)>(_a[1]))); break;
        case 17: _t->close(); break;
        case 18: _t->processDataV0(); break;
        case 19: _t->processDataV4(); break;
        case 20: _t->processHandshake(); break;
        case 21: _t->processTcpStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 22: _t->processTcpError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 23: _t->startHandshake(); break;
        case 24: _t->onEncrypted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWsSocket::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWsSocket::frameReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWsSocket::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWsSocket::frameReceived)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWsSocket::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWsSocket::pong)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWsSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWsSocket::encrypted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWsSocket::*_t)(const QList<QSslError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWsSocket::sslErrors)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QtWebsocket::QWsSocket::staticMetaObject = {
    { &QAbstractSocket::staticMetaObject, qt_meta_stringdata_QtWebsocket__QWsSocket.data,
      qt_meta_data_QtWebsocket__QWsSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtWebsocket::QWsSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWebsocket::QWsSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtWebsocket__QWsSocket.stringdata0))
        return static_cast<void*>(const_cast< QWsSocket*>(this));
    return QAbstractSocket::qt_metacast(_clname);
}

int QtWebsocket::QWsSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void QtWebsocket::QWsSocket::frameReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtWebsocket::QWsSocket::frameReceived(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtWebsocket::QWsSocket::pong(quint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtWebsocket::QWsSocket::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QtWebsocket::QWsSocket::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE

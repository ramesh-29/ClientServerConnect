/****************************************************************************
** Meta object code from reading C++ file 'logininfopage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "logininfopage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logininfopage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginInfoPage_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginInfoPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginInfoPage_t qt_meta_stringdata_LoginInfoPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LoginInfoPage"
QT_MOC_LITERAL(1, 14, 12), // "sendPostData"
QT_MOC_LITERAL(2, 27, 4), // "emit"
QT_MOC_LITERAL(3, 32, 15), // "QNetworkRequest"
QT_MOC_LITERAL(4, 48, 7), // "request"
QT_MOC_LITERAL(5, 56, 8), // "postData"
QT_MOC_LITERAL(6, 65, 14), // "sendUpdateData"
QT_MOC_LITERAL(7, 80, 11), // "sendGetData"
QT_MOC_LITERAL(8, 92, 14), // "sendDeleteData"
QT_MOC_LITERAL(9, 107, 17), // "on_bLogin_clicked"
QT_MOC_LITERAL(10, 125, 0) // ""

    },
    "LoginInfoPage\0sendPostData\0emit\0"
    "QNetworkRequest\0request\0postData\0"
    "sendUpdateData\0sendGetData\0sendDeleteData\0"
    "on_bLogin_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginInfoPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       7,    1,   49,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   53,   10, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LoginInfoPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginInfoPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendPostData((*reinterpret_cast< QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 1: _t->sendUpdateData((*reinterpret_cast< QNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->sendGetData((*reinterpret_cast< QNetworkRequest(*)>(_a[1]))); break;
        case 3: _t->sendDeleteData(); break;
        case 4: _t->on_bLogin_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginInfoPage::*)(QNetworkRequest , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginInfoPage::sendPostData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginInfoPage::*)(QNetworkRequest , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginInfoPage::sendUpdateData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LoginInfoPage::*)(QNetworkRequest );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginInfoPage::sendGetData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LoginInfoPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginInfoPage::sendDeleteData)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginInfoPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_LoginInfoPage.data,
    qt_meta_data_LoginInfoPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginInfoPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginInfoPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginInfoPage.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int LoginInfoPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LoginInfoPage::sendPostData(QNetworkRequest _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoginInfoPage::sendUpdateData(QNetworkRequest _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LoginInfoPage::sendGetData(QNetworkRequest _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LoginInfoPage::sendDeleteData()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'senseSoarMAV.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/uas/senseSoarMAV.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'senseSoarMAV.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_senseSoarMAV[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_senseSoarMAV[] = {
    "senseSoarMAV\0\0link,message\0"
    "receiveMessage(LinkInterface*,mavlink_message_t)\0"
};

void senseSoarMAV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        senseSoarMAV *_t = static_cast<senseSoarMAV *>(_o);
        switch (_id) {
        case 0: _t->receiveMessage((*reinterpret_cast< LinkInterface*(*)>(_a[1])),(*reinterpret_cast< mavlink_message_t(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData senseSoarMAV::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject senseSoarMAV::staticMetaObject = {
    { &UAS::staticMetaObject, qt_meta_stringdata_senseSoarMAV,
      qt_meta_data_senseSoarMAV, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &senseSoarMAV::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *senseSoarMAV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *senseSoarMAV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_senseSoarMAV))
        return static_cast<void*>(const_cast< senseSoarMAV*>(this));
    if (!strcmp(_clname, "org.qgroundcontrol/1.0"))
        return static_cast< UASInterface*>(const_cast< senseSoarMAV*>(this));
    return UAS::qt_metacast(_clname);
}

int senseSoarMAV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UAS::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
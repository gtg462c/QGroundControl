/****************************************************************************
** Meta object code from reading C++ file 'ArduRoverPidConfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/configuration/ArduRoverPidConfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ArduRoverPidConfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ArduRoverPidConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      41,   19,   19,   19, 0x08,
      98,   64,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ArduRoverPidConfig[] = {
    "ArduRoverPidConfig\0\0writeButtonClicked()\0"
    "refreshButtonClicked()\0"
    "uas,component,parameterName,value\0"
    "parameterChanged(int,int,QString,QVariant)\0"
};

void ArduRoverPidConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ArduRoverPidConfig *_t = static_cast<ArduRoverPidConfig *>(_o);
        switch (_id) {
        case 0: _t->writeButtonClicked(); break;
        case 1: _t->refreshButtonClicked(); break;
        case 2: _t->parameterChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QVariant(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ArduRoverPidConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ArduRoverPidConfig::staticMetaObject = {
    { &AP2ConfigWidget::staticMetaObject, qt_meta_stringdata_ArduRoverPidConfig,
      qt_meta_data_ArduRoverPidConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ArduRoverPidConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ArduRoverPidConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ArduRoverPidConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ArduRoverPidConfig))
        return static_cast<void*>(const_cast< ArduRoverPidConfig*>(this));
    return AP2ConfigWidget::qt_metacast(_clname);
}

int ArduRoverPidConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AP2ConfigWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

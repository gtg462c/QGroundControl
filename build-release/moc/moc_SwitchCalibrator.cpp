/****************************************************************************
** Meta object code from reading C++ file 'SwitchCalibrator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/ui/RadioCalibration/SwitchCalibrator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SwitchCalibrator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SwitchCalibrator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      31,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SwitchCalibrator[] = {
    "SwitchCalibrator\0\0setDefault()\0"
    "setToggled()\0"
};

void SwitchCalibrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SwitchCalibrator *_t = static_cast<SwitchCalibrator *>(_o);
        switch (_id) {
        case 0: _t->setDefault(); break;
        case 1: _t->setToggled(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SwitchCalibrator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SwitchCalibrator::staticMetaObject = {
    { &AbstractCalibrator::staticMetaObject, qt_meta_stringdata_SwitchCalibrator,
      qt_meta_data_SwitchCalibrator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SwitchCalibrator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SwitchCalibrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SwitchCalibrator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchCalibrator))
        return static_cast<void*>(const_cast< SwitchCalibrator*>(this));
    return AbstractCalibrator::qt_metacast(_clname);
}

int SwitchCalibrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCalibrator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

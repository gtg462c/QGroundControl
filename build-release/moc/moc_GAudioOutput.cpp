/****************************************************************************
** Meta object code from reading C++ file 'GAudioOutput.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/GAudioOutput.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GAudioOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GAudioOutput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   38,   33,   13, 0x0a,
      74,   69,   33,   13, 0x2a,
      87,   69,   33,   13, 0x0a,
     102,   13,   33,   13, 0x0a,
     119,   13,   33,   13, 0x0a,
     135,   13,   13,   13, 0x0a,
     155,   13,   13,   13, 0x0a,
     173,   13,   13,   13, 0x0a,
     180,   13,   13,   13, 0x0a,
     197,   13,   13,   13, 0x0a,
     219,  214,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GAudioOutput[] = {
    "GAudioOutput\0\0mutedChanged(bool)\0bool\0"
    "text,severity\0say(QString,int)\0text\0"
    "say(QString)\0alert(QString)\0"
    "startEmergency()\0stopEmergency()\0"
    "selectFemaleVoice()\0selectMaleVoice()\0"
    "beep()\0notifyPositive()\0notifyNegative()\0"
    "mute\0mute(bool)\0"
};

void GAudioOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GAudioOutput *_t = static_cast<GAudioOutput *>(_o);
        switch (_id) {
        case 0: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->say((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->say((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->alert((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->startEmergency();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->stopEmergency();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->selectFemaleVoice(); break;
        case 7: _t->selectMaleVoice(); break;
        case 8: _t->beep(); break;
        case 9: _t->notifyPositive(); break;
        case 10: _t->notifyNegative(); break;
        case 11: _t->mute((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GAudioOutput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GAudioOutput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GAudioOutput,
      qt_meta_data_GAudioOutput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GAudioOutput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GAudioOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GAudioOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GAudioOutput))
        return static_cast<void*>(const_cast< GAudioOutput*>(this));
    return QObject::qt_metacast(_clname);
}

int GAudioOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void GAudioOutput::mutedChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

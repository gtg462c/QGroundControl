/****************************************************************************
** Meta object code from reading C++ file 'uavitem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/mapwidget/uavitem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uavitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mapcontrol__UAVItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      45,   21,   20,   20, 0x05,
      92,   83,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_mapcontrol__UAVItem[] = {
    "mapcontrol::UAVItem\0\0waypointnumber,waypoint\0"
    "UAVReachedWayPoint(int,WayPointItem*)\0"
    "position\0UAVLeftSafetyBouble(internals::PointLatLng)\0"
};

void mapcontrol::UAVItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UAVItem *_t = static_cast<UAVItem *>(_o);
        switch (_id) {
        case 0: _t->UAVReachedWayPoint((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< WayPointItem*(*)>(_a[2]))); break;
        case 1: _t->UAVLeftSafetyBouble((*reinterpret_cast< const internals::PointLatLng(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mapcontrol::UAVItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mapcontrol::UAVItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_mapcontrol__UAVItem,
      qt_meta_data_mapcontrol__UAVItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mapcontrol::UAVItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mapcontrol::UAVItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mapcontrol::UAVItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mapcontrol__UAVItem))
        return static_cast<void*>(const_cast< UAVItem*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< UAVItem*>(this));
    if (!strcmp(_clname, "com.trolltech.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< UAVItem*>(this));
    return QObject::qt_metacast(_clname);
}

int mapcontrol::UAVItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void mapcontrol::UAVItem::UAVReachedWayPoint(int const & _t1, WayPointItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mapcontrol::UAVItem::UAVLeftSafetyBouble(internals::PointLatLng const & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

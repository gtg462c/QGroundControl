/****************************************************************************
** Meta object code from reading C++ file 'mousewheelzoomtype.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../libs/opmapcontrol/src/internals/mousewheelzoomtype.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mousewheelzoomtype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_internals__MouseWheelZoomType[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
      30, 0x0,    3,   18,

 // enum data: key, value
      36, uint(internals::MouseWheelZoomType::MousePositionAndCenter),
      59, uint(internals::MouseWheelZoomType::MousePositionWithoutCenter),
      86, uint(internals::MouseWheelZoomType::ViewCenter),

       0        // eod
};

static const char qt_meta_stringdata_internals__MouseWheelZoomType[] = {
    "internals::MouseWheelZoomType\0Types\0"
    "MousePositionAndCenter\0"
    "MousePositionWithoutCenter\0ViewCenter\0"
};

void internals::MouseWheelZoomType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData internals::MouseWheelZoomType::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject internals::MouseWheelZoomType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_internals__MouseWheelZoomType,
      qt_meta_data_internals__MouseWheelZoomType, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &internals::MouseWheelZoomType::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *internals::MouseWheelZoomType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *internals::MouseWheelZoomType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_internals__MouseWheelZoomType))
        return static_cast<void*>(const_cast< MouseWheelZoomType*>(this));
    return QObject::qt_metacast(_clname);
}

int internals::MouseWheelZoomType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
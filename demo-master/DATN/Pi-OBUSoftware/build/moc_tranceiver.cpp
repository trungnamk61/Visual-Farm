/****************************************************************************
** Meta object code from reading C++ file 'tranceiver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Terminal1/tranceiver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tranceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tranceiver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   33,   33,   33, 0x05,
      34,   33,   33,   33, 0x05,
      50,   33,   33,   33, 0x05,
      73,   95,   33,   33, 0x05,
      97,   33,   33,   33, 0x05,
     117,   33,   33,   33, 0x05,
     138,  168,   33,   33, 0x05,
     171,   95,   33,   33, 0x05,
     206,   33,   33,   33, 0x05,
     230,  168,   33,   33, 0x05,
     259,   33,   33,   33, 0x05,
     280,   95,   33,   33, 0x05,
     300,   95,   33,   33, 0x05,

 // slots: signature, parameters, type, tag, flags
     318,   33,   33,   33, 0x0a,
     329,   33,   33,   33, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Tranceiver[] = {
    "Tranceiver\0receivedData(QString)\0\0"
    "workRequested()\0ImageReceived(QString)\0"
    "nodeJoin(int,QString)\0,\0tempAndHum(QString)\0"
    "tempAndHum1(QString)\0TempHumi_t(int,double,double)\0"
    ",,\0receiveCompletely(QString,QString)\0"
    "motionDetected(QString)\0"
    "sendTandH(int,double,double)\0"
    "completeLux(QString)\0sendLux(int,double)\0"
    "Lux_t(int,double)\0readData()\0doWork()\0"
};

void Tranceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Tranceiver *_t = static_cast<Tranceiver *>(_o);
        switch (_id) {
        case 0: _t->receivedData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->workRequested(); break;
        case 2: _t->ImageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->nodeJoin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->tempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->tempAndHum1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->TempHumi_t((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 7: _t->receiveCompletely((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->motionDetected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->sendTandH((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 10: _t->completeLux((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->sendLux((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 12: _t->Lux_t((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->readData(); break;
        case 14: _t->doWork(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Tranceiver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Tranceiver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Tranceiver,
      qt_meta_data_Tranceiver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tranceiver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tranceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tranceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tranceiver))
        return static_cast<void*>(const_cast< Tranceiver*>(this));
    return QObject::qt_metacast(_clname);
}

int Tranceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Tranceiver::receivedData(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tranceiver::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Tranceiver::ImageReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tranceiver::nodeJoin(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Tranceiver::tempAndHum(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Tranceiver::tempAndHum1(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Tranceiver::TempHumi_t(int _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Tranceiver::receiveCompletely(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Tranceiver::motionDetected(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Tranceiver::sendTandH(int _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Tranceiver::completeLux(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Tranceiver::sendLux(int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Tranceiver::Lux_t(int _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE

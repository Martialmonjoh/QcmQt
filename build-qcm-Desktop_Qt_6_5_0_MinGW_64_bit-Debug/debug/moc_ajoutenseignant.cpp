/****************************************************************************
** Meta object code from reading C++ file 'ajoutenseignant.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projet_qcm (1)/ajoutenseignant.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ajoutenseignant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS = QtMocHelpers::stringData(
    "AjoutEnseignant",
    "on_ajouter_clicked",
    "",
    "on_exit_clicked",
    "on_pushButton_add_clicked",
    "on_pushButton_exit_clicked",
    "showtime_m",
    "on_make_test_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[26];
    char stringdata5[27];
    char stringdata6[11];
    char stringdata7[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS_t qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "AjoutEnseignant"
        QT_MOC_LITERAL(16, 18),  // "on_ajouter_clicked"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 15),  // "on_exit_clicked"
        QT_MOC_LITERAL(52, 25),  // "on_pushButton_add_clicked"
        QT_MOC_LITERAL(78, 26),  // "on_pushButton_exit_clicked"
        QT_MOC_LITERAL(105, 10),  // "showtime_m"
        QT_MOC_LITERAL(116, 20)   // "on_make_test_clicked"
    },
    "AjoutEnseignant",
    "on_ajouter_clicked",
    "",
    "on_exit_clicked",
    "on_pushButton_add_clicked",
    "on_pushButton_exit_clicked",
    "showtime_m",
    "on_make_test_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAjoutEnseignantENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AjoutEnseignant::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAjoutEnseignantENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AjoutEnseignant, std::true_type>,
        // method 'on_ajouter_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showtime_m'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_make_test_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AjoutEnseignant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AjoutEnseignant *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_ajouter_clicked(); break;
        case 1: _t->on_exit_clicked(); break;
        case 2: _t->on_pushButton_add_clicked(); break;
        case 3: _t->on_pushButton_exit_clicked(); break;
        case 4: _t->showtime_m(); break;
        case 5: _t->on_make_test_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AjoutEnseignant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AjoutEnseignant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAjoutEnseignantENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AjoutEnseignant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

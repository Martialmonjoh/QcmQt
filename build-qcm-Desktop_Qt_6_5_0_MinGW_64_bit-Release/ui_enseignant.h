/********************************************************************************
** Form generated from reading UI file 'enseignant.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENSEIGNANT_H
#define UI_ENSEIGNANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Enseignant
{
public:
    QPushButton *make_test;
    QPushButton *exit;
    QPushButton *make_test_2;

    void setupUi(QDialog *Enseignant)
    {
        if (Enseignant->objectName().isEmpty())
            Enseignant->setObjectName("Enseignant");
        Enseignant->resize(400, 300);
        make_test = new QPushButton(Enseignant);
        make_test->setObjectName("make_test");
        make_test->setGeometry(QRect(110, 30, 191, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        make_test->setFont(font);
        exit = new QPushButton(Enseignant);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(260, 230, 101, 41));
        exit->setFont(font);
        make_test_2 = new QPushButton(Enseignant);
        make_test_2->setObjectName("make_test_2");
        make_test_2->setGeometry(QRect(110, 120, 191, 61));
        make_test_2->setFont(font);

        retranslateUi(Enseignant);

        QMetaObject::connectSlotsByName(Enseignant);
    } // setupUi

    void retranslateUi(QDialog *Enseignant)
    {
        Enseignant->setWindowTitle(QCoreApplication::translate("Enseignant", "Dialog", nullptr));
        make_test->setText(QCoreApplication::translate("Enseignant", "concevoir QCM", nullptr));
        exit->setText(QCoreApplication::translate("Enseignant", "Exit", nullptr));
        make_test_2->setText(QCoreApplication::translate("Enseignant", "Matieres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enseignant: public Ui_Enseignant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENSEIGNANT_H

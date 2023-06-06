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

    void setupUi(QDialog *Enseignant)
    {
        if (Enseignant->objectName().isEmpty())
            Enseignant->setObjectName("Enseignant");
        Enseignant->resize(400, 300);
        Enseignant->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255)"));
        make_test = new QPushButton(Enseignant);
        make_test->setObjectName("make_test");
        make_test->setGeometry(QRect(100, 80, 191, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        make_test->setFont(font);
        make_test->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));
        exit = new QPushButton(Enseignant);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(260, 230, 101, 41));
        exit->setFont(font);
        exit->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));

        retranslateUi(Enseignant);

        QMetaObject::connectSlotsByName(Enseignant);
    } // setupUi

    void retranslateUi(QDialog *Enseignant)
    {
        Enseignant->setWindowTitle(QCoreApplication::translate("Enseignant", "Dialog", nullptr));
        make_test->setText(QCoreApplication::translate("Enseignant", "concevoir QCM", nullptr));
        exit->setText(QCoreApplication::translate("Enseignant", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enseignant: public Ui_Enseignant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENSEIGNANT_H

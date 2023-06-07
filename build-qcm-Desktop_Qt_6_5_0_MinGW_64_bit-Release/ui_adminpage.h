/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QPushButton *add_etudiant;
    QPushButton *exit;
    QPushButton *add_etudiant_2;
    QPushButton *make_test_2;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName("AdminPage");
        AdminPage->resize(400, 300);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        AdminPage->setFont(font);
        AdminPage->setCursor(QCursor(Qt::ArrowCursor));
        AdminPage->setAutoFillBackground(false);
        AdminPage->setStyleSheet(QString::fromUtf8("border-radius:5px;background:rgb(85, 255, 255)"));
        add_etudiant = new QPushButton(AdminPage);
        add_etudiant->setObjectName("add_etudiant");
        add_etudiant->setGeometry(QRect(120, 50, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        add_etudiant->setFont(font1);
        add_etudiant->setStyleSheet(QString::fromUtf8("border-radius:5px;background:white"));
        exit = new QPushButton(AdminPage);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(280, 250, 91, 31));
        exit->setFont(font1);
        exit->setStyleSheet(QString::fromUtf8("border-radius:5px;background:white"));
        add_etudiant_2 = new QPushButton(AdminPage);
        add_etudiant_2->setObjectName("add_etudiant_2");
        add_etudiant_2->setGeometry(QRect(120, 110, 161, 31));
        add_etudiant_2->setFont(font1);
        add_etudiant_2->setStyleSheet(QString::fromUtf8("border-radius:5px;background:white"));
        make_test_2 = new QPushButton(AdminPage);
        make_test_2->setObjectName("make_test_2");
        make_test_2->setGeometry(QRect(120, 170, 161, 31));
        make_test_2->setFont(font1);
        make_test_2->setStyleSheet(QString::fromUtf8("border-radius:5px;background:white"));

        retranslateUi(AdminPage);

        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Dialog", nullptr));
        add_etudiant->setText(QCoreApplication::translate("AdminPage", "Ajouter etudiants", nullptr));
        exit->setText(QCoreApplication::translate("AdminPage", "Exit", nullptr));
        add_etudiant_2->setText(QCoreApplication::translate("AdminPage", "Ajouter enseignants", nullptr));
        make_test_2->setText(QCoreApplication::translate("AdminPage", "Creer des matieres", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H

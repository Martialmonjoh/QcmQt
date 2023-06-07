/********************************************************************************
** Form generated from reading UI file 'ajoutetudiant.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTETUDIANT_H
#define UI_AJOUTETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AjoutEtudiant
{
public:
    QPushButton *ajouter;
    QPushButton *exit;
    QLineEdit *pass_edit;
    QLabel *label_2;
    QLineEdit *name_edit;
    QLabel *label;

    void setupUi(QDialog *AjoutEtudiant)
    {
        if (AjoutEtudiant->objectName().isEmpty())
            AjoutEtudiant->setObjectName("AjoutEtudiant");
        AjoutEtudiant->resize(409, 303);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        AjoutEtudiant->setFont(font);
        AjoutEtudiant->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255)"));
        ajouter = new QPushButton(AjoutEtudiant);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(180, 220, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        font1.setItalic(true);
        ajouter->setFont(font1);
        ajouter->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        exit = new QPushButton(AjoutEtudiant);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(290, 220, 91, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        exit->setFont(font2);
        exit->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        pass_edit = new QLineEdit(AjoutEtudiant);
        pass_edit->setObjectName("pass_edit");
        pass_edit->setGeometry(QRect(80, 140, 161, 31));
        pass_edit->setFont(font1);
        pass_edit->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        label_2 = new QLabel(AjoutEtudiant);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 198, 23));
        label_2->setFont(font);
        name_edit = new QLineEdit(AjoutEtudiant);
        name_edit->setObjectName("name_edit");
        name_edit->setGeometry(QRect(80, 60, 161, 31));
        name_edit->setFont(font1);
        name_edit->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        label = new QLabel(AjoutEtudiant);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 198, 23));
        label->setFont(font);

        retranslateUi(AjoutEtudiant);

        QMetaObject::connectSlotsByName(AjoutEtudiant);
    } // setupUi

    void retranslateUi(QDialog *AjoutEtudiant)
    {
        AjoutEtudiant->setWindowTitle(QCoreApplication::translate("AjoutEtudiant", "Dialog", nullptr));
        ajouter->setText(QCoreApplication::translate("AjoutEtudiant", "Ajouter", nullptr));
        exit->setText(QCoreApplication::translate("AjoutEtudiant", "Quitter", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutEtudiant", "password :", nullptr));
        label->setText(QCoreApplication::translate("AjoutEtudiant", "name :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutEtudiant: public Ui_AjoutEtudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTETUDIANT_H

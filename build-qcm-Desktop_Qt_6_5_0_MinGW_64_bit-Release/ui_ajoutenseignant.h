/********************************************************************************
** Form generated from reading UI file 'ajoutenseignant.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTENSEIGNANT_H
#define UI_AJOUTENSEIGNANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AjoutEnseignant
{
public:
    QPushButton *ajouter;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *pass_edit;
    QLineEdit *name_edit;
    QPushButton *exit;

    void setupUi(QDialog *AjoutEnseignant)
    {
        if (AjoutEnseignant->objectName().isEmpty())
            AjoutEnseignant->setObjectName("AjoutEnseignant");
        AjoutEnseignant->resize(400, 300);
        AjoutEnseignant->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255)"));
        ajouter = new QPushButton(AjoutEnseignant);
        ajouter->setObjectName("ajouter");
        ajouter->setGeometry(QRect(160, 230, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        ajouter->setFont(font);
        ajouter->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        label = new QLabel(AjoutEnseignant);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 198, 23));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label_2 = new QLabel(AjoutEnseignant);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 90, 198, 23));
        label_2->setFont(font1);
        pass_edit = new QLineEdit(AjoutEnseignant);
        pass_edit->setObjectName("pass_edit");
        pass_edit->setGeometry(QRect(70, 130, 161, 31));
        pass_edit->setFont(font1);
        pass_edit->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        name_edit = new QLineEdit(AjoutEnseignant);
        name_edit->setObjectName("name_edit");
        name_edit->setGeometry(QRect(70, 50, 161, 31));
        name_edit->setFont(font1);
        name_edit->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        exit = new QPushButton(AjoutEnseignant);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(270, 230, 91, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        exit->setFont(font2);
        exit->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));

        retranslateUi(AjoutEnseignant);

        QMetaObject::connectSlotsByName(AjoutEnseignant);
    } // setupUi

    void retranslateUi(QDialog *AjoutEnseignant)
    {
        AjoutEnseignant->setWindowTitle(QCoreApplication::translate("AjoutEnseignant", "Dialog", nullptr));
        ajouter->setText(QCoreApplication::translate("AjoutEnseignant", "Ajouter", nullptr));
        label->setText(QCoreApplication::translate("AjoutEnseignant", "name :", nullptr));
        label_2->setText(QCoreApplication::translate("AjoutEnseignant", "password :", nullptr));
        exit->setText(QCoreApplication::translate("AjoutEnseignant", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjoutEnseignant: public Ui_AjoutEnseignant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTENSEIGNANT_H

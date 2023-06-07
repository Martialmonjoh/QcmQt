/********************************************************************************
** Form generated from reading UI file 'matiere.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERE_H
#define UI_MATIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Matiere
{
public:
    QPushButton *pushButton;
    QLineEdit *EditMatiere;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Matiere)
    {
        if (Matiere->objectName().isEmpty())
            Matiere->setObjectName("Matiere");
        Matiere->resize(400, 300);
        Matiere->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255);\n"
"border-radius:5px;\n"
""));
        pushButton = new QPushButton(Matiere);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 230, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        EditMatiere = new QLineEdit(Matiere);
        EditMatiere->setObjectName("EditMatiere");
        EditMatiere->setGeometry(QRect(90, 100, 241, 51));
        EditMatiere->setFont(font);
        EditMatiere->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid"));
        label = new QLabel(Matiere);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 161, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        pushButton_2 = new QPushButton(Matiere);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(270, 230, 111, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));

        retranslateUi(Matiere);

        QMetaObject::connectSlotsByName(Matiere);
    } // setupUi

    void retranslateUi(QDialog *Matiere)
    {
        Matiere->setWindowTitle(QCoreApplication::translate("Matiere", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Matiere", "Ajoutez", nullptr));
        label->setText(QCoreApplication::translate("Matiere", "Matiere :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Matiere", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Matiere: public Ui_Matiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE_H

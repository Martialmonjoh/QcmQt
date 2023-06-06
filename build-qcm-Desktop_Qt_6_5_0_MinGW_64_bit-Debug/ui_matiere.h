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
    QLineEdit *lineEdit_q;
    QLabel *label;
    QPushButton *pushButton_exit;
    QPushButton *pushButton_add;

    void setupUi(QDialog *Matiere)
    {
        if (Matiere->objectName().isEmpty())
            Matiere->setObjectName("Matiere");
        Matiere->resize(400, 300);
        Matiere->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255);"));
        lineEdit_q = new QLineEdit(Matiere);
        lineEdit_q->setObjectName("lineEdit_q");
        lineEdit_q->setGeometry(QRect(40, 100, 331, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(true);
        lineEdit_q->setFont(font);
        lineEdit_q->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));
        label = new QLabel(Matiere);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 301, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        pushButton_exit = new QPushButton(Matiere);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(260, 220, 121, 41));
        pushButton_exit->setFont(font1);
        pushButton_exit->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));
        pushButton_add = new QPushButton(Matiere);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(140, 220, 111, 41));
        pushButton_add->setFont(font1);
        pushButton_add->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));

        retranslateUi(Matiere);

        QMetaObject::connectSlotsByName(Matiere);
    } // setupUi

    void retranslateUi(QDialog *Matiere)
    {
        Matiere->setWindowTitle(QCoreApplication::translate("Matiere", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Matiere", "Matieres:", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Matiere", "Quitter", nullptr));
        pushButton_add->setText(QCoreApplication::translate("Matiere", "Ajoutez", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Matiere: public Ui_Matiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE_H

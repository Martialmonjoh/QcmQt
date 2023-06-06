/********************************************************************************
** Form generated from reading UI file 'matiere1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATIERE1_H
#define UI_MATIERE1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Matiere1
{
public:
    QPushButton *pushButton_exit;
    QPushButton *matiere;
    QLabel *label;
    QLineEdit *lineEdit_q;

    void setupUi(QDialog *Matiere1)
    {
        if (Matiere1->objectName().isEmpty())
            Matiere1->setObjectName("Matiere1");
        Matiere1->resize(400, 300);
        pushButton_exit = new QPushButton(Matiere1);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(260, 210, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        pushButton_exit->setFont(font);
        matiere = new QPushButton(Matiere1);
        matiere->setObjectName("matiere");
        matiere->setGeometry(QRect(140, 210, 111, 41));
        matiere->setFont(font);
        label = new QLabel(Matiere1);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 301, 51));
        label->setFont(font);
        lineEdit_q = new QLineEdit(Matiere1);
        lineEdit_q->setObjectName("lineEdit_q");
        lineEdit_q->setGeometry(QRect(40, 90, 331, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        font1.setItalic(true);
        lineEdit_q->setFont(font1);

        retranslateUi(Matiere1);

        QMetaObject::connectSlotsByName(Matiere1);
    } // setupUi

    void retranslateUi(QDialog *Matiere1)
    {
        Matiere1->setWindowTitle(QCoreApplication::translate("Matiere1", "Dialog", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("Matiere1", "Quitter", nullptr));
        matiere->setText(QCoreApplication::translate("Matiere1", "Ajoutez", nullptr));
        label->setText(QCoreApplication::translate("Matiere1", "Matieres:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Matiere1: public Ui_Matiere1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATIERE1_H

/********************************************************************************
** Form generated from reading UI file 'users.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERS_H
#define UI_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Users
{
public:
    QLabel *label;
    QPushButton *yes_btn;
    QPushButton *no_btn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nbr_student;
    QLineEdit *lineEdit_user;

    void setupUi(QDialog *Users)
    {
        if (Users->objectName().isEmpty())
            Users->setObjectName("Users");
        Users->resize(495, 294);
        Users->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255);"));
        label = new QLabel(Users);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 451, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        yes_btn = new QPushButton(Users);
        yes_btn->setObjectName("yes_btn");
        yes_btn->setGeometry(QRect(200, 210, 91, 31));
        yes_btn->setFont(font);
        yes_btn->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));
        no_btn = new QPushButton(Users);
        no_btn->setObjectName("no_btn");
        no_btn->setGeometry(QRect(340, 210, 91, 31));
        no_btn->setFont(font);
        no_btn->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));
        layoutWidget = new QWidget(Users);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 90, 401, 111));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_nbr_student = new QLabel(layoutWidget);
        label_nbr_student->setObjectName("label_nbr_student");
        label_nbr_student->setFont(font);

        horizontalLayout->addWidget(label_nbr_student);

        lineEdit_user = new QLineEdit(layoutWidget);
        lineEdit_user->setObjectName("lineEdit_user");
        lineEdit_user->setFont(font);
        lineEdit_user->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_user);


        retranslateUi(Users);

        QMetaObject::connectSlotsByName(Users);
    } // setupUi

    void retranslateUi(QDialog *Users)
    {
        Users->setWindowTitle(QCoreApplication::translate("Users", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Users", "Y a-t-il un autre \303\251tudiant qui veut passer le TEST ?", nullptr));
        yes_btn->setText(QCoreApplication::translate("Users", "Oui", nullptr));
        no_btn->setText(QCoreApplication::translate("Users", "Non", nullptr));
        label_nbr_student->setText(QCoreApplication::translate("Users", "Entrez votre identifiant : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Users: public Ui_Users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERS_H

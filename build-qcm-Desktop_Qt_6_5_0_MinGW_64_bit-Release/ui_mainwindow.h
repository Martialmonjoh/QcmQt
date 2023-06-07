/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *valider;
    QLabel *question;
    QCheckBox *choix1;
    QCheckBox *choix2;
    QCheckBox *choix3;
    QCheckBox *choix4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *clock;
    QLabel *digital_clock;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QCheckBox *choix5;
    QPushButton *valider_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(988, 439);
        MainWindow->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255)"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        valider = new QPushButton(centralWidget);
        valider->setObjectName("valider");
        valider->setGeometry(QRect(190, 340, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(true);
        valider->setFont(font);
        valider->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        question = new QLabel(centralWidget);
        question->setObjectName("question");
        question->setGeometry(QRect(20, 70, 911, 31));
        question->setFont(font);
        choix1 = new QCheckBox(centralWidget);
        choix1->setObjectName("choix1");
        choix1->setGeometry(QRect(50, 120, 921, 41));
        choix1->setFont(font);
        choix2 = new QCheckBox(centralWidget);
        choix2->setObjectName("choix2");
        choix2->setGeometry(QRect(50, 160, 921, 41));
        choix2->setFont(font);
        choix3 = new QCheckBox(centralWidget);
        choix3->setObjectName("choix3");
        choix3->setGeometry(QRect(50, 200, 921, 41));
        choix3->setFont(font);
        choix4 = new QCheckBox(centralWidget);
        choix4->setObjectName("choix4");
        choix4->setGeometry(QRect(50, 240, 921, 41));
        choix4->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(770, 10, 181, 19));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clock = new QLabel(layoutWidget);
        clock->setObjectName("clock");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(true);
        clock->setFont(font1);

        horizontalLayout->addWidget(clock);

        digital_clock = new QLabel(layoutWidget);
        digital_clock->setObjectName("digital_clock");
        digital_clock->setFont(font);

        horizontalLayout->addWidget(digital_clock);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 20, 274, 25));
        layoutWidget1->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_id = new QLineEdit(layoutWidget1);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setFont(font);
        lineEdit_id->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));

        horizontalLayout_3->addWidget(lineEdit_id);

        choix5 = new QCheckBox(centralWidget);
        choix5->setObjectName("choix5");
        choix5->setGeometry(QRect(50, 290, 891, 31));
        choix5->setFont(font);
        valider_2 = new QPushButton(centralWidget);
        valider_2->setObjectName("valider_2");
        valider_2->setGeometry(QRect(590, 340, 181, 41));
        valider_2->setFont(font);
        valider_2->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        MainWindow->setCentralWidget(centralWidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 988, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QCM", nullptr));
        valider->setText(QCoreApplication::translate("MainWindow", "Suivant", nullptr));
        question->setText(QCoreApplication::translate("MainWindow", "Question : ", nullptr));
        choix1->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        choix2->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        choix3->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        choix4->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        clock->setText(QCoreApplication::translate("MainWindow", "Clock", nullptr));
        digital_clock->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Entrez le numero de la question : ", nullptr));
        choix5->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        valider_2->setText(QCoreApplication::translate("MainWindow", "Historiques", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

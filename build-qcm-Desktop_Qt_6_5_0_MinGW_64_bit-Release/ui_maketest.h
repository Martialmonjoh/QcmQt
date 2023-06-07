/********************************************************************************
** Form generated from reading UI file 'maketest.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKETEST_H
#define UI_MAKETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MakeTest
{
public:
    QPushButton *pushButton_add;
    QPushButton *pushButton_exit;
    QWidget *widget;
    QLabel *label_2;
    QLineEdit *lineEdit_r1;
    QLineEdit *lineEdit_r2;
    QLineEdit *lineEdit_r3;
    QLineEdit *lineEdit_r4;
    QLineEdit *lineEdit_r5;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Date;
    QLabel *Date_ed;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *clock;
    QLabel *digital_clock;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit_q;
    QLabel *label;

    void setupUi(QDialog *MakeTest)
    {
        if (MakeTest->objectName().isEmpty())
            MakeTest->setObjectName("MakeTest");
        MakeTest->resize(1153, 672);
        MakeTest->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255)"));
        pushButton_add = new QPushButton(MakeTest);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(670, 540, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(true);
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        pushButton_exit = new QPushButton(MakeTest);
        pushButton_exit->setObjectName("pushButton_exit");
        pushButton_exit->setGeometry(QRect(890, 540, 181, 51));
        pushButton_exit->setFont(font);
        pushButton_exit->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        widget = new QWidget(MakeTest);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 130, 611, 241));
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 569, 16));
        label_2->setFont(font);
        lineEdit_r1 = new QLineEdit(widget);
        lineEdit_r1->setObjectName("lineEdit_r1");
        lineEdit_r1->setGeometry(QRect(20, 30, 569, 22));
        lineEdit_r1->setFont(font);
        lineEdit_r1->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        lineEdit_r2 = new QLineEdit(widget);
        lineEdit_r2->setObjectName("lineEdit_r2");
        lineEdit_r2->setGeometry(QRect(20, 80, 569, 22));
        lineEdit_r2->setFont(font);
        lineEdit_r2->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        lineEdit_r3 = new QLineEdit(widget);
        lineEdit_r3->setObjectName("lineEdit_r3");
        lineEdit_r3->setGeometry(QRect(20, 120, 569, 22));
        lineEdit_r3->setFont(font);
        lineEdit_r3->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        lineEdit_r4 = new QLineEdit(widget);
        lineEdit_r4->setObjectName("lineEdit_r4");
        lineEdit_r4->setGeometry(QRect(20, 160, 569, 22));
        lineEdit_r4->setFont(font);
        lineEdit_r4->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        lineEdit_r5 = new QLineEdit(widget);
        lineEdit_r5->setObjectName("lineEdit_r5");
        lineEdit_r5->setGeometry(QRect(20, 200, 569, 22));
        lineEdit_r5->setFont(font);
        lineEdit_r5->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        layoutWidget_2 = new QWidget(MakeTest);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(800, 10, 121, 19));
        layoutWidget_2->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        Date = new QLabel(layoutWidget_2);
        Date->setObjectName("Date");
        Date->setFont(font);

        horizontalLayout_4->addWidget(Date);

        Date_ed = new QLabel(layoutWidget_2);
        Date_ed->setObjectName("Date_ed");
        Date_ed->setFont(font);

        horizontalLayout_4->addWidget(Date_ed);

        layoutWidget = new QWidget(MakeTest);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(920, 10, 181, 19));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clock = new QLabel(layoutWidget);
        clock->setObjectName("clock");
        clock->setFont(font);

        horizontalLayout->addWidget(clock);

        digital_clock = new QLabel(layoutWidget);
        digital_clock->setObjectName("digital_clock");
        digital_clock->setFont(font);

        horizontalLayout->addWidget(digital_clock);

        label_5 = new QLabel(MakeTest);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 470, 811, 51));
        label_5->setFont(font);
        label_4 = new QLabel(MakeTest);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 440, 1041, 34));
        label_4->setFont(font);
        label_3 = new QLabel(MakeTest);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 390, 661, 51));
        label_3->setFont(font);
        lineEdit_q = new QLineEdit(MakeTest);
        lineEdit_q->setObjectName("lineEdit_q");
        lineEdit_q->setGeometry(QRect(50, 80, 611, 23));
        lineEdit_q->setFont(font);
        lineEdit_q->setStyleSheet(QString::fromUtf8("background: white; border:1 px solid;border-radius:5px"));
        label = new QLabel(MakeTest);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 30, 499, 46));
        label->setFont(font);

        retranslateUi(MakeTest);

        QMetaObject::connectSlotsByName(MakeTest);
    } // setupUi

    void retranslateUi(QDialog *MakeTest)
    {
        MakeTest->setWindowTitle(QCoreApplication::translate("MakeTest", "Dialog", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MakeTest", "Ajoutez", nullptr));
        pushButton_exit->setText(QCoreApplication::translate("MakeTest", "Quitter", nullptr));
        label_2->setText(QCoreApplication::translate("MakeTest", "Reponses:", nullptr));
        Date->setText(QCoreApplication::translate("MakeTest", "DATE:", nullptr));
        Date_ed->setText(QCoreApplication::translate("MakeTest", "TextLabel", nullptr));
        clock->setText(QCoreApplication::translate("MakeTest", "Heure :", nullptr));
        digital_clock->setText(QCoreApplication::translate("MakeTest", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MakeTest", "chaque questions doit contenir au moins 2 reponses.", nullptr));
        label_4->setText(QCoreApplication::translate("MakeTest", "Exemple: \"-> option\"", nullptr));
        label_3->setText(QCoreApplication::translate("MakeTest", "NB: toujours ajoutez \"-> \" avant les propositions correctes.", nullptr));
        label->setText(QCoreApplication::translate("MakeTest", "Questions:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeTest: public Ui_MakeTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKETEST_H

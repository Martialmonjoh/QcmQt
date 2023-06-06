/********************************************************************************
** Form generated from reading UI file 'listmatiere.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTMATIERE_H
#define UI_LISTMATIERE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListMatiere
{
public:
    QLabel *question;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *valider;
    QPushButton *valider_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QLabel *clock;
    QLabel *digital_clock;
    QCheckBox *choix1;
    QCheckBox *choix5;
    QCheckBox *choix4;
    QCheckBox *choix3;
    QCheckBox *choix2;

    void setupUi(QDialog *ListMatiere)
    {
        if (ListMatiere->objectName().isEmpty())
            ListMatiere->setObjectName("ListMatiere");
        ListMatiere->resize(788, 488);
        question = new QLabel(ListMatiere);
        question->setObjectName("question");
        question->setGeometry(QRect(20, 60, 911, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(true);
        question->setFont(font);
        layoutWidget = new QWidget(ListMatiere);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(400, 10, 181, 19));
        layoutWidget->setFont(font);
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        valider = new QPushButton(ListMatiere);
        valider->setObjectName("valider");
        valider->setGeometry(QRect(80, 350, 381, 41));
        valider->setFont(font);
        valider_2 = new QPushButton(ListMatiere);
        valider_2->setObjectName("valider_2");
        valider_2->setGeometry(QRect(520, 350, 181, 41));
        valider_2->setFont(font);
        layoutWidget_2 = new QWidget(ListMatiere);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(40, 10, 274, 25));
        layoutWidget_2->setFont(font);
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        lineEdit_id = new QLineEdit(layoutWidget_2);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_id);

        clock = new QLabel(ListMatiere);
        clock->setObjectName("clock");
        clock->setGeometry(QRect(410, 10, 87, 17));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(true);
        clock->setFont(font1);
        digital_clock = new QLabel(ListMatiere);
        digital_clock->setObjectName("digital_clock");
        digital_clock->setGeometry(QRect(460, 10, 179, 17));
        digital_clock->setFont(font);
        choix1 = new QCheckBox(ListMatiere);
        choix1->setObjectName("choix1");
        choix1->setGeometry(QRect(100, 110, 921, 41));
        choix1->setFont(font);
        choix5 = new QCheckBox(ListMatiere);
        choix5->setObjectName("choix5");
        choix5->setGeometry(QRect(100, 280, 891, 31));
        choix5->setFont(font);
        choix4 = new QCheckBox(ListMatiere);
        choix4->setObjectName("choix4");
        choix4->setGeometry(QRect(100, 230, 921, 41));
        choix4->setFont(font);
        choix3 = new QCheckBox(ListMatiere);
        choix3->setObjectName("choix3");
        choix3->setGeometry(QRect(100, 190, 921, 41));
        choix3->setFont(font);
        choix2 = new QCheckBox(ListMatiere);
        choix2->setObjectName("choix2");
        choix2->setGeometry(QRect(100, 150, 921, 41));
        choix2->setFont(font);

        retranslateUi(ListMatiere);

        QMetaObject::connectSlotsByName(ListMatiere);
    } // setupUi

    void retranslateUi(QDialog *ListMatiere)
    {
        ListMatiere->setWindowTitle(QCoreApplication::translate("ListMatiere", "Dialog", nullptr));
        question->setText(QCoreApplication::translate("ListMatiere", "Matieres: ", nullptr));
        valider->setText(QCoreApplication::translate("ListMatiere", "Suivant", nullptr));
        valider_2->setText(QCoreApplication::translate("ListMatiere", "Quitter", nullptr));
        label_2->setText(QCoreApplication::translate("ListMatiere", "Entrez le numero de la question : ", nullptr));
        clock->setText(QCoreApplication::translate("ListMatiere", "Clock", nullptr));
        digital_clock->setText(QCoreApplication::translate("ListMatiere", "TextLabel", nullptr));
        choix1->setText(QCoreApplication::translate("ListMatiere", "CheckBox", nullptr));
        choix5->setText(QCoreApplication::translate("ListMatiere", "CheckBox", nullptr));
        choix4->setText(QCoreApplication::translate("ListMatiere", "CheckBox", nullptr));
        choix3->setText(QCoreApplication::translate("ListMatiere", "CheckBox", nullptr));
        choix2->setText(QCoreApplication::translate("ListMatiere", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListMatiere: public Ui_ListMatiere {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTMATIERE_H

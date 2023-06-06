/********************************************************************************
** Form generated from reading UI file 'note.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTE_H
#define UI_NOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NOTE
{
public:
    QLabel *label_note;
    QLabel *note_text;
    QPushButton *EXIT;
    QLabel *label_date;

    void setupUi(QDialog *NOTE)
    {
        if (NOTE->objectName().isEmpty())
            NOTE->setObjectName("NOTE");
        NOTE->resize(668, 447);
        NOTE->setStyleSheet(QString::fromUtf8("background:rgb(85, 255, 255);"));
        label_note = new QLabel(NOTE);
        label_note->setObjectName("label_note");
        label_note->setGeometry(QRect(50, 20, 91, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        label_note->setFont(font);
        note_text = new QLabel(NOTE);
        note_text->setObjectName("note_text");
        note_text->setGeometry(QRect(140, 110, 291, 161));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setItalic(true);
        note_text->setFont(font1);
        EXIT = new QPushButton(NOTE);
        EXIT->setObjectName("EXIT");
        EXIT->setGeometry(QRect(410, 370, 151, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        EXIT->setFont(font2);
        EXIT->setStyleSheet(QString::fromUtf8("background:white;\n"
"border: 6px rgb(85, 255, 255);"));
        label_date = new QLabel(NOTE);
        label_date->setObjectName("label_date");
        label_date->setGeometry(QRect(340, 20, 221, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(true);
        label_date->setFont(font3);

        retranslateUi(NOTE);

        QMetaObject::connectSlotsByName(NOTE);
    } // setupUi

    void retranslateUi(QDialog *NOTE)
    {
        NOTE->setWindowTitle(QCoreApplication::translate("NOTE", "Dialog", nullptr));
        label_note->setText(QCoreApplication::translate("NOTE", "NOTE", nullptr));
        note_text->setText(QCoreApplication::translate("NOTE", "TextLabel", nullptr));
        EXIT->setText(QCoreApplication::translate("NOTE", "Quitter", nullptr));
        label_date->setText(QCoreApplication::translate("NOTE", "DATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NOTE: public Ui_NOTE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTE_H

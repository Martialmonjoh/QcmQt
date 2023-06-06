#include "maketest.h"
#include "ui_maketest.h"
#include "question.h"
#include <QObject>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <iostream>
#include <QTimer>
#include <QDateTime>
using namespace std;


MakeTest::MakeTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MakeTest)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);
    connect(timer ,SIGNAL(timeout()),this,SLOT(showtime_m()));
    timer->start();

    ofstream quest_file;
    quest_file.open("quest_rep.txt",ios::trunc);


    QDateTime datetime=QDateTime::currentDateTime();
    QString datetime_text=datetime.toString();

    ui->Date_ed->setText(datetime_text);
}


MakeTest::~MakeTest()
{
    delete ui;
}

void MakeTest::on_pushButton_add_clicked()
{

    QString qst=ui->lineEdit_q->text();
    Question q(qst.toStdString());
    QList<QLineEdit*> reponses_=ui->widget->findChildren<QLineEdit*>();

    ofstream quest_file;

     if(counter_trunc==0)
     {
        quest_file.open("quest_rep.txt",ios::trunc);
     } else{ quest_file.open("quest_rep.txt",ios::app);}

     int verifier_reponse=0;
     foreach (QLineEdit* c, reponses_)
     {
         string verif=(c->text().toStdString());
         if(verif=="")
         {
            ++ verifier_reponse;
         }
     }
     if (q.getTexte()==""|| verifier_reponse>=4)
     {
         if(q.getTexte()=="")
         {
             QMessageBox::information(this,"WARNING!","vous avez oublié de saisir une question");
         }
         else{QMessageBox::information(this,"WARNING! ","veuillez entrer 2 à 5 possibilités");}
     }
     else
     {
        quest_file<<q.getTexte()<<endl;
        ui->lineEdit_q->clear();
        foreach (QLineEdit* c, reponses_)
        {
            quest_file<<(c->text()).toStdString()<<endl;
            c->clear();
        }
            quest_file<<"@#!"<<endl;
            QMessageBox::information(this,"Saved "," The question has been saved");
             ++counter_trunc;
     }
     quest_file.close();
}

void MakeTest::on_pushButton_exit_clicked()
{
    string question_rep="quest_rep.txt";
    ifstream myfile(question_rep);
    string buffer;
    getline(myfile,buffer);

    if(buffer=="")
    {
        QMessageBox::information(this,"Erreur","Pas une seule question n'a été enregistrée");
    }else
    {
        close();
        QMessageBox::information(this,"Erreur","TOUTES les questions ont été enregistrées.\n Aucune autre modification n'est autorisée !!! ");
    }
    myfile.close();
}

void MakeTest::showtime_m()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");

    if((time.second() % 2)==0)
    {
        time_text[3]=' ';
        time_text[8]=' ';
    }

    ui->digital_clock->setText(time_text);
}




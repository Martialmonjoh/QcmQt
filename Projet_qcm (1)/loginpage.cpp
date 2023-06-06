#include "loginpage.h"
#include "ui_loginpage.h"

#include <QObject>
#include <QString>
#include <QCheckBox>
#include <QMessageBox>
#include "mainwindow.h"
#include "maketest.h"
#include "enseignant.h"
#include <QApplication>
#include <fstream>
#include <iostream>
#include <QTimer>
#include <QDateTime>


LoginPage::LoginPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);
    connect(timer ,SIGNAL(timeout()),this,SLOT(showtime()));
    timer->start();

    QDateTime datetime=QDateTime::currentDateTime();
    QString datetime_text=datetime.toString();

    ui->Date_ed->setText(datetime_text);
}


LoginPage::~LoginPage()
{
    delete ui;
}

bool trouver_p(const char& para,const string& check){
    string question_rep="etudiants.txt";
    ifstream myfile(question_rep);
    string buffer;
    bool check_np= false;
    try{
        if(myfile.is_open()){
            while(myfile.good()){
                getline(myfile,buffer);
                if(buffer[0]==para){
                    buffer.erase(0,1);
                }if(buffer==check){
                    check_np=true;
                    break;
                }
            }
        }else
        {
            throw string("le chemin ou le fichier est incorrect dans la page de connexion");
        }

    } catch(const string & msg){
        cerr<<msg<<endl;
}
    return check_np;
}


bool trouver_p2(const char& para,const string& check){
    string question_rep2="enseignants.txt";
    ifstream myfile(question_rep2);
    string buffer;
    bool check_np2= false;
    try{
        if(myfile.is_open()){
            while(myfile.good()){
                getline(myfile,buffer);
                if(buffer[0]==para){
                    buffer.erase(0,1);
                }if(buffer==check){
                    check_np2=true;
                    break;
                }
            }
        }else
        {
            throw string("le chemin ou le fichier est incorrect dans la page de connexion");
        }

    } catch(const string & msg){
        cerr<<msg<<endl;
    }
    return check_np2;
}
void LoginPage::on_pushButton_log_clicked()
{
    QString user_t= ui->lineEdit_U->text();
    QString user_p= ui->lineEdit_P->text();

    if(user_t=="" && user_p==""){
        QMessageBox::information(this,"WARNING!","veuillez entrer un identifiant correct");
    }
    else if(user_t == "monjoh" && user_p =="monjoh"){
        ui->lineEdit_U->setText("");
        ui->lineEdit_P->setText("");
        AdminPage *a=new AdminPage;
        a->show();
   }else{
        bool check_name=trouver_p('*',user_t.toStdString());
        bool check_pass=trouver_p('{',user_p.toStdString());
        if (check_name && check_pass)
        {

             MainWindow * m = new MainWindow(this);
             m->set_name(user_t.toStdString());
             m->show();
        }
        else{
            QMessageBox::information(this,"oops","assurez-vous d'avoir entré les bons paramètres");
        }
    }
   if(user_t=="" && user_p==""){
        QMessageBox::information(this,"WARNING!","veuillez entrer un identifiant correct");
   }else{
        bool check_name2=trouver_p2('*',user_t.toStdString());
        bool check_pass2=trouver_p2('{',user_p.toStdString());
        if (check_name2 && check_pass2)
        {
            Enseignant* m= new Enseignant(this);
             m->show();
        }
    }
}

void LoginPage::showtime()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");

    if((time.second() % 2)==0){
        time_text[3]=' ';
        time_text[8]=' ';
    }

    ui->digital_clock->setText(time_text);
}

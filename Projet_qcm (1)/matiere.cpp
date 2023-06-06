#include "matiere.h"
#include "ui_matiere.h"
#include <fstream>
#include <iostream>
#include <QString>
#include <QMessageBox>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


Matiere::Matiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Matiere)
{
    ui->setupUi(this);
}

Matiere::~Matiere()
{
    delete ui;
}

void Matiere::on_pushButton_exit_clicked()
{
    close();
//    string quest_file3="matiere.txt";
//    ifstream myfile(quest_file3);
//    string buffer;
//    getline(myfile,buffer);

//    if(buffer=="")
//    {
//        QMessageBox::information(this,"DANGER DANGER!!!","Pas un seul matiere n'a été ajouté");
//    }else
//    {
//        close();
//        QMessageBox::information(this,"DANGER DANGER!!!","les matieres sont enregistrés.\n Plus aucune modification n'est autorisée !!!");
//    }
//    myfile.close();
}


void Matiere::on_pushButton_add_clicked()
{
    QString name=ui->lineEdit_q->text();
    string name_trs=name.toStdString();



    ofstream quest_file3;

    if(counter_trunc==0)
    {
        quest_file3.open("matiere.txt",ios::trunc);
    } else{ quest_file3.open("matiere.txt",ios::app);}

    if(name_trs==""){
        QMessageBox::information(this,"WARNING!!","Vous avez oubliez d'ajouter une matiere");
    }
    else{
        quest_file3<<"*"+name_trs<<endl;
        ui->lineEdit_q->setText("");
        QMessageBox::information(this,"saved","matiere enregistrer avec succes");
        ++counter_trunc;
    }
    quest_file3.close();
}


void Matiere::on_matiere_add_clicked()
{
    QString name=ui->matiere_add->text();
    string name_trs=name.toStdString();


    if(name_trs==""){
        QMessageBox::information(this,"WARNING!!","Vous avez oubliez d'ajouter une matiere");
    }
    else{
        fs::create_directory(name_trs);
        QMessageBox::information(this,"saved","matiere enregistrer avec succes");
    }

}


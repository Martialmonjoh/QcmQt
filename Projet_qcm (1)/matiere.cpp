#include "matiere.h"
#include "ui_matiere.h"
#include <fstream>
#include <iostream>
#include <QString>
#include <QMessageBox>
using namespace std;

Matiere::Matiere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Matiere)
{
    ui->setupUi(this);
}

int idMatiere = 1;

Matiere::~Matiere()
{
    delete ui;
}

void Matiere::on_pushButton_clicked()
{

    QString name= ui->EditMatiere->text();
    string matiere=name.toStdString();

    ofstream quest_file;

    if(counter_trunc==0)
    {
        quest_file.open("matiere.txt",ios::trunc);
    } else{ quest_file.open("matiere.txt",ios::app);}

    if(matiere==""){
        QMessageBox::information(this,"WARNING!!","Vous avez oubliez d'ajouter une matière");
    }
    else{
        idMatiere++;
        quest_file<<idMatiere+" "+matiere<<endl;
        ui->EditMatiere->setText("");
        QMessageBox::information(this,"saved","Subjet has been saved");
        ++counter_trunc;
    }
    quest_file.close();
}


void Matiere::on_pushButton_2_clicked()
{
    close();
}


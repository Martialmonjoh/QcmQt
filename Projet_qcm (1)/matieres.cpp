#include "matieres.h"
#include "ui_matieres.h"
#include <fstream>
#include <iostream>
#include <QString>
#include <QMessageBox>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

Matieres::Matieres(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Matieres)
{
    ui->setupUi(this);
}

Matieres::~Matieres()
{
    delete ui;
}

void Matieres::on_pushButton_clicked()
{
    close();
}


void Matieres::on_pushButton_2_clicked()
{
    QString name=ui->pushButton_2->text();
    string name_trs=name.toStdString();


    if(name_trs==""){
        QMessageBox::information(this,"WARNING!!","Vous avez oubliez d'ajouter une matiere");
    }
    else{
        fs::create_directory(name_trs);
        QMessageBox::information(this,"saved","matiere enregistrer avec succes");
    }

}


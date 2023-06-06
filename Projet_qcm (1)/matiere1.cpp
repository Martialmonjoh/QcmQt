#include "matiere1.h"
#include "ui_matiere1.h"
#include <QString>
#include <filesystem>
#include <iostream>
#include <fstream>

using namespace std;
namespace fs = std::filesystem;
Matiere1::Matiere1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Matiere1)
{
    ui->setupUi(this);
}

Matiere1::~Matiere1()
{
    delete ui;
}


void Matiere1::on_matiere_clicked()
{

    QString name=ui->matiere->text();
    string name_trs=name.toStdString();

    fs::create_directory(name_trs);
}


#include "enseignant.h"
#include "ui_enseignant.h"
#include "maketest.h"
#include "matiere.h"

Enseignant::Enseignant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Enseignant)
{
    ui->setupUi(this);
}

Enseignant::~Enseignant()
{
    delete ui;
}

void Enseignant::on_make_test_clicked()
{
    MakeTest* t= new MakeTest(this);
    t->show();
}


void Enseignant::on_exit_clicked()
{
    close();
}



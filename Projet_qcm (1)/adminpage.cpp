#include "adminpage.h"
#include "ui_adminpage.h"


AdminPage::AdminPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);
}

AdminPage::~AdminPage()
{
    delete ui;
}

void AdminPage::on_make_test_clicked()
{

    MakeTest* t= new MakeTest(this);
    t->show();
}


void AdminPage::on_add_etudiant_clicked()
{
    AjoutEtudiant* admin= new AjoutEtudiant(this);
    admin->show();
}


void AdminPage::on_exit_clicked()
{
    close();

}

void AdminPage::on_add_etudiant_2_clicked()
{
    AjoutEnseignant* admin2= new AjoutEnseignant(this);
    admin2->show();
}




void AdminPage::on_make_test_2_clicked()
{
    Matiere* a= new Matiere(this);
    a->show();
}


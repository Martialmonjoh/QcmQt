#include "ajoutenseignant.h"
#include "ui_ajoutenseignant.h"

AjoutEnseignant::AjoutEnseignant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AjoutEnseignant)
{
    ui->setupUi(this);
}

AjoutEnseignant::~AjoutEnseignant()
{
    delete ui;
}

void AjoutEnseignant::on_ajouter_clicked()
{
    QString name=ui->name_edit->text();
    string name_trs=name.toStdString();

    QString pass=ui->pass_edit->text();
    string pass_trs=pass.toStdString();

    ofstream quest_file2;

    if(counter_trunc==0)
    {
        quest_file2.open("enseignants.txt",ios::trunc);
    } else{ quest_file2.open("enseignants.txt",ios::app);}

    if(name_trs=="" || pass_trs==""){
        QMessageBox::information(this,"WARNING!!","Vous avez oubliez d'ajouter un enseignant");
    }
    else{
        quest_file2<<"*"+name_trs<<endl;
        quest_file2<<"{"+pass_trs<<endl;
        ui->name_edit->setText("");
        ui->pass_edit->setText("");
        QMessageBox::information(this,"saved","utilisateur enregistrer avec succes");
        ++counter_trunc;
    }
    quest_file2.close();
}


void AjoutEnseignant::on_exit_clicked()
{
    string question_rep="ensignants.txt";
    ifstream myfile(question_rep);
    string buffer;
    getline(myfile,buffer);

    if(buffer=="")
    {
        QMessageBox::information(this,"DANGER DANGER!!!","Pas un seul étudiant n'a été ajouté");
    }else
    {
        close();
        QMessageBox::information(this,"DANGER DANGER!!!","TOUS les étudiants sont enregistrés.\n Plus aucune modification n'est autorisée !!!");
    }
    myfile.close();
}
void AjoutEnseignant::on_pushButton_add_clicked()
{

}
void AjoutEnseignant::on_pushButton_exit_clicked()
{

}
void AjoutEnseignant::showtime_m()
{

}

void AjoutEnseignant::on_make_test_clicked()
{
    //AdminPage::on_make_test_clicked();
}


#ifndef AJOUTENSEIGNANT_H
#define AJOUTENSEIGNANT_H
#include <fstream>
#include <iostream>
#include <QString>
#include <QMessageBox>
using namespace std;
#include <QDialog>
#include "adminpage.h"

namespace Ui {
class AjoutEnseignant;
}

class AjoutEnseignant : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutEnseignant(QWidget *parent = nullptr);
    ~AjoutEnseignant();

private slots:
    void on_ajouter_clicked();


    void on_exit_clicked();
    void on_pushButton_add_clicked();
    void on_pushButton_exit_clicked();

    void showtime_m();



    void on_make_test_clicked();

private:
    Ui::AjoutEnseignant *ui;
    int counter_trunc=0;
};

#endif // AJOUTENSEIGNANT_H

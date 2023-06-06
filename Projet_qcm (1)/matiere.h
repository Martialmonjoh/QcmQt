#ifndef MATIERE_H
#define MATIERE_H

#include <QDialog>

namespace Ui {
class Matiere;
}

class Matiere : public QDialog
{
    Q_OBJECT

public:
    explicit Matiere(QWidget *parent = nullptr);
    ~Matiere();

private slots:
    void on_pushButton_exit_clicked();

    void on_matiere_add_clicked();

private:
    Ui::Matiere *ui;
    int counter_trunc=0;
};

#endif // MATIERE_H

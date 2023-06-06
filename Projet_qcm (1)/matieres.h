#ifndef MATIERES_H
#define MATIERES_H

#include <QDialog>

namespace Ui {
class Matieres;
}

class Matieres : public QDialog
{
    Q_OBJECT

public:
    explicit Matieres(QWidget *parent = nullptr);
    ~Matieres();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Matieres *ui;
};

#endif // MATIERES_H

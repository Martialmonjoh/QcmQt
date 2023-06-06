#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include <QDialog>

namespace Ui {
class Enseignant;
}

class Enseignant : public QDialog
{
    Q_OBJECT

public:
    explicit Enseignant(QWidget *parent = nullptr);
    ~Enseignant();

private slots:
    void on_make_test_clicked();

    void on_exit_clicked();

private:
    Ui::Enseignant *ui;
};

#endif // ENSEIGNANT_H

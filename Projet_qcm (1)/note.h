#ifndef NOTE_H
#define NOTE_H

#include <QDialog>
#include <string>

using namespace std;

namespace Ui {
class NOTE;
}

class NOTE : public QDialog
{
    Q_OBJECT

public:
    explicit NOTE(QWidget *parent = nullptr);
    string getNote();
    ~NOTE();

private slots:
    void on_EXIT_clicked();
    string getNom();

private:
    Ui::NOTE *ui;

};

#endif // NOTE_H

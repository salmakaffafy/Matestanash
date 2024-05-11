#ifndef RESTURANTS_H
#define RESTURANTS_H

#include <QDialog>

namespace Ui {
class resturants;
}

class resturants : public QDialog
{
    Q_OBJECT

public:
    explicit resturants(QWidget *parent = nullptr);
    ~resturants();
    void try1();
    int count=0;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();



    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::resturants *ui;
    //QString line[100];
};

#endif // RESTURANTS_H

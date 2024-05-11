#ifndef MATESTNASHELITERIDE_H
#define MATESTNASHELITERIDE_H

#include <QDialog>

namespace Ui {
class MatestnashEliteride;
}

class MatestnashEliteride : public QDialog
{
    Q_OBJECT

public:
    explicit MatestnashEliteride(QWidget *parent = nullptr);
    ~MatestnashEliteride();

private slots:
    void on_pushButton_Volvo_clicked();

    void on_pushButton_Audi_clicked();

    void on_pushButton_Peugeot_clicked();

    void on_pushButton_VW_clicked();

    void on_pushButton_Jeep_clicked();

    void on_pushButton_Mercedes_clicked();

    void on_pushButton_BMW_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

private:
    Ui::MatestnashEliteride *ui;
};

#endif // MATESTNASHELITERIDE_H

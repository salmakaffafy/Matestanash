#ifndef MATESTNASHZRIDE_H
#define MATESTNASHZRIDE_H

#include <QDialog>

namespace Ui {
class Matestnashzride;
}

class Matestnashzride : public QDialog
{
    Q_OBJECT

public:
    explicit Matestnashzride(QWidget *parent = nullptr);
    ~Matestnashzride();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Matestnashzride *ui;
};

#endif // MATESTNASHZRIDE_H

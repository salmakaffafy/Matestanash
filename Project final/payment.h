#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>
#include "location.h"
namespace Ui {
class Payment;
}

class Payment : public QDialog
{
    Q_OBJECT

public:
    explicit Payment(QWidget *parent = nullptr);
    ~Payment();


private slots:



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Payment *ui;
};

#endif // PAYMENT_H

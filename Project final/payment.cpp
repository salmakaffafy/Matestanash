#include "payment.h"
#include "ui_payment.h"
#include <fstream>
#include <sstream>
#include <cassert>
#include <QMessageBox>
#include "location.h"
#include "bankcard.h"
Payment::Payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);
}

Payment::~Payment()
{
    delete ui;
}




void Payment::on_pushButton_clicked()
{
    QMessageBox::information(this,"","Cash confirmed");
}

void Payment::on_pushButton_2_clicked()
{
    bankcard b;
       b.setModal(true);
       b.exec();
}

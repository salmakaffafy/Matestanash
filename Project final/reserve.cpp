#include "reserve.h"
#include "ui_reserve.h"
#include <QMessageBox>
reserve::reserve(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reserve)
{
    ui->setupUi(this);
}

reserve::~reserve()
{
    delete ui;
}

void reserve::on_pushButton_clicked()
{
    QString dateofride= ui->lineEdit->text();
         ui->listWidget->addItem(dateofride);
        QString timeofride=ui->lineEdit_2->text();
        ui->listWidget->addItem(timeofride);
        QString timeofdropoff= ui->lineEdit_3->text();
        ui->listWidget->addItem(timeofdropoff);
        QString locations= ui->lineEdit_4->text();
        ui->listWidget->addItem(locations);
        QString drivername= ui->lineEdit_5->text();
        ui->listWidget->addItem(drivername);

        QMessageBox::information(this,"email","An email was sent for confirmation");

}

void reserve::on_pushButton_2_clicked()
{
    QString dateofride= ui->lineEdit->text();
        QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete it;
        QString timeofride=ui->lineEdit_2->text();
        QListWidgetItem *one = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete one;
        QString timeofdropoff= ui->lineEdit_3->text();
        QListWidgetItem *two = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete two;
        QString locations= ui->lineEdit_4->text();
        QListWidgetItem *three = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete three;
        QString drivername= ui->lineEdit_5->text();
        QListWidgetItem *four = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete four;

        QMessageBox::information(this,"cancelation","An email was sent for cancellation");
}

void reserve::on_pushButton_3_clicked()
{
    QString dateofride= ui->lineEdit->text();
        ui->listWidget_2->addItem(dateofride);
       QString timeofride=ui->lineEdit_2->text();
       ui->listWidget_2->addItem(timeofride);
       QString timeofdropoff= ui->lineEdit_3->text();
       ui->listWidget_2->addItem(timeofdropoff);
       QString locations= ui->lineEdit_4->text();
       ui->listWidget_2->addItem(locations);
       QString drivername= ui->lineEdit_5->text();
       ui->listWidget_2->addItem(drivername);

}

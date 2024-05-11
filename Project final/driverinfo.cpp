#include "driverinfo.h"
#include "ui_driverinfo.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <vector>
driverInfo::driverInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::driverInfo)
{
    ui->setupUi(this);
}

driverInfo::~driverInfo()
{
    delete ui;
}

void driverInfo::on_pushButton_clicked()
{
    QFile file("//Users//mariammaged//Desktop//Driver.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void driverInfo::on_pushButton_2_clicked()
{
    QFile file("//Users//mariammaged//Desktop//Driver2.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());

}

void driverInfo::on_pushButton_3_clicked()
{
    QFile file("//Users//mariammaged//Desktop//Driver3.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void driverInfo::on_pushButton_4_clicked()
{
    QString name= ui->lineEdit_name->text();
    QString cartype= ui->lineEdit_cartype->text();
    QString carnumber= ui->lineEdit_carnumber->text();
    QString number= ui->lineEdit_number->text();
    std::vector <QString> addinfo;
    addinfo.push_back(name);
    addinfo.push_back(cartype);
    addinfo.push_back(carnumber);
    addinfo.push_back(number);
    QMessageBox::information(this, "Info","Recieved will check your cv");

       qDebug() << addinfo << "";
       qDebug()<< "\n" << endl;

}

void driverInfo::on_pushButton_5_clicked()
{
    QString driver1= ui->lineEdit->text();
    QString driver2= ui->lineEdit_2->text();
    QString driver3= ui->lineEdit_3->text();
    ui->listWidget->addItem(driver1);
    std::vector <QString> addinfo;
    addinfo.push_back(driver1);
    ui->listWidget_2->addItem(driver2);
    addinfo.push_back(driver2);
    ui->listWidget_3->addItem(driver3);
    addinfo.push_back(driver3);

}

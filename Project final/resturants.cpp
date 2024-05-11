#include "resturants.h"
#include "ui_resturants.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include "reserve.h"
resturants::resturants(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resturants)
{
    ui->setupUi(this);
}

resturants::~resturants()
{
    delete ui;
}

void resturants::on_pushButton_3_clicked()
{
    QFile file("//Users//mariammaged//Desktop//Macdonalds.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void resturants::on_pushButton_2_clicked()
{
    QFile file("//Users//mariammaged//Desktop//KFC.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}


void resturants::on_pushButton_4_clicked()
{
    QFile file("//Users//mariammaged//Desktop//Abo shakra.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void resturants::on_pushButton_5_clicked()
{
    QFile file("//Users//mariammaged//Desktop//cinabbon.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}
void resturants::try1()
{



}




void resturants::on_pushButton_clicked()
{
   QFile file("//Users//mariammaged//Desktop//KFC.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
 QString line[100];
        QTextStream in(&file);
        while (!in.atEnd()) {
            for(int i=0; i<14;i++)
           { line[i]= in.readLine();}

        }
        QString addcart= ui->lineEdit->text();
        QString save;
        for(int i=0;i<=13;i++)
           {
               if(addcart==line[i])
                   save=line[i+1];
                ui->lineEdit_2->setText(save);
           }



}

void resturants::on_pushButton_6_clicked()
{
    QFile file2("//Users//mariammaged//Desktop//Macdonalds.txt");
        if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
 QString line2[100];
        QTextStream in2(&file2);
        while (!in2.atEnd()) {
            for(int i=0; i<14;i++)
           { line2[i]= in2.readLine();}

        }
        QString addcart2= ui->lineEdit->text();
        QString save2;
        for(int i=0;i<=13;i++)
           {
               if(addcart2==line2[i])
                   save2=line2[i+1];
                ui->lineEdit_2->setText(save2);
           }

}

void resturants::on_pushButton_7_clicked()
{
    QFile file3("//Users//mariammaged//Desktop//Abo shakra.txt");
        if (!file3.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
 QString line3[100];
        QTextStream in2(&file3);
        while (!in2.atEnd()) {
            for(int i=0; i<14;i++)
           { line3[i]= in2.readLine();}

        }
        QString addcart2= ui->lineEdit->text();
        QString save2;
        for(int i=0;i<=13;i++)
           {
               if(addcart2==line3[i])
                   save2=line3[i+1];
                ui->lineEdit_2->setText(save2);
           }
}

void resturants::on_pushButton_8_clicked()
{
    QFile file3("//Users//mariammaged//Desktop//Cinabbon.txt");
        if (!file3.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
 QString line3[100];
        QTextStream in2(&file3);
        while (!in2.atEnd()) {
            for(int i=0; i<14;i++)
           { line3[i]= in2.readLine();}

        }
        QString addcart2= ui->lineEdit->text();
        QString save2;
        for(int i=0;i<=13;i++)
           {
               if(addcart2==line3[i])
                   save2=line3[i+1];
                ui->lineEdit_2->setText(save2);
           }
}

void resturants::on_pushButton_9_clicked()
{
 reserve r;
 r.setModal(true);
 r.exec();
 ++count;
 qDebug()<<count;
 QString h = QString::number(count);
  ui->lineEdit_3->setText(h);
}

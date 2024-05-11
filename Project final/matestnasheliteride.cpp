#include "matestnasheliteride.h"
#include "ui_matestnasheliteride.h"
#include "payment.h"
#include "reserve.h"
MatestnashEliteride::MatestnashEliteride(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MatestnashEliteride)
{
    ui->setupUi(this);
}

MatestnashEliteride::~MatestnashEliteride()
{
    delete ui;
}

void MatestnashEliteride::on_pushButton_Volvo_clicked()
{
     ui->lineEdit->setText("Color:Silver. Rating:4.9. Plate Number:JRA1378 ");
}

void MatestnashEliteride::on_pushButton_Audi_clicked()
{
    ui->lineEdit->setText("Color:Red. Rating:4.8. Plate Number:LJP1684 ");
}

void MatestnashEliteride::on_pushButton_Peugeot_clicked()
{
    ui->lineEdit->setText("Color:Black. Rating:4.7. Plate Number:ADM2491 ");
}

void MatestnashEliteride::on_pushButton_VW_clicked()
{
    ui->lineEdit->setText("Color:Blue. Rating:4.7. Plate Number:TPJ2993 ");
}

void MatestnashEliteride::on_pushButton_Jeep_clicked()
{
    ui->lineEdit->setText("Color:White. Rating:4.6. Plate Number:SGC1293 ");
}

void MatestnashEliteride::on_pushButton_Mercedes_clicked()
{
    ui->lineEdit->setText("Color:Silver. Rating:4.9. Plate Number:ZJM2786 ");
}

void MatestnashEliteride::on_pushButton_BMW_clicked()
{
     ui->lineEdit->setText("Color:Black. Rating:4.8. Plate Number:LWT2378 ");
}

void MatestnashEliteride::on_pushButton_8_clicked()
{
    Payment p;
       p.setModal(true);
       p.exec();
}

void MatestnashEliteride::on_pushButton_clicked()
{
    reserve r;
    r.setModal(true);
    r.exec();
}

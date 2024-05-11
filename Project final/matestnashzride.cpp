#include "matestnashzride.h"
#include "ui_matestnashzride.h"
#include "payment.h"
#include "reserve.h"
Matestnashzride::Matestnashzride(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Matestnashzride)
{
    ui->setupUi(this);
}

Matestnashzride::~Matestnashzride()
{
    delete ui;
}


void Matestnashzride::on_pushButton_clicked()
{
    ui->lineEdit->setText("Color:Red. Rating:4.9. Plate Number:HES1294 ");
}

void Matestnashzride::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("Color:Silver. Rating:4.8. Plate Number:CRH1381");
}

void Matestnashzride::on_pushButton_3_clicked()
{
    ui->lineEdit->setText("Color:Brown. Rating:4.5. Plate Number:TWH9281 ");
}

void Matestnashzride::on_pushButton_4_clicked()
{
    ui->lineEdit->setText("Color:Black. Rating:4.7. Plate Number:BTB2081 ");
}

void Matestnashzride::on_pushButton_5_clicked()
{
    ui->lineEdit->setText("Color:Grey. Rating:4.8. Plate Number:SST1382 ");
}

void Matestnashzride::on_pushButton_6_clicked()
{
    ui->lineEdit->setText("Color:Black. Rating:4.6. Plate Number:HWC5583 ");
}

void Matestnashzride::on_pushButton_7_clicked()
{
    ui->lineEdit->setText("Color:Blue. Rating:4.6. Plate Number:NJH1393 ");
}


void Matestnashzride::on_pushButton_8_clicked()
{
    Payment p;
       p.setModal(true);
       p.exec();

}

void Matestnashzride::on_pushButton_9_clicked()
{
    reserve r;
    r.setModal(true);
    r.exec();
}

#include "matestnashbusride.h"
#include "ui_matestnashbusride.h"
#include "payment.h"
#include "reserve.h"
MatestnashBusride::MatestnashBusride(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MatestnashBusride)
{
    ui->setupUi(this);
}

MatestnashBusride::~MatestnashBusride()
{
    delete ui;
}

void MatestnashBusride::on_pushButton_AUCtZ_clicked()
{
     ui->lineEdit->setText("Bus Name:HC5 Trip Time:11:10am Plate Number:GDC1244 ");
}

void MatestnashBusride::on_pushButton_ZtAUC_clicked()
{
     ui->lineEdit->setText("Bus Name:HC5 Trip Time:8:00pm Plate Number:GDC1244 ");
}

void MatestnashBusride::on_pushButton_AUCtH_clicked()
{
     ui->lineEdit->setText("Bus Name:YS9 Trip Time:10:00am Plate Number:SRH3080 ");
}

void MatestnashBusride::on_pushButton_HtAUC_clicked()
{
    ui->lineEdit->setText("Bus Name:YS9 Trip Time:9:25pm Plate Number:SRH3080 ");
}

void MatestnashBusride::on_pushButton_HtP0_clicked()
{
    ui->lineEdit->setText("Bus Name:KK7 Trip Time:10:50am Plate Number:BHS7489 ");
}

void MatestnashBusride::on_pushButton_P90tH_clicked()
{
    ui->lineEdit->setText("Bus Name:KK7 Trip Time:1:05pm Plate Number:BHS7489 ");
}

void MatestnashBusride::on_pushButton_RtS_clicked()
{
     ui->lineEdit->setText("Bus Name:MT8 Trip Time:3:15pm Plate Number:YST8352 ");
}

void MatestnashBusride::on_pushButton_StR_clicked()
{
     ui->lineEdit->setText("Bus Name:MT8 Trip Time:5:05pm Plate Number:YST8352 ");
}

void MatestnashBusride::on_pushButton_PTP_clicked()
{
    Payment p;
       p.setModal(true);
       p.exec();
}

void MatestnashBusride::on_pushButton_clicked()
{
    reserve r;
    r.setModal(true);
    r.exec();
}

#include "bankcard.h"
#include "ui_bankcard.h"
#include <vector>
#include <qdebug.h>
#include <QMessageBox>
bankcard::bankcard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bankcard)
{
    ui->setupUi(this);
}

bankcard::~bankcard()
{
    delete ui;
}

void bankcard::on_pushButton_4_clicked()
{

       Cardholder_name= ui->lineEdit->text();
       Card_ID= ui->lineEdit_2->text();
       cvv= ui->lineEdit_3->text();
       card_balance=ui->lineEdit_4->text();

       AddCard.push_back(Cardholder_name);
       AddCard.push_back(card_type);
       AddCard.push_back(Card_ID);
       AddCard.push_back(cvv);
       AddCard.push_back(card_balance);

       qDebug()<< AddCard << "";
}

void bankcard::on_pushButton_2_clicked()
{

       AddCard.push_back("MasterCard");
}

void bankcard::on_pushButton_clicked()
{

       AddCard.push_back("Visa");
}
bool bankcard:: Check_sufficient_funds(QString card_balance, QString Card_ID, QString Cardholder_name, QString cvv)
    {
        bool flag=false;
        if (card_balance == 2000 || card_balance > 20)
        {
            flag=true;
           
        }
        else
            flag=false;
        return flag;
    }

void bankcard::on_pushButton_3_clicked()
{
    Cardholder_name= ui->lineEdit->text();
    Card_ID= ui->lineEdit_2->text();
    cvv= ui->lineEdit_3->text();
    card_balance=ui->lineEdit_4->text();
    if (Check_sufficient_funds(card_balance,Card_ID,Cardholder_name,cvv)==true)
        QMessageBox:: information(this,"","confirmed");
    else {
         QMessageBox:: information(this,"","No enough money to pay");}

}

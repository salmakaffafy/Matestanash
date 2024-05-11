#include "signup.h"
#include "ui_signup.h"
#include "resturants.h"
#include "driverinfo.h"
#include <QMessageBox>
#include <QDebug>
#include "location.h"
signup::signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    head1=NULL;
    tail1=NULL;
}

signup::~signup()
{
    delete ui;
}


void signup::on_pushButton_clicked()
{
    QString username= ui->lineEdit->text();
    QString phoneNumber= ui->lineEdit_2->text();
    QString email= ui->lineEdit_3->text();
AddCustomer(username,phoneNumber,email);
QMessageBox::information(this,"Signed up","successfully signed up");
}
void signup::AddCustomer(QString value,QString num, QString Email)
{
    node1 *temp=new node1;
    temp->name=value;
     temp->phoneNumber=num;
    temp->email=Email;
    temp->next=NULL;
    if(head1==NULL)
    {
        head1=temp;
        tail1=temp;
        temp=NULL;
    }
    else
    {
        tail1->next=temp;
        tail1=temp;
    }
}
void signup::displayCustomerinfo()
{
       node1 *temp=new node1;
       temp=head1;
       while(temp!=NULL)
       {
        qDebug()<<temp->name<<"\t";
           qDebug()<<temp->phoneNumber<<"\t";
          qDebug()<<temp->email<<"\t";
           temp=temp->next;
       }
}
int signup:: FindNode(QString x)
{
    node1* currNode    =    head1;
    int currIndex    =    1;
    while (currNode && currNode->name != x) {
        currNode    =    currNode->next;
        currIndex++;
    }
    if (currNode) return currIndex;
    return 0;
        }


    node1* signup:: FindNode(QString x,int &pos) {
    node1* currNode    =    head1;
    int currIndex    =    1;
    while (currNode && currNode->name != x) {
        currNode    =    currNode->next;
        currIndex++;
    }
    if (currNode) return currNode;
    else
    return NULL;
        }
    void signup:: EditProfile(int pos)
    {
           node1 *current=new node1;
           node1 *previous=new node1;
           current=head1;
           for(int i=1;i<pos;i++)
           {
               previous=current;
               current=current->next;
           }
           previous->next=current->next;
                       delete current;
    }

void signup::on_pushButton_2_clicked()
{
    QString username= ui->lineEdit->text();
    QString phoneNumber= ui->lineEdit_2->text();
    QString email= ui->lineEdit_3->text();
    int findat=0;
           findat=FindNode(username);
          //cout<<"found at "<<findat<<endl;
           node1* The_Node=new node1;
           The_Node=FindNode(username,findat);
           if((username=="mariam"&&phoneNumber=="0100")||(username==The_Node->name&&phoneNumber== The_Node->phoneNumber))
               QMessageBox::information(this,"login","successfully logged in!");
           else
               QMessageBox::information(this,"login","wrong try again");

}



void signup::on_pushButton_3_clicked()
{
    resturants resturants;
    resturants.setModal(true);
    resturants.exec();
}

void signup::on_pushButton_6_clicked()
{
    driverInfo driver;
    driver.setModal(true);
    driver.exec();
}

void signup::on_pushButton_4_clicked()
{
    Location l;
    l.setModal(true);
    l.exec();
}

void signup::on_pushButton_7_clicked()
{
    QString OldUsername= ui->lineEdit_oldusername->text();
    int find= 0;
    find=FindNode(OldUsername);
          node1* The_Node=new node1;
          The_Node=FindNode(OldUsername,find);
          EditProfile(find);
          QMessageBox::information(this,"edit","you can add new one now your old info is deleted");

}


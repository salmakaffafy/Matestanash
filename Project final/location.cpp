#include "location.h"
#include "ui_location.h"
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <sstream>
#include <QFile>
#include <QListWidget>
#include "matestnashzride.h"
#include "matestnasheliteride.h"
#include "matestnashbusride.h"
#include <fstream>
#include <cassert>
Location::Location(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Location)
{
    ui->setupUi(this);

}

Location::~Location()
{
    delete ui;
}


void Location::on_pushButton_clicked()
{
    ui->lineEdit->setText(ui->pushButton->text());
}

void Location::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(ui->pushButton_2->text());
}

void Location::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(ui->pushButton_3->text());
}

void Location::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(ui->pushButton_4->text());
}

void Location::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(ui->pushButton_5->text());
}

void Location::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(ui->pushButton_6->text());
}

void Location::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(ui->pushButton_7->text());
}

void Location::on_pushButton_8_clicked()
{
    ui->lineEdit_2->setText(ui->pushButton_8->text());
}

void Location::on_pushButton_9_clicked()
{
    ui->lineEdit_2->setText(ui->pushButton_9->text());
}

void Location::on_pushButton_10_clicked()
{
    ui->lineEdit_2->setText(ui->pushButton_10->text());
}

void Location::on_pushButton_11_clicked()
{
    ui->lineEdit_2->setText(ui->pushButton_11->text());
}

void Location::on_pushButton_12_clicked()
{
    ui->lineEdit_2->setText(ui->pushButton_12->text());
}

void Location::on_pushButton_13_clicked()
{
    ui->lineEdit_2->setText(ui->pushButton_13->text());
}

void Location::on_pushButton_14_clicked()
{
    ui->lineEdit_2->setText(ui->pushButton_14->text());
}
int Location::minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;

       for (int v = 0; v < 9; v++)
           if (sptSet[v] == false && dist[v] <= min)
               min = dist[v], min_index = v;

       return min_index;
}
void Location ::printSolution(int dist[],QString location, QString location1)
{
   // printf("Vertex \t\t Distance from Source\n");
    //for (int i = 0; i < V; i++)
    //printf("%d \t\t %d\n", i, dist[i]);



    int home=0, auc=4, point90=5, zamalek=7, helioplis=3, rehab=6, shorouk=9;
    if(location=="home"&&location1=="rehab")
    { for(int i=home;i<rehab;i++)
        sum+=dist[i];}
    if(location=="home"&&location1=="auc")
    for(int i=home;i<auc;i++)
    {sum+=dist[i];}
    if(location=="home"&&location1=="point90")
    for(int i=home;i<point90;i++)
    {sum+=dist[i];}
    if(location=="home"&&location1=="helioplis")
    for(int i=home;i<helioplis;i++)
    {sum+=dist[i];}
    if(location=="home"&&location1=="zamalek")
    for(int i=home;i<zamalek;i++)
    {sum+=dist[i];}
    if(location=="home"&&location1=="shorouk")
    for(int i=home;i<shorouk;i++)
    {sum+=dist[i];}
    if(location=="auc"&&location1=="point90")
    for(int i=auc;i<point90;i++)
    {sum+=dist[i];}
    if(location=="shorouk"&&location1=="point90")
       for(int i=shorouk;i<point90;i++)
       {sum+=dist[i];}
    if(location=="helioplis"&&location1=="auc")
       for(int i=helioplis;i<auc;i++)
       {sum+=dist[i];}
    if(location=="zamalek"&&location1=="auc")
          for(int i=zamalek;i<auc;i++)
          {sum+=dist[i];}
    if(location=="home"&&location1=="shorouk")
        for(int i=home;i<shorouk;i++)
            {sum+=dist[i];}
    //int price;
    //price=sum*5;
    //qDebug()<<"price:"<<price;

}
void Location:: dijkstra(int graph[9][9], int src, QString a, QString b)
{
    int dist[9];

    bool sptSet[9];

    for (int i = 0; i < 9; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;


    for (int count = 0; count < 9 - 1; count++) {

        int u = minDistance(dist, sptSet);


        sptSet[u] = true;


        for (int v = 0; v < 9; v++)


            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printSolution(dist,a,b);
}



void Location::on_pushButton_15_clicked()
{

     b= ui->lineEdit_2->text();
    int graph[9][9] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                           { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                           { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                           { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                           { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                           { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                           { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                           { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                           { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
        a= ui->lineEdit->text();
       dijkstra(graph, 0, a,b);
       QString s = QString::number(sum);

        ui->lineEdit_3->setText(s);
}

void Location::on_pushButton_16_clicked()
{
    QFile file("//Users//mariammaged/Desktop//MatestanashZ.txt");
            if(!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0,"info",file.errorString());

            QTextStream in(&file);
            ui->textBrowser->setText(in.readAll());
    Matestnashzride z;
    z.setModal(true);
    z.exec();
    ++count;
    QString s = QString::number(count);

     ui->lineEdit_7->setText(s);
}

void Location::on_pushButton_17_clicked()
{
    QFile file("//Users//mariammaged//Desktop//MatestanashElite.txt");
            if(!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0,"info",file.errorString());

            QTextStream in(&file);
            ui->textBrowser->setText(in.readAll());
    MatestnashEliteride e;
    e.setModal(true);
    e.exec();
    ++count;
    QString s = QString::number(count);

     ui->lineEdit_7->setText(s);
}

void Location::on_pushButton_18_clicked()
{
    QFile file("//Users//mariammaged//Desktop//MatestanashBus.txt");
            if(!file.open(QIODevice::ReadOnly))
                QMessageBox::information(0,"info",file.errorString());

            QTextStream in(&file);
            ui->textBrowser->setText(in.readAll());
    MatestnashBusride b;
    b.setModal(true);
    b.exec();
    ++count;
    QString s = QString::number(count);

     ui->lineEdit_7->setText(s);
}


float Location::CalculatePrice_Z(int sum)
{
    ride_price= sum*0.75;
    return ride_price;
}
float Location::CalculatePrice_Elite(int sum)
{
    ride_price=sum*1.5;
    return ride_price;
}
float Location::CalculatePrice_Bus(int sum)
{
    ride_price=sum*0.25;
    return ride_price;
}
 bool Location:: Check_Validity(QString promocode)
     {
         bool flag=false;
         for ( int i=0; i<7; i++)
         {
             if (promocode == arr_ofcodes[i])
             {
                 flag=true;
                 //cout<<"Promocode is valid";
             }
         }
         return flag;
     }
     QString Enter_code(QString code)
     {
         //cout<<"Please enter the promocode./n";
         //cin>> code;
         return code;
     }
     float Location::Calculate_Discounted_Price(int discount_percentage)
     {

         float discounted_price=0;
         if (discount_percentage == 10)
         {
             discounted_price= ride_price*0.9;
         }
         else if (discount_percentage == 15)
         {
             discounted_price= ride_price*0.85;
         }
         else if (discount_percentage == 20)
         {
             discounted_price= ride_price*0.8;
         }
         else if (discount_percentage == 25)
         {
             discounted_price= ride_price*0.75;
         }
         else if (discount_percentage == 30)
         {
             discounted_price= ride_price*0.7;
         }
         else if (discount_percentage == 35)
         {
             discounted_price= ride_price*0.65;
         }
         else if (discount_percentage == 40)
         {
             discounted_price= ride_price*0.60;
         }

         ride_price=discounted_price;
         return ride_price;
     }



void Location::on_pushButton_19_clicked()
{
    x=CalculatePrice_Elite(sum);
    QString s = QString::number(x);
    ui->lineEdit_5->setText(s);

}

void Location::on_pushButton_20_clicked()
{
    QString discount= ui->lineEdit_4->text();
        QString str= discount;
        int n=str.toInt();
        Calculate_Discounted_Price(n);
        QString validity= ui->lineEdit_6->text();
        Check_Validity(validity);
        if(Check_Validity(validity))
            QMessageBox:: information(this,"Validity","This Promocode is valid");
        else QMessageBox:: information(this,"Validity","This Promocode is invalid");
        q=Calculate_Discounted_Price(n);
        QString h = QString::number(q);
        ui->lineEdit_5->setText(h);
}
void Location::Calculaterewardpoints(int count1)
{

   points=count1*15;
   //wallet_balance= points*7;
}
bool Location:: Check_Balance()
    {
        bool flag=false;
        if (points == ride_price || points > ride_price)
        {
            flag=true;
           
        }
        else
            flag=false;
             QMessageBox::information(this,"","Payment option is invalid!");
            return flag;
    }


void Location ::on_pushButton_21_clicked()
{
    int reward= q-points;
    QString h = QString::number(reward);
    ui->lineEdit_5->setText(h);

}

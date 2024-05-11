#ifndef LOCATION_H
#define LOCATION_H

#include <QDialog>

namespace Ui {
class Location;
}

class Location : public QDialog
{
    Q_OBJECT

public:
    explicit Location(QWidget *parent = nullptr);
    ~Location();
    int minDistance(int dist[], bool sptSet[]);
    void printSolution(int dist[],QString location, QString location1);
    void dijkstra(int graph[9][9], int src,QString a, QString b);
   int sum=0;
   QString a;
    QString b;
    float ride_price;
        float CalculatePrice_Z(int sum);
        float CalculatePrice_Elite(int sum);
        float CalculatePrice_Bus(int sum);
        void ChoosePaymentMethod();
        QString arr_ofcodes[7]={"BBD25", "HSE10", "SMY15", "CRE20","RDJ40", "AMS35", "HCC30"};
        bool Check_Validity(QString promocode);
        QString Enter_code(QString code);
        float Calculate_Discounted_Price(int discount_percentage);
        //Location L;
        int x=0;
        int promo=0;
        int count=0;
        void Calculaterewardpoints(int count1);
        int points;
        int q=0;
        int wallet_balance;
        bool Check_Balance();


    protected:
       QString Payment_type;
       QString promocode;
       double Percentage_Discount;


private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_21_clicked();

private:
    Ui::Location *ui;

};

#endif // LOCATION_H

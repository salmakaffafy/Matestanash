#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class signup; }
QT_END_NAMESPACE
struct node1
{
    QString name, phoneNumber, email;

    node1 *next;
};
class signup : public QMainWindow
{
    Q_OBJECT

public:
    signup(QWidget *parent = nullptr);
    ~signup();
    void AddCustomer(QString value,QString num, QString Email);
       void displayCustomerinfo();
       int FindNode(QString x);
       node1* FindNode(QString x,int &pos);
       void EditProfile(int pos);
       void check();
       void deleteinfo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::signup *ui;
    node1 *head1, *tail1;

};
#endif // SIGNUP_H

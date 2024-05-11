#ifndef BANKCARD_H
#define BANKCARD_H

#include <QDialog>

namespace Ui {
class bankcard;
}

class bankcard : public QDialog
{
    Q_OBJECT

public:
    explicit bankcard(QWidget *parent = nullptr);
    ~bankcard();
    QString card_balance;
        QString Card_ID;
        QString Cardholder_name;
        QString cvv;
        QString card_type;
        bool  Check_sufficient_funds(QString card_balance, QString Card_ID, QString Cardholder_name, QString cvv);
        std::vector <QString> AddCard;

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::bankcard *ui;
};

#endif // BANKCARD_H

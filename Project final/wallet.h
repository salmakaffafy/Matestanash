#ifndef WALLET_H
#define WALLET_H

#include <QDialog>

namespace Ui {
class wallet;
}

class wallet : public QDialog
{
    Q_OBJECT

public:
    explicit wallet(QWidget *parent = nullptr);
    ~wallet();

private:
    Ui::wallet *ui;
};

#endif // WALLET_H

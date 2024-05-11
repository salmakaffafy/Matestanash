#include "wallet.h"
#include "ui_wallet.h"

wallet::wallet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wallet)
{
    ui->setupUi(this);
}

wallet::~wallet()
{
    delete ui;
}

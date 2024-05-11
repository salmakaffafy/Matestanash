#ifndef DRIVERINFO_H
#define DRIVERINFO_H

#include <QDialog>

namespace Ui {
class driverInfo;
}

class driverInfo : public QDialog
{
    Q_OBJECT

public:
    explicit driverInfo(QWidget *parent = nullptr);
    ~driverInfo();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::driverInfo *ui;
};

#endif // DRIVERINFO_H

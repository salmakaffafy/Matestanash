#ifndef RESERVE_H
#define RESERVE_H

#include <QDialog>

namespace Ui {
class reserve;
}

class reserve : public QDialog
{
    Q_OBJECT

public:
    explicit reserve(QWidget *parent = nullptr);
    ~reserve();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::reserve *ui;
};

#endif // RESERVE_H

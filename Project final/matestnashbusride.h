#ifndef MATESTNASHBUSRIDE_H
#define MATESTNASHBUSRIDE_H

#include <QDialog>

namespace Ui {
class MatestnashBusride;
}

class MatestnashBusride : public QDialog
{
    Q_OBJECT

public:
    explicit MatestnashBusride(QWidget *parent = nullptr);
    ~MatestnashBusride();

private slots:
    void on_pushButton_AUCtZ_clicked();

    void on_pushButton_ZtAUC_clicked();

    void on_pushButton_AUCtH_clicked();

    void on_pushButton_HtAUC_clicked();

    void on_pushButton_HtP0_clicked();

    void on_pushButton_P90tH_clicked();

    void on_pushButton_RtS_clicked();

    void on_pushButton_StR_clicked();

    void on_pushButton_PTP_clicked();

    void on_pushButton_clicked();

private:
    Ui::MatestnashBusride *ui;
};

#endif // MATESTNASHBUSRIDE_H

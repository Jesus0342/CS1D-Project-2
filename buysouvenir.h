#ifndef BUYSOUVENIR_H
#define BUYSOUVENIR_H

#include <QMainWindow>

namespace Ui {
class buySouvenir;
}

class buySouvenir : public QMainWindow
{
    Q_OBJECT

public:
    explicit buySouvenir(QWidget *parent = 0);
    void setData(QString startStadium, QList<QString> stadiumsList);
    void populateDropdown();
    ~buySouvenir();

private slots:

    void on_comboBox_stadiumName_currentIndexChanged(const QString &arg1);
    void on_spinBox_qty_input_valueChanged(int arg1);
    void on_comboBox_souvenir_currentIndexChanged(const QString &arg1);
    void on_pushButton_addToCart_clicked();

    void on_pushButton_confirmPurchase_clicked();

    void on_pushButton_resetCart_clicked();
    void setReceipt();

    void on_pushButton_clicked();

private:
    Ui::buySouvenir *ui;
    QList<QString> stadiums;
    QString startingStadium;
    double cartTotal;
    int    totalQty;
};

#endif // BUYSOUVENIR_H

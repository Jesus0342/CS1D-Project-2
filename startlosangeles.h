#ifndef STARTLOSANGELES_H
#define STARTLOSANGELES_H

#include <QMainWindow>

namespace Ui {
class startlosangeles;
}

class startlosangeles : public QMainWindow
{
    Q_OBJECT

public:
    explicit startlosangeles(QWidget *parent = 0);
    ~startlosangeles();
    void populateCombobox();

private slots:
    void on_pushButton_visit_clicked();

    void on_pushButton_buySouv_clicked();

private:
    Ui::startlosangeles *ui;
    int count;
    QList<QString> teamNames;
};

#endif // STARTLOSANGELES_H

#ifndef CUSTOMTOUR_H
#define CUSTOMTOUR_H

#include <QMainWindow>
#include "graph.h"

namespace Ui {
class CustomTour;
}

class CustomTour : public QMainWindow
{
    Q_OBJECT

public:
    explicit CustomTour(QWidget *parent = 0);
    ~CustomTour();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_reset_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_calculateTrip_clicked();

private:
    Ui::CustomTour *ui;

    int currentRow;
    int tripType; // 0 = selected order
                  // 1 = shortest order

    QVector<int> selectedStadiums;
    QList<QString> stadiumList;

    Graph g;
};

#endif // CUSTOMTOUR_H

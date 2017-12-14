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

    void on_pushButton_souvenirs_clicked();
    void convertToTeamNames();

    void on_pushButton_addAll_clicked();

private:
    Ui::CustomTour *ui;

    /**
     * @brief Calculates shortest path, fills in table, and returns total distance.
     * @return Total distance travelled throughout the path.
     */
    int calcEfficientPath();

    /**
     * @brief Calculates path in order inputted.
     * @return Total distance travelled throughout the path.
     */

    int calcOrderedPath();

    QVector<int> selectedStadiums;
    QList<QString> stadiumList;

    // if the path is not calculated, cannot buy souvenirs
    bool pathCalculated;

    Graph g;

    QList<QString> stadiums;
    QString startingPt;

    QList<QString> teamNames;
};

#endif // CUSTOMTOUR_H

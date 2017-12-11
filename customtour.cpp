#include "customtour.h"
#include "graph.h"
#include "ui_customtour.h"
#include <QDebug>

CustomTour::CustomTour(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CustomTour)
{
    ui->setupUi(this);

    stadiumList = g.vertices().toList();
    ui->comboBox_stadiums->addItems(stadiumList);

    ui->radioButton_selected->setChecked(true);

    ui->tableWidget_selected->setColumnWidth(0,290);
    ui->tableWidget_selected->setColumnWidth(1,58);
}

CustomTour::~CustomTour()
{
    delete ui;
}

void CustomTour::on_pushButton_add_clicked()
{
    int currentIndex = ui->comboBox_stadiums->currentIndex();

    if (ui->listWidget->count() > 0) {
        selectedStadiums.push_back(g.findVertex(stadiumList.at(currentIndex))); // is there a more efficient way to do this?
        ui->tableWidget_selected->insertRow(ui->tableWidget_selected->rowCount());
        ui->tableWidget_selected->setItem(ui->tableWidget_selected->rowCount() - 1, 0, new QTableWidgetItem(stadiumList.at(currentIndex)));
    }
    else {
        ui->listWidget->addItem(new QListWidgetItem(stadiumList.at(currentIndex)));
    }

    stadiumList.removeAt(currentIndex);
    ui->comboBox_stadiums->removeItem(currentIndex);
}

void CustomTour::on_pushButton_reset_clicked()
{
    selectedStadiums.clear();

    ui->comboBox_stadiums->clear();
    stadiumList = g.vertices().toList();
    ui->comboBox_stadiums->addItems(stadiumList);

    ui->listWidget->clear();
    ui->tableWidget_selected->setRowCount(0);
}

void CustomTour::on_pushButton_back_clicked()
{
    this->close();
}

void CustomTour::on_pushButton_calculateTrip_clicked()
{
    int totalDist = 0;
    QString startVertex = ui->listWidget->item(0)->text();

    if (ui->radioButton_short->isChecked()) {
        // Redraw selected stadiums to be in the right order
        ui->tableWidget_selected->setRowCount(0);
        ui->tableWidget_selected->setColumnCount(2);

        while(selectedStadiums.size() > 0) {
            // Use Dijkstra's to find the distance to all the vertices
            QVector<QString> T;
            int costs[g.size()];
            int parents[g.size()];
            g.shortestPathsDijkstra(startVertex,T,costs,parents);

            // Find the vertex in stadiumList with the lowest distance
            int stadiumCosts[selectedStadiums.size()];
            //stadiumCosts[0] = 0;
            int currentVertex;
            int lowestIndex = 0;
            int lowestCost = 999999;

            // Iterate through stadiumList to find the lowest distance
            for (int i=0; i<selectedStadiums.size(); i++) {
                 currentVertex = selectedStadiums.at(i);
                 stadiumCosts[i] = costs[currentVertex];

                 if (stadiumCosts[i] < lowestCost) {
                     lowestCost = stadiumCosts[i];
                     lowestIndex = i;
                 }
            }

            // Update the total distance
            totalDist += lowestCost;

            // Show the stadiums passed by on the way there
            QVector<int> ancestors;
            QVector<int> ancestorDists;
            int ancestorDistSum;
            currentVertex = selectedStadiums.at(lowestIndex);

            // Store those stadiums in the ancestors vector
            while (currentVertex != -1 && parents[currentVertex] != -1) {
               ancestors.push_back(currentVertex);
               ancestorDists.push_back(costs[currentVertex]-costs[parents[currentVertex]]);
               qDebug() << "Dist from " << g.vertexName(currentVertex) << " to " << parents[currentVertex] << ": " << ancestorDists.at(ancestorDists.size()-1) << endl;
               currentVertex = parents[currentVertex];
            }

            // Put all the stadiums in the table
            // Don't include i=0, because that's the destination
            for (int i=ancestors.size()-1; i>-1; i--) {
                ui->tableWidget_selected->insertRow(ui->tableWidget_selected->rowCount());
                ui->tableWidget_selected->setItem(ui->tableWidget_selected->rowCount()-1,1,new QTableWidgetItem(QString::number(ancestorDists.at(i))));

                if (i>0) // passing by this point
                    ui->tableWidget_selected->setItem(ui->tableWidget_selected->rowCount()-1,0,new QTableWidgetItem("Pass " + g.vertexName(ancestors.at(i))));
                else // reached destination
                    ui->tableWidget_selected->setItem(ui->tableWidget_selected->rowCount()-1,0,new QTableWidgetItem("Reached " + g.vertexName(ancestors.at(i)) + "!"));
            }

            // Remove the visited stadium
            startVertex = g.vertexName(selectedStadiums[lowestIndex]);
            selectedStadiums.removeAt(lowestIndex);
        }

        ui->label_distNum->setNum(totalDist);
    }
}

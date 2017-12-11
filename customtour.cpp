#include "buysouvenir.h"
#include "customtour.h"
#include "graph.h"
#include "ui_customtour.h"
#include <QSqlQuery>
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

    pathCalculated = false;

    ui->pushButton_souvenirs->setEnabled(false);
}

CustomTour::~CustomTour()
{
    delete ui;
}

void CustomTour::on_pushButton_add_clicked()
{
    if (!pathCalculated) {
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

        ui->label_error->clear();

    }
    else {
        ui->label_error->setText("Error: Please reset stadiums first");
    }
}

void CustomTour::on_pushButton_reset_clicked()
{
    selectedStadiums.clear();

    ui->comboBox_stadiums->clear();
    stadiumList = g.vertices().toList();
    ui->comboBox_stadiums->addItems(stadiumList);

    ui->listWidget->clear();
    ui->tableWidget_selected->setRowCount(0);
    ui->label_distNum->clear();
    ui->label_error->clear();
    ui->label_1->setText("Selected Stadiums");
    ui->label_1->setAlignment(Qt::AlignHCenter);

    pathCalculated = false;

    //clear stadiums and team names
    stadiums.clear();
    teamNames.clear();
    ui->pushButton_souvenirs->setEnabled(false);
}

void CustomTour::on_pushButton_back_clicked()
{
    this->close();
}

void CustomTour::on_pushButton_calculateTrip_clicked()
{
    //get list of stadiums from table widget
    for (int i =0; i < ui->tableWidget_selected->rowCount(); i++)
    {
        QString a = ui->tableWidget_selected->item(i,0)->text();
        stadiums.append(a);

        QTextStream (stdout) << "STADIUMS:" << stadiums.at(i) << endl;
    }

    int totalDist = 0;

    if (ui->radioButton_short->isChecked()) {
        totalDist = calcEfficientPath();
        ui->label_1->setText("Selected Stadiums in Shortest Order");
        ui->label_1->setAlignment(Qt::AlignHCenter);
    }
    else {
        // Implement custom tour in selected order
        ui->label_1->setText("Selected Stadiums in Selected Order");
        ui->label_1->setAlignment(Qt::AlignHCenter);
    }

    // Update total distance counter
    ui->label_distNum->setNum(totalDist);

    ui->label_error->clear();
    pathCalculated = true;

    //enable buy souvenirs
    ui->pushButton_souvenirs->setEnabled(true);
}

void CustomTour::on_pushButton_souvenirs_clicked()
{
    //get starting pt from list widget
    startingPt = ui->listWidget->item(0)->text();


    //convert to teamNames
    convertToTeamNames();

    buySouvenir *s = new buySouvenir();
    s->show();

    s->setData(startingPt, teamNames);
    s->populateDropdown();
}

void CustomTour::convertToTeamNames()
{
    QSqlQuery q;
    q.exec("select TeamName from NFL_INFORMATION where StadiumName='"+startingPt+"'");
    QString first;
    while(q.next()) {
        first= q.value(0).toString();
        startingPt = first;
    }

    for (int i = 0; i <stadiums.size(); i++)
    {
        QSqlQuery q;
        q.exec("select TeamName from NFL_INFORMATION where StadiumName='"+stadiums.at(i)+"'");
        QString addThis;
        int j =0;
        while(q.next()) {
            addThis= q.value(0).toString();
            teamNames.append(addThis);
            j++;
        }
    }


    //output teamnames
    for (int i =0; i < teamNames.size(); i++)
    {
    QTextStream (stdout) << "TEAMNAMES:" << teamNames.at(i) << endl;
    }
}

int CustomTour::calcEfficientPath() {
    // Redraw selected stadiums to be in the right order
    ui->tableWidget_selected->setRowCount(0);
    ui->tableWidget_selected->setColumnCount(2);

    // Initialize total distance and start vertex
    int totalDist = 0;
    QString startVertex = ui->listWidget->item(0)->text();

    // Find path by repatedly checking for nearest vertex
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
        currentVertex = selectedStadiums.at(lowestIndex);

        // Store those stadiums in the ancestors vector
        while (currentVertex != -1 && parents[currentVertex] != -1) {
           ancestors.push_back(currentVertex);
           ancestorDists.push_back(costs[currentVertex]-costs[parents[currentVertex]]);
           //qDebug() << "Dist from " << g.vertexName(currentVertex) << " to " << parents[currentVertex] << ": " << ancestorDists.at(ancestorDists.size()-1) << endl;
           currentVertex = parents[currentVertex];
        }

        // Put all the stadiums in the table
        for (int i=ancestors.size()-1; i>-1; i--) {
            ui->tableWidget_selected->insertRow(ui->tableWidget_selected->rowCount());
            ui->tableWidget_selected->setItem(ui->tableWidget_selected->rowCount()-1,1,new QTableWidgetItem(QString::number(ancestorDists.at(i))));

            if (i>0) // passing by this point
                ui->tableWidget_selected->setItem(ui->tableWidget_selected->rowCount()-1,0,new QTableWidgetItem("Passed " + g.vertexName(ancestors.at(i))));
            else { // reached destination
                ui->tableWidget_selected->setItem(ui->tableWidget_selected->rowCount()-1,0,new QTableWidgetItem("Reached " + g.vertexName(ancestors.at(i)) + "!"));
                QFont boldFont;
                boldFont.setBold(true);
                ui->tableWidget_selected->item(ui->tableWidget_selected->rowCount()-1,0)->setFont(boldFont);
            }
        }

        // Remove the visited stadium
        startVertex = g.vertexName(selectedStadiums[lowestIndex]);
        selectedStadiums.removeAt(lowestIndex);
    }

    return totalDist;
}

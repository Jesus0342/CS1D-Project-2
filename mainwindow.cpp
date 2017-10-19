#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "database.h"

Database* Database::instance = nullptr;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QVector<Team> teams = Database::getInstance()->returnTeamList();

    QVector<Team>::iterator teamIt = teams.begin();

    ui->tableWidget->setRowCount(teams.size());

    int numRows = ui->tableWidget->rowCount();
    int numCols = ui->tableWidget->columnCount();

    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getName()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getStadiumName()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getSeatingCapacity()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getLocation()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getConference()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getSurfaceType()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getStadiumRoofType()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teamIt->getStarPlayer()));
            j++;
        }

        qDebug() << teamIt->getLocation();

        teamIt++;
    }

    ui->tableWidget->resizeColumnsToContents();
}

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
    UnsortedMap teams = Database::getInstance()->returnTeamList();

    ui->tableWidget->setRowCount(teams.size());

    int numRows = ui->tableWidget->rowCount();
    int numCols = ui->tableWidget->columnCount();

    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numCols; j++)
        {
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getName()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getStadiumName()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getSeatingCapacity()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getLocation()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getConference()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getSurfaceType()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getStadiumRoofType()));
            j++;

            ui->tableWidget->setItem(i, j, new QTableWidgetItem(teams[i].getStarPlayer()));
            j++;
        }
    }

    ui->tableWidget->resizeColumnsToContents();

    ui->tableWidget->selectRow(4);
}

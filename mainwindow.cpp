#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "database.h"

Database* Database::instance = nullptr;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->page_home);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_selectAction_currentIndexChanged(int index)
{
    switch(index)
    {
        case 1 :
        {
            ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);
        }
        break;
    }

    ui->comboBox_selectAction->setCurrentIndex(0);
}

void MainWindow::on_comboBox_selectTeamInfo_currentIndexChanged(int index)
{
    switch(index)
    {
        case 1 :
        {
            ui->stackedWidget->setCurrentWidget(ui->page_viewTeamInfo);
        }
        break;
    }

    ui->comboBox_selectTeamInfo->setCurrentIndex(0);
}

void MainWindow::on_pushButton_backViewNFLInfo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_home);
}

void MainWindow::on_pushButton_backViewTeamInfo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);
}

void MainWindow::on_pushButton_3_clicked()
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
}

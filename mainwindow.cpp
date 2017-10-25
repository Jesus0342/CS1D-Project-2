#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtAlgorithms>
#include "database.h"

Database* Database::instance = nullptr;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->page_home);

    ui->comboBox_searchTeam->setCurrentIndex(0);
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

            // Stores the teams in the database into an unsorted map.
            UnsortedMap teams = Database::getInstance()->returnTeamList();

            // QVector of team names.
            QVector<QString> teamNames;

            // Adds the names of the teams to the vector.
            for(int i = 0; i < teams.size(); i++)
            {
                teamNames.push_back(teams[i].getName());
            }

            // Sorts the names of the teams in ascending order.
            qSort(teamNames);

            // Adds the names of the teams to the searchTeam combo box.
            ui->comboBox_searchTeam->insertItem(0, "<Select Team Name>");

            for(int i = 1; i <= teamNames.size(); i++)
            {
                ui->comboBox_searchTeam->insertItem(i, teamNames[i - 1]);
            }

            // Sets the row count for the table.
            ui->tableWidget_teamInfo->setRowCount(teams.size());

            int numRows = ui->tableWidget_teamInfo->rowCount();
            int numCols = ui->tableWidget_teamInfo->columnCount();

            // Sets the information for all teams on the table widget.
            for(int i = 0; i < numRows; i++)
            {
                for(int j = 0; j < numCols; j++)
                {
                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getName()));
                    j++;

                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getStadiumName()));
                    j++;

                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getSeatingCapacity()));
                    j++;

                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getLocation()));
                    j++;

                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getConference()));
                    j++;

                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getSurfaceType()));
                    j++;

                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getStadiumRoofType()));
                    j++;

                    ui->tableWidget_teamInfo->setItem(i, j, new QTableWidgetItem(teams[i].getStarPlayer()));
                    j++;
                }
            }

            // Resizes the columns of the table widget.
            ui->tableWidget_teamInfo->resizeColumnsToContents();
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

    ui->comboBox_searchTeam->clear();
}

void MainWindow::on_comboBox_searchTeam_currentIndexChanged(const QString &arg1)
{
    QList<QTableWidgetItem*> searchTeam = ui->tableWidget_teamInfo->findItems(arg1, Qt::MatchExactly);

    QList<QTableWidgetItem*>::iterator team = searchTeam.begin();

    qDebug() << team[0]->row();
}

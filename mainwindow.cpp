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
        // Takes the fan to the NFL Information page.
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
        /*****************************************************************
         * CASE 1 - Displays all information related to the selected
         * football team.
         *****************************************************************/
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

void MainWindow::on_comboBox_searchTeam_currentIndexChanged(const QString &arg1)
{
    // Stores the selected team name a QTableWidgetItem (QList always has 1 item because all team names
    // are unique).
    QList<QTableWidgetItem*> searchTeam = ui->tableWidget_teamInfo->findItems(arg1, Qt::MatchExactly);

    // Goes to the row where the selected team's information is found.
    if(!searchTeam.empty())
    {
        // QTableWidgetItem pointer stores the item so that the row and column can be accessed.
        QTableWidgetItem *team = searchTeam.front();

        // Goes to the cell where the selected team name appears.
        ui->tableWidget_teamInfo->setCurrentCell(team->row(), team->column());

        // Highlights the row where the selected team name appears.
        ui->tableWidget_teamInfo->selectRow(team->row());
    }
}

void MainWindow::on_pushButton_backViewNFLInfo_clicked()
{
    // Returns to the home page.
    ui->stackedWidget->setCurrentWidget(ui->page_home);
}

void MainWindow::on_pushButton_backViewTeamInfo_clicked()
{
    // Returns to the NFL information page.
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_searchTeam->clear();

    // Goes back to the top of the table.
    ui->tableWidget_teamInfo->setCurrentCell(0, 0);

    // Clears all selected rows.
    ui->tableWidget_teamInfo->clearSelection();
}

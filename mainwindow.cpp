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

    // Always opens the program to the home page of the stacked widget.
    ui->stackedWidget->setCurrentWidget(ui->page_home);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/***********************
 * COMBO BOX FUNCTIONS *
 ***********************/

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

void MainWindow::on_comboBox_displayOptions_currentIndexChanged(int index)
{
    // Stores the teams in the database into an unsorted map.
    UnsortedMap teams = Database::getInstance()->returnTeamList();

    switch(index)
    {
    /*********************************************************************
     * CASE 1 - Displays all information related to the selected
     * football team.
     *********************************************************************/
    case 1 :
    {
        // Goes to the view team info page.
        ui->stackedWidget->setCurrentWidget(ui->page_viewTeamInfo);

        // QVector of team names that will be used to select the team
        // whose info will be shown.
        QVector<QString> teamNames;

        // Adds the names of the teams to the vector.
        for(int i = 0; i < teams.size(); i++)
        {
            teamNames.push_back(teams[i].getName());
        }

        // Sorts the names of the teams in ascending order.
        std::sort(teamNames.begin(), teamNames.end());

        // Adds the names of the teams to the selectTeam combo box.
        ui->comboBox_selectTeam->insertItem(0, "<Select Team Name>");

        for(int i = 1; i <= teamNames.size(); i++)
        {
            ui->comboBox_selectTeam->insertItem(i, teamNames[i - 1]);
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
    /*********************************************************************
     * CASE 2 - Display the NFL teams sorted alphabetically by team name
     *********************************************************************/
    case 2:
    {
        // Goes to the view team info page.
        ui->stackedWidget->setCurrentWidget(ui->page_viewTeams);

        // Sets the row count for the table.
        ui->tableWidget_teams->setRowCount(teams.size());

        int numRows = ui->tableWidget_teams->rowCount();
        int numCols = ui->tableWidget_teams->columnCount();

        ui->tableWidget_teams->sortByColumn(0, Qt::AscendingOrder);



        // Sets the information for all teams on the table widget.
        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j < numCols; j++)
            {
                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getName()));
                j++;

                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getStadiumName()));
                j++;

                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getSeatingCapacity()));
                j++;

                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getLocation()));
                j++;

                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getConference()));
                j++;

                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getSurfaceType()));
                j++;

                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getStadiumRoofType()));
                j++;

                ui->tableWidget_teams->setItem(i, j, new QTableWidgetItem(teams[i].getStarPlayer()));
                j++;
            }
        }

        ui->tableWidget_teams->setSortingEnabled(true);
        // Resizes the columns of the table widget.
        ui->tableWidget_teamInfo->resizeColumnsToContents();
    }
        break;

    /*********************************************************************
     * CASE 3 - Displays the NFL stadiums in ascending order.
     *********************************************************************/
    case 3:
    {
        // Goes to view stadiums page.
        ui->stackedWidget->setCurrentWidget(ui->page_viewStadiums);

        // Sets the row count for the table.
        ui->tableWidget_viewStadiums->setRowCount(teams.size());

        int numRows = ui->tableWidget_viewStadiums->rowCount();
        int numCols = ui->tableWidget_viewStadiums->columnCount();

        // Sets the column header width
        ui->tableWidget_viewStadiums->setColumnWidth(0, 300);

        for(int indexR = 0; indexR < numRows; indexR++)
        {
            for(int indexC = 0; indexC < numCols; indexC++)
            {
                ui->tableWidget_viewStadiums->setItem(indexR, indexC, new QTableWidgetItem(teams[indexR].getStadiumName()));
                indexC++;
            }
        }

        // controls the sorting by clicking on the horizontal header(Stadium)
        ui->tableWidget_viewStadiums->setSortingEnabled(true);

    }
        break;

    /*********************************************************************
     * CASE 4 - Displays the NFL teams in the selected conference, sorted
     * by team name.
     *********************************************************************/
    case 4 :
    {
        // Goes to the view conferences page.
        ui->stackedWidget->setCurrentWidget(ui->page_viewConferences);

        // Sets the row count for the table.
        ui->tableWidget_conferences->setRowCount(teams.size());

        int numRows = ui->tableWidget_conferences->rowCount();
        int numCols = ui->tableWidget_conferences->columnCount();

        // Sets the information for all teams on the table widget.
        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j < numCols; j++)
            {
                ui->tableWidget_conferences->setItem(i, j, new QTableWidgetItem(teams[i].getName()));
                j++;

                ui->tableWidget_conferences->setItem(i, j, new QTableWidgetItem(teams[i].getConference()));
                j++;
            }
        }

        // Resizes the columns of the table widget.
        ui->tableWidget_conferences->resizeColumnsToContents();

        // Displays the information sorted by team name.
        ui->tableWidget_conferences->sortByColumn(0, Qt::AscendingOrder);
    }
        break;

    /*********************************************************************
     * CASE 6 - Displays the list of NFL star players and their corres-
     * ponding team name sorted by team name.
     *********************************************************************/
    case 6 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_viewStarPlayers);
        QSqlQueryModel *mod = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery();
        qry->prepare("SELECT TeamName FROM NFL_INFORMATION order by TeamName ASC");
        qry->exec();
        mod->setQuery(*qry);
        ui->comboBox_starPlayer->setModel(mod);

        on_radioButton_starPlayer_all_clicked();
        ui->radioButton_starPlayer_all->setChecked(true);
        break;
    }

    /*********************************************************************
     * CASE 7 - Displays the NFL stadiums and teams sorted from lowest to
     * highest seating capacity and displays the total NFL seating capacity.
     *********************************************************************/
    case 7 :
    {
        // Goes to view seating capacity page.
        ui->stackedWidget->setCurrentWidget(ui->page_viewSeatingCapacity);

        // Sets the row count for the table.
        ui->tableWidget_seatingCapacity->setRowCount(teams.size());

        int numRows = ui->tableWidget_seatingCapacity->rowCount();
        int numCols = ui->tableWidget_seatingCapacity->columnCount();

        // Sets the information for all teams on the table widget.
        for(int i = 0; i < numRows; i++)
        {
            for(int j = 0; j < numCols; j++)
            {
                ui->tableWidget_seatingCapacity->setItem(i, j, new QTableWidgetItem(teams[i].getName()));
                j++;

                ui->tableWidget_seatingCapacity->setItem(i, j, new QTableWidgetItem(teams[i].getStadiumName()));
                j++;

                ui->tableWidget_seatingCapacity->setItem(i, j, new QTableWidgetItem(teams[i].getSeatingCapacity()));
                j++;
            }
        }

        // Resizes the columns of the table widget.
        ui->tableWidget_seatingCapacity->resizeColumnsToContents();

        // Sorts the table by seating capacity (least to greatest).
        ui->tableWidget_seatingCapacity->sortByColumn(2, Qt::AscendingOrder);

        // Returns the total seating capacity for all NFL teams.
        long seatingCapacity = teams.calculateTotalSeatingCapacity();

        // Converts the total seating capacity into a string.
        QString seatingCapacityStr = QString::number(seatingCapacity);

        int count = 1;

        // Adds commas to the number to increase readability.
        for(int i = seatingCapacityStr.size(); i >= 0; i--)
        {
            if(count == 3)
            {
                seatingCapacityStr.insert(i - 1, ',');

                count = 1;
            }
            else
            {
                count++;
            }
        }

        // Sets the total seating capacity in the totalCapacity label.
        ui->label_totalCapacity->setText(seatingCapacityStr);

        // Changes the font in the totalCapacity label.
        QFont font = ui->label_totalCapacity->font();
        font.setPointSize(12);
        font.setBold(true);

        // Sets the font.
        ui->label_totalCapacity->setFont(font);
    }
        break;
    }

    ui->comboBox_displayOptions->setCurrentIndex(0);
}

void MainWindow::on_comboBox_selectTeam_currentIndexChanged(const QString &arg1)
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

/*************************
 * BACK BUTTON FUNCTIONS *
 *************************/

void MainWindow::on_pushButton_backViewNFLInfo_clicked()
{
    // Returns to the home page.
    ui->stackedWidget->setCurrentWidget(ui->page_home);
}

void MainWindow::on_pushButton_backViewTeamInfo_clicked()
{
    // Returns to the NFL information page.
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_selectTeam->clear();

    // Goes back to the top of the table.
    ui->tableWidget_teamInfo->setCurrentCell(0, 0);

    // Clears all selected rows.
    ui->tableWidget_teamInfo->clearSelection();
}

void MainWindow::on_pushButton_backConferences_clicked()
{
    // Unchecks the checkboxes.
    ui->checkBox_americanConference->setChecked(false);

    ui->checkBox_nationalConference->setChecked(false);

    // Returns to NFL information page.
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);
}

void MainWindow::on_pushButton_backSeatingCapacity_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);
}

void MainWindow::on_pushButton_backViewStadiums_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);
}
/***********************
 * CHECK BOX FUNCTIONS *
 ***********************/

void MainWindow::on_checkBox_americanConference_toggled(bool checked)
{
    // Stores the teams in the database into an unsorted map.
    UnsortedMap teams = Database::getInstance()->returnTeamList();

    // Displays only the teams in the American Football Conference if
    // the "American Football Conference Only" checkbox is checked, else
    // all teams are displayed.
    if(checked)
    {
        // Unchecks the "National Football Conference Only" checkbox.
        ui->checkBox_nationalConference->setChecked(false);

        // Clears the conferences table.
        ui->tableWidget_conferences->setRowCount(0);

        // Adds the teams to the conference table that are in the American Football Conference.
        for(int i = 0; i < teams.size(); i++)
        {
            if(teams[i].getConference() == "American Football Conference")
            {
                ui->tableWidget_conferences->insertRow(ui->tableWidget_conferences->rowCount());
                ui->tableWidget_conferences->setItem(ui->tableWidget_conferences->rowCount() - 1, 0, new QTableWidgetItem(teams[i].getName()));

                ui->tableWidget_conferences->setItem(ui->tableWidget_conferences->rowCount() - 1, 1, new QTableWidgetItem(teams[i].getConference()));
            }
        }

        // Resizes the table's columns.
        ui->tableWidget_conferences->resizeColumnsToContents();

        // Sorts the table by team name.
        ui->tableWidget_conferences->sortByColumn(0, Qt::AscendingOrder);
    }
    else
    {
        on_comboBox_displayOptions_currentIndexChanged(4);
    }
}

void MainWindow::on_checkBox_nationalConference_toggled(bool checked)
{
    // Stores the teams in the database into an unsorted map.
    UnsortedMap teams = Database::getInstance()->returnTeamList();

    // Displays only the teams in the National Football Conference if
    // the "National Football Conference Only" checkbox is checked, else
    // all teams are displayed.
    if(checked)
    {
        // Unchecks the "American Football Conference Only" checkbox.
        ui->checkBox_americanConference->setChecked(false);

        // Clears the conferences table.
        ui->tableWidget_conferences->setRowCount(0);

        // Adds the teams to the conference table that are in the National Football Conference.
        for(int i = 0; i < teams.size(); i++)
        {
            if(teams[i].getConference() == "National Football Conference")
            {
                ui->tableWidget_conferences->insertRow(ui->tableWidget_conferences->rowCount());
                ui->tableWidget_conferences->setItem(ui->tableWidget_conferences->rowCount() - 1, 0, new QTableWidgetItem(teams[i].getName()));

                ui->tableWidget_conferences->setItem(ui->tableWidget_conferences->rowCount() - 1, 1, new QTableWidgetItem(teams[i].getConference()));
            }
        }

        // Resizes the table's columns.
        ui->tableWidget_conferences->resizeColumnsToContents();

        // Sorts the table by team name.
        ui->tableWidget_conferences->sortByColumn(0, Qt::AscendingOrder);
    }
    else
    {
        on_comboBox_displayOptions_currentIndexChanged(4);
    }
}

void MainWindow::on_pushButton_backViewTeams_clicked()
{
    // Returns to the NFL information page.
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_selectTeam->clear();

    // Goes back to the top of the table.
    ui->tableWidget_teamInfo->setCurrentCell(0, 0);

    // Clears all selected rows.
    ui->tableWidget_teamInfo->clearSelection();
}

/**
 * @brief MainWindow::starPlayers_loadTable
 * @param team
 * Star Players Load Table- Displays the list of all Star Players
 * with their team names ordered asc. Also able to filter star
 * players according to their team names.
 */
void MainWindow::starPlayers_loadTable(QString team)
{
   QString q;
   if (team=="all")
   {
      q = "SELECT TeamName, StarPlayer FROM NFL_INFORMATION order by TeamName ASC";
   }
   else
   {
       q = ("SELECT TeamName, StarPlayer FROM NFL_INFORMATION where TeamName='"+team+"'");
   }
   QStringList colNames= {"Starting College", "Star Player"};
   ui->tableWidget_starPlayers->setColumnCount(2);
   ui->tableWidget_starPlayers->setHorizontalHeaderLabels(colNames);
   QSqlQuery query;
   query.exec(q);
   ui->tableWidget_starPlayers->setRowCount(0);
   int i=0;
   while(query.next())
   {
       ui->tableWidget_starPlayers->insertRow(i);
       ui->tableWidget_starPlayers->setItem(i,0, new QTableWidgetItem(query.value(0).toString()));
       ui->tableWidget_starPlayers->setItem(i,1, new QTableWidgetItem(query.value(1).toString()));
       i++;
   }
   ui->tableWidget_starPlayers->show();

}

/**
 * @brief MainWindow::on_comboBox_starPlayer_currentIndexChanged
 * @param arg1
 * Combo box- populated with team names. Table Widget view of
 * star players will be filtered by the chosen team.
 */
void MainWindow::on_comboBox_starPlayer_currentIndexChanged(const QString &arg1)
{
    starPlayers_loadTable(arg1);
}

/**
 * @brief MainWindow::on_radioButton_starPlayer_all_clicked
 * When radio button VIEW ALL star players is clicked, table display
 * will update to show all team names with their star players.
 */
void MainWindow::on_radioButton_starPlayer_all_clicked()
{
    starPlayers_loadTable("all");
    ui->comboBox_starPlayer->hide();
}

/**
 * @brief MainWindow::on_radioButton_starPlayer_filter_clicked
 * When Radio button FILTER star players is clicked, combo box
 * of list of team names will be shown.
 */
void MainWindow::on_radioButton_starPlayer_filter_clicked()
{
    starPlayers_loadTable(ui->comboBox_starPlayer->currentText());
    ui->comboBox_starPlayer->show();
}

/**
 * @brief MainWindow::on_pushButton_starPlayers_backMenu_clicked
 * Back to main menu button- located in star players page.
 * When clicked, fan will be redirected to the main menu.
 */
void MainWindow::on_pushButton_starPlayers_backMenu_clicked()
{
    // Returns to Menu
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);
}



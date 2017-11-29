#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "buysouvenir.h"
#include "startatfordfield.h"
#include "traversegraph.h"
#include "startlosangeles.h"

#include <QtAlgorithms>
#include <QObject>
#include "database.h"

Database* Database::instance = nullptr;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Always opens the program to the home page of the stacked widget.
    ui->stackedWidget->setCurrentWidget(ui->page_home);

    // *** MAKE SURE TO HAVE THIS WHENEVER YOU USE THE GRAPH CLASS ***
    Database::getInstance()->returnGraphEdges();

    Graph g;

    int size = g.size();

    QVector<QString> T;
    int costs[size];
    int parents[size];

    g.shortestPathsDijkstra("Hard Rock Stadium", T, costs, parents);

    for(int i = 0; i < T.size(); i++)
    {
        QVector<QString> paths = g.returnPath("Hard Rock Stadium", T[i], parents);

        qDebug() << "Hard Rock Stadium to " << T[i] << "\n";

        for(int j = 0; j < paths.size(); j++)
        {
            qDebug() << paths[j];

            if(j + 1 != paths.size())
            {
                qDebug() << " -> ";
            }
        }

        qDebug() << "\nTotal Distance: " << costs[g.findVertex(T[i])] << "\n";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectToDatabase()
{
    //Check if database exists before we init it
    QFileInfo check_file("./nfl.db");

    // connect to database
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./nfl.db");
    bool db_ok = db.open();
     QTextStream(stdout) << "Connecting to database" << endl;
    if(db_ok){
        QTextStream(stdout) << "All good" << endl;
    }
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
    // Takes the fan to the Traverse Graph window.
    case 2 :
    {
        traversegraph *traversalWindow = new traversegraph;

        traversalWindow->show();

        // Closes the homepage.
        this->close();
    }
        break;
    case 3:
    {
        startAtFordField *s = new startAtFordField();
        s->show();
        break;
    }
    case 4:
    {
        startlosangeles *l = new startlosangeles();
        l->show();
        break;
    }
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
        ui->tableWidget_teams->resizeColumnsToContents();
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

                ui->tableWidget_viewStadiums->setItem(indexR, indexC, new QTableWidgetItem(teams[indexR].getName()));
                indexC++;

                ui->tableWidget_viewStadiums->setItem(indexR, indexC, new QTableWidgetItem(teams[indexR].getStadiumName()));
                indexC++;
            }
        }

        ui->tableWidget_viewStadiums->resizeColumnsToContents();

        // controls the sorting by clicking on the horizontal header(Stadium)
        ui->tableWidget_viewStadiums->setSortingEnabled(true);

        ui->tableWidget_viewStadiums->horizontalHeader()->setStretchLastSection(true);
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

        // Displays the information sorted by team name.
        ui->tableWidget_conferences->sortByColumn(0, Qt::AscendingOrder);

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
    }
        break;

    /*********************************************************************
     * CASE 5 - Displays the NFL stadiums with the selected roof type
     * and the number of stadiums with that roof type.
     *********************************************************************/
    case 5 :
    {
        // Goes to the view open roofs page (open roofs first by default).
        ui->stackedWidget->setCurrentWidget(ui->page_viewRoof);

        // Sets the row count for the table.
        ui->tableWidget_roof->setRowCount(teams.size());

        setRoofTable("Open");
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
    }
        break;
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

        ui->tableWidget_seatingCapacity->horizontalHeader()->setStretchLastSection(true);

        // Sorts the table by seating capacity (least to greatest).
        ui->tableWidget_seatingCapacity->sortByColumn(2, Qt::AscendingOrder);

        ui->tableWidget_seatingCapacity->setSortingEnabled(true);

        // Returns the total seating capacity for all NFL teams.
        long seatingCapacity = teams.calculateTotalSeatingCapacity();

        // Converts the total seating capacity into a string.
        QString seatingCapacityStr = addCommas(seatingCapacity);

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

    /*********************************************************************
     * CASE 8 - Displays the NFL teams, stadiums, surface type, and
     * location sorted by surface type
     *********************************************************************/
    case 8 :
    {
        //ui->tableWidget_roof->setRowCount(0);

        // Goes to view surface type page.
        ui->stackedWidget->setCurrentWidget(ui->page_viewSurfaceType);

        // Sets the row count for the table.
        ui->tableWidget_surfaceType->setRowCount(teams.size());

        int numRows = ui->tableWidget_surfaceType->rowCount();

        // Sets the information for all teams on the table widget.
        for(int i = 0; i < numRows; i++)
        {
            ui->tableWidget_surfaceType->setItem(i, 0, new QTableWidgetItem(teams[i].getName()));
            ui->tableWidget_surfaceType->setItem(i, 1, new QTableWidgetItem(teams[i].getStadiumName()));
            ui->tableWidget_surfaceType->setItem(i, 2, new QTableWidgetItem(teams[i].getLocation()));
            ui->tableWidget_surfaceType->setItem(i, 3, new QTableWidgetItem(teams[i].getSurfaceType()));
        }

        // Resizes the columns of the table widget.
        ui->tableWidget_surfaceType->resizeColumnsToContents();

        // Displays the information sorted by surface type.
        ui->tableWidget_surfaceType->sortByColumn(3, Qt::AscendingOrder);
    }
        break;
    /*********************************************************************
     * CASE 9 - Displays the list of souvenirs for the selected stadium.
     *********************************************************************/
    case 9 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_displaySouvenirs);

        // Sets the row count for the table.
        ui->tableWidget_stadiums->setRowCount(teams.size());

        // Stores the number of rows and columns in the table.
        int numRows = ui->tableWidget_stadiums->rowCount();
        int numCols = ui->tableWidget_stadiums->columnCount();

        // Displays the name of every stadium on the table.
        for(int indexR = 0; indexR < numRows; indexR++)
        {
            for(int indexC = 0; indexC < numCols; indexC++)
            {

                ui->tableWidget_stadiums->setItem(indexR, indexC, new QTableWidgetItem(teams[indexR].getName()));
                indexC++;
            }
        }

        ui->tableWidget_stadiums->resizeColumnsToContents();

        // controls the sorting by clicking on the horizontal header(Stadium)
        ui->tableWidget_stadiums->setSortingEnabled(true);

        ui->tableWidget_stadiums->horizontalHeader()->setStretchLastSection(true);
    }
    }
}

void MainWindow::on_comboBox_selectTeam_currentIndexChanged(const QString &arg1)
{
    ui->tableWidget_teamInfo->setRowCount(0);

    UnsortedMap teams = Database::getInstance()->returnTeamList();

    // Displays the information of the selected team.
    for(int i = 0; i < teams.size(); i++)
    {
        int j = 0;

        if(teams[i].getName() == arg1)
        {
            ui->tableWidget_teamInfo->insertRow(ui->tableWidget_teamInfo->rowCount());

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getName()));
            j++;

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getStadiumName()));
            j++;

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getSeatingCapacity()));
            j++;

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getLocation()));
            j++;

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getConference()));
            j++;

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getSurfaceType()));
            j++;

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getStadiumRoofType()));
            j++;

            ui->tableWidget_teamInfo->setItem(0, j, new QTableWidgetItem(teams[i].getStarPlayer()));
            j++;
        }
    }

    ui->tableWidget_teamInfo->setSortingEnabled(true);

    // Resizes the columns of the table widget.
    ui->tableWidget_teamInfo->resizeColumnsToContents();
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

    ui->comboBox_displayOptions->setCurrentIndex(0);
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

    ui->comboBox_displayOptions->setCurrentIndex(0);
}

void MainWindow::on_pushButton_backConferences_clicked()
{
    // Unchecks the checkboxes.
    ui->checkBox_americanConference->setChecked(false);

    ui->checkBox_nationalConference->setChecked(false);

    // Returns to NFL information page.
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_displayOptions->setCurrentIndex(0);
}

void MainWindow::on_pushButton_backSeatingCapacity_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_displayOptions->setCurrentIndex(0);

    ui->tableWidget_seatingCapacity->setRowCount(0);
    ui->tableWidget_seatingCapacity->clearContents();
}

void MainWindow::on_pushButton_backRoofs_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_displayOptions->setCurrentIndex(0);
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

    ui->comboBox_displayOptions->setCurrentIndex(0);
}

void MainWindow::on_pushButton_backViewStadiums_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_displayOptions->setCurrentIndex(0);
}

void MainWindow::on_pushButton_backSurfaceType_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_displayOptions->setCurrentIndex(0);
}

void MainWindow::on_pushButton_backViewSouvenirs_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_viewNFLInfo);

    ui->comboBox_displayOptions->setCurrentIndex(0);

    ui->tableWidget_stadiums->setRowCount(0);
    ui->tableWidget_souvenirs->setRowCount(0);
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

void MainWindow::on_pushButton_getOpenRoofs_clicked()
{
    setRoofTable("Open");
}

void MainWindow::on_pushButton_getFixedRoofs_clicked()
{
   setRoofTable("Fixed");
}

void MainWindow::on_pushButton_getRetraRoofs_clicked()
{
    setRoofTable("Retractable");
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
   QStringList colNames= {"Team Name", "Star Player"};
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

   ui->tableWidget_starPlayers->resizeColumnsToContents();

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

void MainWindow::setRoofTable (QString roofType) {
    // Stores the teams in the database into an unsorted map.
    UnsortedMap teams = Database::getInstance()->returnTeamList();

    // Reset the table
    ui->tableWidget_roof->setRowCount(0);

//    // Sets the row count for the table.
//    ui->tableWidget_roof->setRowCount(teams.size());

//    int numRows = ui->tableWidget_roof->rowCount();
    int numFound = 0;

    QVector<Team>::iterator teamIt = teams.begin();

    // Traverses the entire map to accumulate totalSeatingCapacity.
    while(teamIt != teams.end())
    {
        // Resets compIt to the beginning of the map.
        QVector<Team>::iterator compIt = teams.begin();

        // Determines whether or not the stadium's seating capacity has already
        // been counted.
        bool alreadyCounted = false;

        // Traverses the list up until teamIt to check if any of the teams before
        // teamIt play in the same stadium.
        while(compIt < teamIt && !alreadyCounted)
        {
            // Sets alreadyCounted to true if a previous team plays at the same
            // stadium as the current team.
            if(compIt->getStadiumName() == teamIt->getStadiumName())
            {
                alreadyCounted = true;
            }

            // Moves compIt to the next team.
            compIt++;
        }

        if(!alreadyCounted && teamIt->getStadiumRoofType() == roofType)
        {
            numFound++;
        }

        teamIt++;
    }

    // Sets the information for all teams on the table widget.
    for(int i = 0; i < teams.size(); i++)
    {
        // Adds the teams to the conference table that have open roofs
        if (teams[i].getStadiumRoofType() == roofType)
        {
            ui->tableWidget_roof->insertRow(ui->tableWidget_roof->rowCount());
            ui->tableWidget_roof->setItem(ui->tableWidget_roof->rowCount() - 1, 0, new QTableWidgetItem(teams[i].getName()));
            ui->tableWidget_roof->setItem(ui->tableWidget_roof->rowCount() - 1, 1, new QTableWidgetItem(teams[i].getStadiumName()));
        }
    }

    // Resizes the columns of the table widget.
    ui->tableWidget_roof->resizeColumnsToContents();

    ui->tableWidget_roof->horizontalHeader()->setStretchLastSection(true);

    // Displays the information sorted by team name.
    ui->tableWidget_roof->sortByColumn(0, Qt::AscendingOrder);

    // Converts the total seating capacity into a string and puts it in the total open roof label.
    ui->label_totalRoofTxt->setText("Total " + roofType + " Roofs: " + QString::number(numFound));
    ui->label_roofTitle->setText(roofType + " Roof Stadiums");

    // Changes the font in the totalRoofTxt label.
    QFont font = ui->label_totalRoofTxt->font();
    font.setPointSize(12);
    font.setBold(true);

    // Sets the font.
    ui->label_totalRoofTxt->setFont(font);

    // Changes the font in the totalRoofTxt label.
    QFont font2 = ui->label_roofTitle->font();
    if (roofType == "Retractable")
        font2.setPointSize(30);
    else
        font2.setPointSize(36);

    // Sets the font.
    ui->label_roofTitle->setFont(font2);
    ui->label_roofTitle->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_pushButton_login_clicked()
{
    Login *loginWindow = new Login;

    loginWindow->show();

    // Connects the login window to mainwindow and hides mainwindow upon successful login.
    QObject::connect(loginWindow, SIGNAL(accepted()), this, SLOT(hide()));
    QObject::connect(loginWindow, SIGNAL(rejected()), this, SLOT(show()));
    QObject::connect(loginWindow, SIGNAL(accepted()), loginWindow, SLOT(hide()));
    QObject::connect(loginWindow, SIGNAL(rejected()), loginWindow, SLOT(hide()));
}

void MainWindow::on_tableWidget_stadiums_clicked(const QModelIndex &index)
{
    ui->tableWidget_souvenirs->setRowCount(0);

    // Gets the index of the selected stadium in the table widget.
    QModelIndex stadiumIndex = index.sibling(index.row(), index.column());

    // Converts the data in the selected cell to a QString.
    QString stadiumName = ui->tableWidget_stadiums->model()->data(stadiumIndex).toString();

    // Team object used to pass into returnSouvenirList().
    Team stadium;

    // Sets the name of the stadium (required for returnSouvenirList()).
    stadium.setName(stadiumName);

    // Returns a list of the souvenirs for the selected stadium.
    QVector<Souvenir> souvenirs = Database::getInstance()->returnSouvenirList(stadium);

    // Sets the row count for the table.
    ui->tableWidget_souvenirs->setRowCount(souvenirs.size());

    // Store the number of rows and columns for the table of souvenirs.
    int numRows = ui->tableWidget_souvenirs->rowCount();
    int numCols = ui->tableWidget_souvenirs->columnCount();

    // Displays the souvenirs with the corresponding prices for the selected stadium.
    for(int indexR = 0; indexR < numRows; indexR++)
    {
        for(int indexC = 0; indexC < numCols; indexC++)
        {
            ui->tableWidget_souvenirs->setItem(indexR, indexC, new QTableWidgetItem(souvenirs[indexR].getName()));
            indexC++;

            ui->tableWidget_souvenirs->setItem(indexR, indexC, new QTableWidgetItem(QString::number(souvenirs[indexR].getPrice(), 'f', 2)));
            indexC++;
        }
    }

    ui->tableWidget_souvenirs->resizeColumnsToContents();

    // Allows the table to be sorted by clicking on a table header.
    ui->tableWidget_souvenirs->setSortingEnabled(true);
}

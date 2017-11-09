#include "adminwindow.h"
#include "ui_adminwindow.h"

#include <QObject>

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    // Always opens the adminwindow to the administrator homepage.
    ui->stackedWidget->setCurrentWidget(ui->page_adminHome);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_pushButton_logout_clicked()
{
    // Sends the accepted signal to unhide mainwindow.
    accepted();
}

void AdminWindow::on_comboBox_adminFunctions_currentIndexChanged(int index)
{
    switch(index)
    {
    /*********************************************************************
     * CASE 1 - Goes to the "Add Stadiums" page and displays the stadiums
     * in the "New Stadiums" table of the database.
     *********************************************************************/
    case 1 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_addStadiums);

        QVector<Team> newStadiums = Database::getInstance()->returnNewStadiums();

        // Sets the row count for the table.
        ui->tableWidget_newStadiums->setRowCount(0);

        // Sets the information for all new stadiums on the table widget.
        for(int i = 0; i < newStadiums.size(); i++)
        {
            if(!(Database::getInstance()->stadiumExists(newStadiums[i])))
            {
                ui->tableWidget_newStadiums->insertRow(ui->tableWidget_newStadiums->rowCount());

                int j = 0;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getName()));
                j++;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getStadiumName()));
                j++;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getSeatingCapacity()));
                j++;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getLocation()));
                j++;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getConference()));
                j++;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getSurfaceType()));
                j++;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getStadiumRoofType()));
                j++;

                ui->tableWidget_newStadiums->setItem(i, j, new QTableWidgetItem(newStadiums[i].getStarPlayer()));
            }
        }

        ui->tableWidget_newStadiums->setSortingEnabled(true);

        // Resizes the columns of the table widget.
        ui->tableWidget_newStadiums->resizeColumnsToContents();

        // Enables the reset button if the new stadiums have already
        // been added to the database.
        if(ui->tableWidget_newStadiums->rowCount() == 0)
        {
            ui->pushButton_reset->setEnabled(true);
        }
        else
        {
            ui->pushButton_reset->setEnabled(false);
        }
    }
        break;
    }
}

void AdminWindow::on_pushButton_addStadiums_clicked()
{
    if(ui->tableWidget_newStadiums->rowCount() == 0)
    {
        QMessageBox::critical(this, "Error", "There are no new stadiums to be added!");
    }
    else
    {
        // Returns a list of the new stadiums.
        QVector<Team> newStadiums = Database::getInstance()->returnNewStadiums();

        // Returns a list of the new stadiums' corresponding souvenirs.
        QVector<Souvenir> newSouvenirs = Database::getInstance()->returnNewSouvenirs();

        // Adds the new stadiums to the database.
        for(int i = 0; i < newStadiums.size(); i++)
        {
            if(!(Database::getInstance()->stadiumExists(newStadiums[i])))
            {
                Database::addStadium(newStadiums[i]);
            }
        }

        // Adds the new souvenirs to the database.
        for(int i = 0; i < newSouvenirs.size(); i++)
        {
            if(!(Database::getInstance()->souvenirExists(newSouvenirs[i])))
            {
                Database::addSouvenir(newSouvenirs[i]);
            }
        }

        // Refreshes the table.
        on_comboBox_adminFunctions_currentIndexChanged(1);
    }
}

void AdminWindow::on_pushButton_backAddStadiums_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_adminHome);

    ui->comboBox_adminFunctions->setCurrentIndex(0);

    ui->tableWidget_newStadiums->setRowCount(0);
}

void AdminWindow::on_pushButton_reset_clicked()
{
    // Returns a list of the new stadiums.
    QVector<Team> newStadiums = Database::getInstance()->returnNewStadiums();

    // Returns a list of the new stadiums' corresponding souvenirs.
    QVector<Souvenir> newSouvenirs = Database::getInstance()->returnNewSouvenirs();

    // Removes the new stadiums from the database.
    for(int i = 0; i < newStadiums.size(); i++)
    {
        Database::removeStadium(newStadiums[i]);
    }

    // Removes the new stadiums' souvenirs from the database.
    for(int i = 0; i < newSouvenirs.size(); i++)
    {
        Database::removeSouvenir(newSouvenirs[i]);
    }

    // Refreshes the table.
    on_comboBox_adminFunctions_currentIndexChanged(1);
}

#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "mainwindow.h"
#include "souvenir.h"

#include <QObject>
#include <QDebug>
#include <QSqlError>

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    // Always opens the adminwindow to the administrator homepage.
    ui->stackedWidget->setCurrentWidget(ui->page_adminHome);

    MainWindow *w = new MainWindow();
    w->connectToDatabase();
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

    case 2:
    {
        ui->stackedWidget->setCurrentIndex(2);
        populateBox_stadiumName();
    }
        break;

    case 3:
    {
        ui->stackedWidget->setCurrentIndex(3);
        QSqlQueryModel *mod = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery();
        qry->prepare("SELECT DISTINCT StadiumName FROM NFL_INFORMATION");
        qry->exec();
        mod->setQuery(*qry);
        ui->comboBox_stadiumList->setModel(mod);

        QSqlQueryModel *mod2 = new QSqlQueryModel();
        QSqlQuery *qry2 = new QSqlQuery();
        qry2->prepare("SELECT SouvenirName from NFL_SOUVENIRS where StadiumName ='"+ui->comboBox_stadiumList->currentText()+"'");
        qry2->exec();
        mod2->setQuery(*qry2);
        ui->comboBox_souvenirList->setModel(mod2);
    }
        break;

    case 4:
    {
        ui->stackedWidget->setCurrentIndex(4);
        QSqlQueryModel *mod = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery();
        qry->prepare("SELECT DISTINCT StadiumName FROM NFL_INFORMATION");
        qry->exec();
        mod->setQuery(*qry);
        ui->comboBox_stadiumList_2->setModel(mod);

        QSqlQueryModel *mod2 = new QSqlQueryModel();
        QSqlQuery *qry2 = new QSqlQuery();
        qry2->prepare("SELECT SouvenirName from NFL_SOUVENIRS where StadiumName ='"+ui->comboBox_stadiumList->currentText()+"'");
        qry2->exec();
        mod2->setQuery(*qry2);
        ui->comboBox_souvenirList_2->setModel(mod2);
    }
        break;

    case 5:
    {
        ui->stackedWidget->setCurrentIndex(5);
        QSqlQueryModel *mod = new QSqlQueryModel();
        QSqlQuery *qry = new QSqlQuery();
        qry->prepare("SELECT DISTINCT TeamName FROM NFL_INFORMATION");
        qry->exec();
        mod->setQuery(*qry);
        ui->comboBox_teamList->setModel(mod);
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

void AdminWindow::populateBox_stadiumName()
{
    QSqlQueryModel *mod = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();
    qry->prepare("SELECT DISTINCT StadiumName FROM NFL_INFORMATION");
    qry->exec();
    mod->setQuery(*qry);
    ui->comboBox_stadiumList->setModel(mod);
}

void AdminWindow::on_pushButton_confirmAdd_clicked()
{
    QString stadiumName = ui->comboBo_stadiumList->currentText();
    QString itemName = ui->lineEdit_itemName->text();
    double itemPrice = ui->doubleSpinBox_itemPrice->value();
    QString val = QString::number(itemPrice);

    QSqlQuery *add = new QSqlQuery();
    add->exec("INSERT into NFL_SOUVENIRS (StadiumName, SouvenirName, Price) values "
              "('"+stadiumName+"', '"+itemName+"', "+val+")");
    QTextStream(stdout) << "INSERT into NFL_SOUVENIRS (StadiumName, SouvenirName, Price) values "
                           "('"+stadiumName+"', '"+itemName+"', '"+val+"')";

    ui->label_status->show();
    ui->label_status->setText("SUCCESSFULLY ADDED");
}

void AdminWindow::on_pushButton_clearFields_clicked()
{
    ui->comboBo_stadiumList->setCurrentIndex(0);
    ui->lineEdit_itemName->clear();
    ui->doubleSpinBox_itemPrice->setValue(0);
    ui->label_status->hide();
}

void AdminWindow::on_comboBox_stadiumList_currentTextChanged(const QString &arg1)
{
    QSqlQueryModel *mod2 = new QSqlQueryModel();
    QSqlQuery *qry2 = new QSqlQuery();
    qry2->prepare("SELECT SouvenirName from NFL_SOUVENIRS where StadiumName ='"+arg1+"'");
    qry2->exec();
    mod2->setQuery(*qry2);
    ui->comboBox_souvenirList->setModel(mod2);
}

void AdminWindow::on_comboBox_stadiumList_2_currentTextChanged(const QString &arg2)
{
    QSqlQueryModel *mod3 = new QSqlQueryModel();
    QSqlQuery *qry3 = new QSqlQuery();
    qry3->prepare("SELECT SouvenirName from NFL_SOUVENIRS where StadiumName ='"+arg2+"'");
    qry3->exec();
    mod3->setQuery(*qry3);
    ui->comboBox_souvenirList_2->setModel(mod3);
}

// Modify Souvenirs Confirm Button

void AdminWindow::on_confirmModify_clicked()
{
    Souvenir souvenir1;
    QString stadiumName = ui->comboBox_stadiumList_2->currentText();
    QString souvenirName = ui->comboBox_souvenirList_2->currentText();
    QString souvenirPrice = ui->lineEdit_souvenirPrice->text();
    double val = souvenirPrice.toDouble();

    souvenir1.setName(souvenirName);
    souvenir1.setStadiumName(stadiumName);

    // Send to GLORIOUS FUNCTION NOT MADE BY MYSELF
    Database::editSouvenirPrice(souvenir1, val);

    qDebug() << "Modified souvenir successful";
    ui->label_status_2->show();
    ui->label_status_2->setText("SUCCESSFULLY MODIFIED");
}

void AdminWindow::on_confirmModifyStadiums_clicked()
{
    QString teamName = ui->comboBox_teamList->currentText();
    QString newStadiumName = ui->lineEdit_stadiumName->text();
    QString newSeatingCapacity = ui->lineEdit_stadiumSeatingCapacity->text();
    QString newLocation = ui->lineEdit_stadiumLocation->text();
    QString newSurfaceType = ui->lineEdit_stadiumSurfaceType->text();
    QString newRoofType = ui->lineEdit_stadiumRoofType->text();

    if (!newStadiumName.isEmpty()) {
        ui->label_stadiumNameModified->setText("Modified");
        Database::editStadium(teamName,"StadiumName",newStadiumName);
    }
    if (!newSeatingCapacity.isEmpty()) { // we should also check if it matches the current one
        ui->label_seatingCapacityModified->setText("Modified");
        Database::editStadium(teamName,"SeatingCapacity",newStadiumName);
    }
    if (!newLocation.isEmpty()) {
        ui->label_locationModified->setText("Modified");
        Database::editStadium(teamName,"Location",newStadiumName);
    }
    if (!newSurfaceType.isEmpty()) {
        ui->label_surfaceTypeModified->setText("Modified");
        Database::editStadium(teamName,"SurfaceType",newStadiumName);
    }
    if (!newRoofType.isEmpty()) {
        ui->label_roofTypeModified->setText("Modified");
        Database::editStadium(teamName,"RoofType",newStadiumName);
    }


    /*double val = souvenirPrice.toDouble();

    souvenir1.setName(souvenirName);
    souvenir1.setStadiumName(stadiumName);

    // Send to GLORIOUS FUNCTION NOT MADE BY MYSELF
    Database::editSouvenirPrice(souvenir1, val);

    qDebug() << "Modified souvenir successful";
    ui->label_status_2->show();
    ui->label_status_2->setText("SUCCESSFULLY MODIFIED");*/
}

/*************************
 * BACK BUTTON FUNCTIONS *
 *************************/
void AdminWindow::backToAdminHome()
{
    ui->stackedWidget->setCurrentWidget(ui->page_adminHome);

    ui->comboBox_adminFunctions->setCurrentIndex(0);

    ui->tableWidget_newStadiums->setRowCount(0);
}

void AdminWindow::on_pushButton_backAddStadiums_clicked()
{
    backToAdminHome();
}

void AdminWindow::on_pushButton_backAddSouvenirs_clicked()
{
    backToAdminHome();
}

void AdminWindow::on_pushButton_backDeleteSouvenirs_clicked()
{
    backToAdminHome();
}

void AdminWindow::on_pushButton_backModifySouvenirs_clicked()
{
    backToAdminHome();
}

void AdminWindow::on_pushButton_backModifyStadiums_clicked()
{
    backToAdminHome();
}


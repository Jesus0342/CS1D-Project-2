#include "startatfordfield.h"
#include "ui_startatfordfield.h"
#include "mainwindow.h"
#include "buysouvenir.h"
#include "QSqlQuery"
#include "QTextStream"

startAtFordField::startAtFordField(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::startAtFordField)
{
    ui->setupUi(this);
    MainWindow *w = new MainWindow();
    w->connectToDatabase();
    populateTable();
}

startAtFordField::~startAtFordField()
{
    delete ui;
}

void startAtFordField::populateTable()
{
//use shortest distance or use sql statement to populate.
//imma use sql statement for now
    QStringList colNames= {"Ending Route", "Distance"};
    ui->tableWidget_listPossibilities->setColumnCount(2);
    ui->tableWidget_listPossibilities->setHorizontalHeaderLabels(colNames);
    QSqlQuery query;
    query.exec("//waiting for distances table//");
    ui->tableWidget_listPossibilities->setRowCount(0);
    int i=0;
    while(query.next())
    {
        ui->tableWidget_listPossibilities->insertRow(i);
        ui->tableWidget_listPossibilities->setItem(i,0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget_listPossibilities->setItem(i,1, new QTableWidgetItem(query.value(1).toString()));
        i++;
    }

//heres a code to populate the list- to be used in buy souvenirs.
//I need to modify this to display souv for only the use selected places.
   QSqlQuery q;
   q.exec("select TeamName from NFL_INFORMATION where TeamName != 'Detroit Lions'");
   QString addThis;
   int j =0;
   while(q.next()) {
       addThis= q.value(0).toString();
       teamName.append(addThis);
       QTextStream(stdout) << addThis;
       j++;
   }

}

void startAtFordField::on_pushButton_buySouvenirs_clicked()
{
    buySouvenir *s = new buySouvenir();

    //Shows buy souvenir window
    s->show();

    //FordField = detriot Lions
    s->setData("Detroit Lions", teamName);
    s->populateDropdown();
}

#include "startlosangeles.h"
#include "ui_startlosangeles.h"
#include "buysouvenir.h"
#include "mainwindow.h"
#include "graph.h"
#include "QTextStream"
#include "QSqlQuery"

startlosangeles::startlosangeles(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::startlosangeles)
{
    ui->setupUi(this);

    MainWindow *w = new MainWindow();
    w->connectToDatabase();
    populateCombobox();

    count =0;
}

void startlosangeles::populateCombobox()
{
    QVector<QString> v;
    Graph g;

    int dist = g.DFS("Los Angeles Memorial Coliseum", v);

    ui->comboBox_listofstadiums->addItems(v.toList());
}


void startlosangeles::on_pushButton_visit_clicked()
{
    QString visit = ui->comboBox_listofstadiums->currentText();
    QString team;

    QStringList colNames= {"Ending Stadium", "Team Name"};
    ui->tableWidget_routes->setColumnCount(2);
    ui->tableWidget_routes->setHorizontalHeaderLabels(colNames);

    QTableWidgetItem *kk = new QTableWidgetItem();
    kk->setText(visit);
    ui->tableWidget_routes->insertRow(count);
    ui->tableWidget_routes->setItem(count, 0, kk);

    QSqlQuery qry;
    qry.exec("select TeamName from NFL_INFORMATION where StadiumName='"+visit+"'");

    int p = 0;
    while(qry.next())
    {
        team = qry.value(0).toString();
        if(team!="Los Angeles Rams")
        {
            teamNames.append(team);
        }
        QTableWidgetItem *tn = new QTableWidgetItem();
        tn->setText(team);
        ui->tableWidget_routes->setItem(count, 1, tn);
        p++;

    }

    count++;

    //if selected, remove from combobox
    int remove = ui->comboBox_listofstadiums->currentIndex();
    ui->comboBox_listofstadiums->removeItem(remove);

    //if combo box empty, disable visit
    if (ui->comboBox_listofstadiums->count()==0)
    {
        ui->pushButton_visit->setEnabled(false);
    }

}

startlosangeles::~startlosangeles()
{
    delete ui;
}

void startlosangeles::on_pushButton_buySouv_clicked()
{
    QList<QString> routes;

    for (int j=0; j<ui->tableWidget_routes->rowCount(); j++)
    {
        QTableWidgetItem *current = ui->tableWidget_routes->item(j,0);
        routes.append(current->text());
    }

    buySouvenir *b = new buySouvenir();
    b->show();

    b->setData("Los Angeles Rams", teamNames);
    b->populateDropdown();

}

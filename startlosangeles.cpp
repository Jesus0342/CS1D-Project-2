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


    //background
    QPixmap bg("Resources/bg4.jpg");
    bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bg);
    this->setPalette(palette);

    MainWindow *w = new MainWindow();
    w->connectToDatabase();
    populateCombobox();

    count =0;

    ui->pushButton_buySouv->setEnabled(false);
}

void startlosangeles::populateCombobox()
{
    Graph g;
    QVector<QString> stadiumNames;

    // Returns a list of stadiums in the database.
    g.DFS("Hard Rock Stadium", stadiumNames);

    QVector<QString>::iterator it = std::find(stadiumNames.begin(), stadiumNames.end(), "Los Angeles Memorial Coliseum");

    stadiumNames.erase(it);

    ui->comboBox_listofstadiums->addItems(stadiumNames.toList());
}

void startlosangeles::on_pushButton_visit_clicked()
{
    ui->pushButton_buySouv->setEnabled(true);

    teamNames.clear();

    // Stadium that will be visited.
    QString visit = ui->comboBox_listofstadiums->currentText();

    QString team;

    QVector<QString> T;
    Graph g;

    int costs[g.size()];
    int parents[g.size()];

    g.shortestPathsDijkstra("Los Angeles Memorial Coliseum", T, costs, parents);

    ui->lcdNumber->display(costs[g.findVertex(visit)]);

//    QStringList colNames= {"Ending Stadium", "Team Name"};
//    ui->tableWidget_routes->setColumnCount(2);
//    ui->tableWidget_routes->setHorizontalHeaderLabels(colNames);

//    QTableWidgetItem *kk = new QTableWidgetItem();
//    kk->setText(visit);
//    ui->tableWidget_routes->insertRow(count);
//    ui->tableWidget_routes->setItem(count, 0, kk);

    QSqlQuery qry;
    qry.exec("select TeamName from NFL_INFORMATION where StadiumName='"+visit+"'");

    while(qry.next())
    {
        team = qry.value(0).toString();

        if(team!="Los Angeles Rams")
        {
            teamNames.append(team);
        }
//        QTableWidgetItem *tn = new QTableWidgetItem();
//        tn->setText(team);
//        ui->tableWidget_routes->setItem(count, 1, tn);
//        p++;

    }

//    count++;

//    //if selected, remove from combobox
//    int remove = ui->comboBox_listofstadiums->currentIndex();
//    ui->comboBox_listofstadiums->removeItem(remove);

//    //if combo box empty, disable visit
//    if (ui->comboBox_listofstadiums->count()==0)
//    {
//        ui->pushButton_visit->setEnabled(false);
//    }
}

startlosangeles::~startlosangeles()
{
    delete ui;
}

void startlosangeles::on_pushButton_buySouv_clicked()
{
    buySouvenir *b = new buySouvenir();
    b->show();

    b->setData("Los Angeles Rams", teamNames);
    b->populateDropdown();
}

void startlosangeles::on_pushButton_back_clicked()
{
    this->close();
}

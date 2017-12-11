#include "startatfordfield.h"
#include "ui_startatfordfield.h"
#include "mainwindow.h"
#include "buysouvenir.h"
#include "QSqlQuery"
#include "QTextStream"
#include "QVector"
#include "graph.h"

startAtFordField::startAtFordField(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::startAtFordField)
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

    ui->pushButton_buySouvenirs->setEnabled(false);
}

startAtFordField::~startAtFordField()
{
    delete ui;
}

void startAtFordField::populateTable()
{
//use shortest distance -- DFS or BFS? Djikarta's algorithm?
                                     //(I don't know how to spell..)
    QStringList colNames= {"Ending Route"};
    ui->tableWidget_routes->setColumnCount(1);
    ui->tableWidget_routes->setHorizontalHeaderLabels(colNames);
    ui->tableWidget_routes->setRowCount(0);
    QVector<QString> v;
    Graph g;

    int dist = g.DFS("Ford Field", v);
    ui->lcdNumber_distanceTravelled->display(dist);

    for (int j = 0; j<v.size(); j++)
    {
        QString add = v.at(j);
        QTableWidgetItem *kk = new QTableWidgetItem();
        kk->setText(add);
        ui->tableWidget_routes->insertRow(j);
        ui->tableWidget_routes->setItem(j, 0, kk);
    }

    ui->pushButton_buySouvenirs->setEnabled(true);

}

void startAtFordField::on_pushButton_buySouvenirs_clicked()
{
/****************************************************************************/
//heres a code to populate the list- to be used in buy souvenirs.
   QSqlQuery q;
   q.exec("select TeamName from NFL_INFORMATION where TeamName != 'Detroit Lions'");
   QString addThis;
   int j =0;
   while(q.next()) {
       addThis= q.value(0).toString();
       teamName.append(addThis);
       j++;
   }

    buySouvenir *s = new buySouvenir();

    //Shows buy souvenir window
    s->show();

    //FordField = detriot Lions
    s->setData("Detroit Lions", teamName);
    s->populateDropdown();
}

void startAtFordField::on_pushButton_seePrefRoute_clicked()
{
    populateTable();
}

void startAtFordField::on_pushButton_buySouvenirs_2_clicked()
{
    this->close();
}

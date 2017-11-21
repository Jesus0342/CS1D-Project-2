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
    populateTable();
}

startAtFordField::~startAtFordField()
{
    delete ui;
}

void startAtFordField::populateTable()
{
//use shortest distance -- DFS or BFS? Djikarta's algorithm?
                                     //(I don't know how to spell..)
    QStringList colNames= {"Ending Route", "Distance"};
    ui->tableWidget_listPossibilities->setColumnCount(2);
    ui->tableWidget_listPossibilities->setHorizontalHeaderLabels(colNames);

    //DepthFirstSearch("Ford Field"); (starting at Ford Field)
//have a vector that will store all the stadiums in order after DFS.
    QVector<QString> v;
//add all items from vector to the table widget. should I use table view? list view?
    //ui->tableWidget_listPossibilities->setItem(r,c,<item>);

    Graph g;

    int dist = g.DFS("Ford Field", v);
    //int k = g.findVertex("Ford Field");

//    for (int j = 0; j < v.size(); j++){
//        QTextStream(stdout) << "OMFG" << v.at(j);
//    }



/****************************************************************************/
//heres a code to populate the list- to be used in buy souvenirs.
//I need to modify this to display souv for only the use selected places.
   QSqlQuery q;
   q.exec("select TeamName from NFL_INFORMATION where TeamName != 'Detroit Lions'");
   QString addThis;
   int j =0;
   while(q.next()) {
       addThis= q.value(0).toString();
       teamName.append(addThis);
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

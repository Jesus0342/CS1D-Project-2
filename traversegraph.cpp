#include "traversegraph.h"
#include "ui_traversegraph.h"
#include "database.h"
#include "mainwindow.h"
#include "graph.h"

#include <QDebug>

traversegraph::traversegraph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::traversegraph)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->page_home);

    Database::getInstance()->returnGraphEdges();
}

traversegraph::~traversegraph()
{
    delete ui;
}

void traversegraph::on_comboBox_currentIndexChanged(int index)
{
    Graph g;

    switch(index)
    {
    case 1 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_MST);

        // QVector storing the order that the vertices were discovered in.
        QVector<QString> mst;

        int mstMileage = g.primJarnikMST("Hard Rock Stadium", mst);

        int numCols = ui->tableWidget_MST->columnCount();

        // Displays the order that the vertices were discovered in while determining the MST.
        for(int i = 0; i < mst.size(); i++)
        {
            for(int j = 0; j < numCols; j++)
            {
                ui->tableWidget_MST->insertRow(ui->tableWidget_MST->rowCount());

                ui->tableWidget_MST->setItem(i, j, new QTableWidgetItem(mst.at(i)));
                j++;
            }
        }

        ui->tableWidget_MST->resizeColumnsToContents();

        QString mstMileStr = addCommas(mstMileage);

        // Converts the total seating capacity into a string and puts it in the total open roof label.
        ui->label_distanceMST->setText("Total Distance Traveled: " + mstMileStr + " mi");

        // Changes the font in the totalRoofTxt label.
        QFont font = ui->label_distanceMST->font();
        font.setPointSize(12);
        font.setBold(true);

        // Sets the font.
        ui->label_distanceMST->setFont(font);

        // Sets the alignment of the label.
        ui->label_distanceMST->setAlignment(Qt::AlignCenter);
    }
        break;
    case 2 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_DFS);

        QVector<QString> dfs;

        // Performs a DFS starting at Hard Rock Stadium and returns the total distance.
        int dfsDistance = g.DFS("Hard Rock Stadium", dfs);

        int numCols = ui->tableWidget_DFS->columnCount();

        // Displays the order that the vertices were visited in while performing the DFS.
        for(int i = 0; i < dfs.size(); i++)
        {
            for(int j = 0; j < numCols; j++)
            {
                ui->tableWidget_DFS->insertRow(ui->tableWidget_DFS->rowCount());

                ui->tableWidget_DFS->setItem(i, j, new QTableWidgetItem(dfs.at(i)));
                j++;
            }
        }

        ui->tableWidget_DFS->resizeColumnsToContents();

        QString dfsDistStr = addCommas(dfsDistance);

        // Converts the total seating capacity into a string and puts it in the total open roof label.
        ui->label_distanceDFS->setText("Total Distance Traveled: " + dfsDistStr + " mi");

        // Changes the font in the totalRoofTxt label.
        QFont font = ui->label_distanceDFS->font();
        font.setPointSize(12);
        font.setBold(true);

        // Sets the font.
        ui->label_distanceDFS->setFont(font);

        // Sets the alignment of the label.
        ui->label_distanceDFS->setAlignment(Qt::AlignCenter);
    }
        break;
    case 3 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_BFS);

        QVector<QString> bfs;

        int bfsDistance = g.BFS("Lambeau Field", bfs);

        int numCols = ui->tableWidget_BFS->columnCount();

        // Sets the information for all teams on the table widget.
        for(int i = 0; i < bfs.size(); i++)
        {
            for(int j = 0; j < numCols; j++)
            {
                ui->tableWidget_BFS->insertRow(ui->tableWidget_BFS->rowCount());

                ui->tableWidget_BFS->setItem(i, j, new QTableWidgetItem(bfs.at(i)));
                j++;
            }
        }

        ui->tableWidget_BFS->resizeColumnsToContents();

        QString bfsDistStr = addCommas(bfsDistance);

        // Converts the total seating capacity into a string and puts it in the total open roof label.
        ui->label_distanceBFS->setText("Total Distance Traveled: " + bfsDistStr + " mi");

        // Changes the font in the totalRoofTxt label.
        QFont font = ui->label_distanceBFS->font();
        font.setPointSize(12);
        font.setBold(true);

        // Sets the font.
        ui->label_distanceBFS->setFont(font);

        // Sets the alignment of the label.
        ui->label_distanceBFS->setAlignment(Qt::AlignCenter);
    }
    }
}

/*************************
 * BACK BUTTON FUNCTIONS *
 *************************/

void traversegraph::on_pushButton_backGraph_clicked()
{
    // Shows the homepage.
    MainWindow *mainWindow = new MainWindow;

    mainWindow->show();

    this->close();
}

void traversegraph::on_pushButton_backMST_clicked()
{
    ui->comboBox->setCurrentIndex(0);

    ui->stackedWidget->setCurrentWidget(ui->page_home);

    ui->tableWidget_MST->setRowCount(0);
}

void traversegraph::on_pushButton_backDFS_clicked()
{
    on_pushButton_backMST_clicked();

    ui->tableWidget_DFS->setRowCount(0);
}

void traversegraph::on_pushButton_backBFS_clicked()
{
    on_pushButton_backMST_clicked();

    ui->tableWidget_BFS->setRowCount(0);
}

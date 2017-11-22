#include "traversegraph.h"
#include "ui_traversegraph.h"
#include "mainwindow.h"
#include "graph.h"

traversegraph::traversegraph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::traversegraph)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentWidget(ui->page_home);
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
    }
        break;
    case 2 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_DFS);

        QVector<QString> dfs;

        int dfsDistance = g.DFS("Hard Rock Stadium", dfs);

        int numCols = ui->tableWidget_DFS->columnCount();

        // Sets the information for all teams on the table widget.
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
        ui->label_distanceDFS->setText("Total Distance Traveled: " + dfsDistStr);

        // Changes the font in the totalRoofTxt label.
        QFont font = ui->label_distanceDFS->font();
        font.setPointSize(12);
        font.setBold(true);

        // Sets the font.
        ui->label_distanceDFS->setFont(font);

        // Sets the font.
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
        ui->label_distanceBFS->setText("Total Distance Traveled: " + bfsDistStr);

        // Changes the font in the totalRoofTxt label.
        QFont font = ui->label_distanceBFS->font();
        font.setPointSize(12);
        font.setBold(true);

        // Sets the font.
        ui->label_distanceBFS->setFont(font);

        // Sets the font.
        ui->label_distanceBFS->setAlignment(Qt::AlignCenter);
    }
    }
}

void traversegraph::on_pushButton_backMST_clicked()
{
    ui->comboBox->setCurrentIndex(0);

    ui->stackedWidget->setCurrentWidget(ui->page_home);
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

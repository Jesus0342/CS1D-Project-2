#include "traversegraph.h"
#include "ui_traversegraph.h"

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
    }
        break;
    case 3 :
    {
        ui->stackedWidget->setCurrentWidget(ui->page_BFS);
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
}

void traversegraph::on_pushButton_backBFS_clicked()
{
    on_pushButton_backMST_clicked();
}

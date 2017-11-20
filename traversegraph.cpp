#include "traversegraph.h"
#include "ui_traversegraph.h"

TraverseGraph::traversegraph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::traversegraph)
{
    ui->setupUi(this);


}

TraverseGraph::~traversegraph()
{
    delete ui;
}

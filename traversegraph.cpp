#include "traversegraph.h"
#include "ui_traversegraph.h"

traversegraph::traversegraph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::traversegraph)
{
    ui->setupUi(this);


}

traversegraph::~traversegraph()
{
    delete ui;
}

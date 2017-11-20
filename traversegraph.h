#ifndef TRAVERSEGRAPH_H
#define TRAVERSEGRAPH_H

#include <QDialog>

namespace Ui {
class TraverseGraph;
}

class TraverseGraph : public QDialog
{
    Q_OBJECT

public:
    explicit TraverseGraph(QWidget *parent = 0);
    ~TraverseGraph();

private:
    Ui::TraverseGraph *ui;
};

#endif // TRAVERSEGRAPH_H

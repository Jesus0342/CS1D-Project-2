#ifndef TRAVERSEGRAPH_H
#define TRAVERSEGRAPH_H

#include <QDialog>

namespace Ui {
class traversegraph;
}

class traversegraph : public QDialog
{
    Q_OBJECT

public:
    explicit traversegraph(QWidget *parent = 0);
    ~traversegraph();

private:
    Ui::traversegraph *ui;
};

#endif // TRAVERSEGRAPH_H

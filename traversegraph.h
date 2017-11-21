#ifndef traversegraph_H
#define traversegraph_H

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

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_backMST_clicked();

    void on_pushButton_backDFS_clicked();

    void on_pushButton_backBFS_clicked();

private:
    Ui::traversegraph *ui;
};

#endif // traversegraph_H

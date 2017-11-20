#ifndef STARTATFORDFIELD_H
#define STARTATFORDFIELD_H

#include <QMainWindow>

namespace Ui {
class startAtFordField;
}

class startAtFordField : public QMainWindow
{
    Q_OBJECT

public:
    explicit startAtFordField(QWidget *parent = 0);
    void populateTable();
    ~startAtFordField();

private slots:
    void on_pushButton_buySouvenirs_clicked();
private:
    Ui::startAtFordField *ui;
    QList<QString> teamName;
};

#endif // STARTATFORDFIELD_H

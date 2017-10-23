#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboBox_selectAction_currentIndexChanged(int index);

    void on_pushButton_backViewNFLInfo_clicked();

    void on_pushButton_backViewTeamInfo_clicked();

    void on_comboBox_selectTeamInfo_currentIndexChanged(int index);

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

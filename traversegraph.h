#ifndef traversegraph_H
#define traversegraph_H

#include <QDialog>

namespace Ui {
class traversegraph;
}

/**
 * @brief TraverseGraph Class
 *
 * This class provides a window that allows the fan to view the MST, DFS (starting from
 * Hard Rock Stadium), and BFS (starting from Lambeau Field) of the map of stadiums.
 */
class traversegraph : public QDialog
{
    Q_OBJECT

public:
    explicit traversegraph(QWidget *parent = 0);
    ~traversegraph();

private slots:
    /***********************
     * COMBO BOX FUNCTIONS *
     ***********************/

    /**
     * @brief on_comboBox_currentIndexChanged takes the fan to the selected traversal page.
     * @param index - Selected index of the combo box.
     */
    void on_comboBox_currentIndexChanged(int index);

    /*************************
     * BACK BUTTON FUNCTIONS *
     *************************/

    /**
     * @brief on_pushButton_backGraph_clicked returns to homepage.
     */
    void on_pushButton_backGraph_clicked();

    /**
     * @brief on_pushButton_backMST_clicked returns to the Traverse Graph homepage.
     */
    void on_pushButton_backMST_clicked();

    /**
     * @brief on_pushButton_backMST_clicked returns to the Traverse Graph homepage.
     */
    void on_pushButton_backDFS_clicked();

    /**
     * @brief on_pushButton_backMST_clicked returns to the Traverse Graph homepage.
     */
    void on_pushButton_backBFS_clicked();


private:
    Ui::traversegraph *ui;
};

#endif // traversegraph_H

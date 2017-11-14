#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "database.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = 0);
    ~AdminWindow();

private slots:
    /***********************
     * COMBO BOX FUNCTIONS *
     ***********************/

    /**
     * @brief on_comboBox_adminFunctions_currentIndexChanged takes the administrator to the
     * window for the administrator function that they would like to use.
     * @param index
     */
    void on_comboBox_adminFunctions_currentIndexChanged(int index);

    /*************************
     * PUSH BUTTON FUNCTIONS *
     *************************/

    /**
     * @brief on_pushButton_addStadiums_clicked takes the administrator to the "Add Stadiums" page
     * and displays the stadiums available to be added.
     */
    void on_pushButton_addStadiums_clicked();

    /**
     * @brief on_pushButton_reset_clicked resets the database by removing the newly added
     * stadiums and souvenirs.
     */
    void on_pushButton_reset_clicked();

    /**
     * @brief on_pushButton_backAddStadiums_clicked returns to the Administrator homepage.
     */
    void on_pushButton_backAddStadiums_clicked();

    /**
     * @brief on_pushButton_logout_clicked logs out of the Administrator account and
     * returns to the homepage.
     */
    void on_pushButton_logout_clicked();

    void populateBox_stadiumName();

    void on_pushButton_confirmAdd_clicked();

    void on_pushButton_clearFields_clicked();

    void on_comboBox_stadiumList_currentTextChanged(const QString &arg1);

private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H

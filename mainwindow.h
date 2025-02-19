#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "login.h"

namespace Ui {
class MainWindow;
}

/**
 * @brief MainWindow Class
 *
 * This class provides the fan or administrator with the ability to
 * navigate the various features of the program including: viewing
 * NFL information, planning a trip, or editing team/souvenir information.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Class Constructor
     */
    explicit MainWindow(QWidget *parent = 0);
    void connectToDatabase();
    ~MainWindow();


private slots:
    /***********************
     * COMBO BOX FUNCTIONS *
     ***********************/

    /**
     * @brief Allows the fan to view NFL information or plan a trip.
     * @param index - Selected action
     */
    void on_comboBox_selectAction_currentIndexChanged(int index);

    /**
     * @brief Allows the fan to view specific NFL information.
     * @param index - Selected display option
     */
    void on_comboBox_displayOptions_currentIndexChanged(int index);

    /**
     * @brief Shows the fan the information for a selected NFL team.
     * @param arg1 - Selected NFL team name.
     */
    void on_comboBox_selectTeam_currentIndexChanged(const QString &arg1);

    /*************************
     * BACK BUTTON FUNCTIONS *
     *************************/

    /**
     * @brief Returns the fan to the homepage.
     */
    void on_pushButton_backViewNFLInfo_clicked();

    /**
     * @brief Returns the fan to the NFL Information page.
     */
    void on_pushButton_backViewTeamInfo_clicked();

    /**
     * @brief Returns the fan to the NFL Information page.
     */
    void on_pushButton_backConferences_clicked();

    /**
     * @brief Returns the fan to the NFL Information page.
     */
    void on_pushButton_backRoofs_clicked();

    /**
     * @brief Returns the fan to the NFL Information page.
     */
    void on_pushButton_backSeatingCapacity_clicked();

    /**
     * @brief Returns the fan to the NFL Information page.
     */
    void on_pushButton_backViewSouvenirs_clicked();


    /***********************
     * CHECK BOX FUNCTIONS *
     ***********************/

    /**
     * @brief Displays the teams in the American Football Conference if checked
     * @param checked - Whether or not the checkbox is checked.
     */
    void on_checkBox_americanConference_toggled(bool checked);

    /**
     * @brief Displays the teams in the National Football Conference if checked
     * @param checked - Whether or not the checkbox is checked.
     */
    void on_checkBox_nationalConference_toggled(bool checked);

    void on_pushButton_backViewTeams_clicked();
    void starPlayers_loadTable(QString team);
    void on_comboBox_starPlayer_currentIndexChanged(const QString &arg1);
    void on_radioButton_starPlayer_all_clicked();

    void on_radioButton_starPlayer_filter_clicked();

    void on_pushButton_starPlayers_backMenu_clicked();

    void on_pushButton_backViewStadiums_clicked();

    void on_pushButton_getFixedRoofs_clicked();

    void on_pushButton_getOpenRoofs_clicked();

    void on_pushButton_getRetraRoofs_clicked();

    void on_pushButton_backSurfaceType_clicked();

    /**
     * @brief on_pushButton_login_clicked launches the login window.
     */
    void on_pushButton_login_clicked();

    void on_tableWidget_stadiums_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;

    void setRoofTable (QString roofType);
};

template <class T>
QString addCommas(T number)
{
    QString numStr = QString::number(number);

    if(numStr.size() > 3)
    {
        int count = 1;

        // Adds commas to the number to increase readability.
        for(int i = numStr.size(); i > 0; i--)
        {
            if(count == 3)
            {
                numStr.insert(i - 1, ',');

                count = 1;
            }
            else
            {
                count++;
            }
        }
    }

    return numStr;
}

#endif // MAINWINDOW_H

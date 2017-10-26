/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_home;
    QLabel *label_home;
    QComboBox *comboBox_selectAction;
    QWidget *page_viewNFLInfo;
    QComboBox *comboBox_displayOptions;
    QPushButton *pushButton_backViewNFLInfo;
    QLabel *label_viewNFLInfo;
    QLabel *label_NFLInfoPrompt;
    QWidget *page_viewTeamInfo;
    QTableWidget *tableWidget_teamInfo;
    QPushButton *pushButton_backViewTeamInfo;
    QComboBox *comboBox_selectTeam;
    QLabel *label_TeamInfoTitle;
    QLabel *label_teamInfoPrompt;
    QWidget *page_viewTeams;
    QLabel *label_viewTeamsTitle;
    QWidget *page_viewStadiums;
    QLabel *label_viewStadiumsTitle;
    QWidget *page_viewConferences;
    QLabel *label_ConferencesTitle;
    QTableWidget *tableWidget_conferences;
    QPushButton *pushButton_backConferences;
    QCheckBox *checkBox_americanConference;
    QCheckBox *checkBox_nationalConference;
    QWidget *page_viewOpenRoof;
    QLabel *label_OpenRoofTitle;
    QWidget *page_viewStarPlayers;
    QLabel *label_starPlayersTitle;
    QWidget *page_viewSeatingCapacity;
    QLabel *label_seatingCapacityTitle;
    QWidget *page_viewSurfaceType;
    QLabel *label_viewTeamInfo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(651, 586);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_home = new QWidget();
        page_home->setObjectName(QStringLiteral("page_home"));
        label_home = new QLabel(page_home);
        label_home->setObjectName(QStringLiteral("label_home"));
        label_home->setGeometry(QRect(180, 10, 271, 91));
        comboBox_selectAction = new QComboBox(page_home);
        comboBox_selectAction->setObjectName(QStringLiteral("comboBox_selectAction"));
        comboBox_selectAction->setGeometry(QRect(220, 410, 191, 22));
        stackedWidget->addWidget(page_home);
        page_viewNFLInfo = new QWidget();
        page_viewNFLInfo->setObjectName(QStringLiteral("page_viewNFLInfo"));
        comboBox_displayOptions = new QComboBox(page_viewNFLInfo);
        comboBox_displayOptions->setObjectName(QStringLiteral("comboBox_displayOptions"));
        comboBox_displayOptions->setGeometry(QRect(210, 150, 181, 22));
        pushButton_backViewNFLInfo = new QPushButton(page_viewNFLInfo);
        pushButton_backViewNFLInfo->setObjectName(QStringLiteral("pushButton_backViewNFLInfo"));
        pushButton_backViewNFLInfo->setGeometry(QRect(10, 480, 75, 23));
        label_viewNFLInfo = new QLabel(page_viewNFLInfo);
        label_viewNFLInfo->setObjectName(QStringLiteral("label_viewNFLInfo"));
        label_viewNFLInfo->setGeometry(QRect(30, 10, 561, 91));
        label_NFLInfoPrompt = new QLabel(page_viewNFLInfo);
        label_NFLInfoPrompt->setObjectName(QStringLiteral("label_NFLInfoPrompt"));
        label_NFLInfoPrompt->setGeometry(QRect(150, 110, 311, 21));
        stackedWidget->addWidget(page_viewNFLInfo);
        page_viewTeamInfo = new QWidget();
        page_viewTeamInfo->setObjectName(QStringLiteral("page_viewTeamInfo"));
        tableWidget_teamInfo = new QTableWidget(page_viewTeamInfo);
        if (tableWidget_teamInfo->columnCount() < 8)
            tableWidget_teamInfo->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_teamInfo->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_teamInfo->setObjectName(QStringLiteral("tableWidget_teamInfo"));
        tableWidget_teamInfo->setGeometry(QRect(21, 80, 591, 311));
        pushButton_backViewTeamInfo = new QPushButton(page_viewTeamInfo);
        pushButton_backViewTeamInfo->setObjectName(QStringLiteral("pushButton_backViewTeamInfo"));
        pushButton_backViewTeamInfo->setGeometry(QRect(10, 480, 75, 23));
        comboBox_selectTeam = new QComboBox(page_viewTeamInfo);
        comboBox_selectTeam->setObjectName(QStringLiteral("comboBox_selectTeam"));
        comboBox_selectTeam->setGeometry(QRect(210, 440, 221, 22));
        label_TeamInfoTitle = new QLabel(page_viewTeamInfo);
        label_TeamInfoTitle->setObjectName(QStringLiteral("label_TeamInfoTitle"));
        label_TeamInfoTitle->setGeometry(QRect(80, 10, 481, 51));
        label_teamInfoPrompt = new QLabel(page_viewTeamInfo);
        label_teamInfoPrompt->setObjectName(QStringLiteral("label_teamInfoPrompt"));
        label_teamInfoPrompt->setGeometry(QRect(150, 410, 331, 20));
        stackedWidget->addWidget(page_viewTeamInfo);
        page_viewTeams = new QWidget();
        page_viewTeams->setObjectName(QStringLiteral("page_viewTeams"));
        label_viewTeamsTitle = new QLabel(page_viewTeams);
        label_viewTeamsTitle->setObjectName(QStringLiteral("label_viewTeamsTitle"));
        label_viewTeamsTitle->setGeometry(QRect(80, 10, 481, 51));
        stackedWidget->addWidget(page_viewTeams);
        page_viewStadiums = new QWidget();
        page_viewStadiums->setObjectName(QStringLiteral("page_viewStadiums"));
        label_viewStadiumsTitle = new QLabel(page_viewStadiums);
        label_viewStadiumsTitle->setObjectName(QStringLiteral("label_viewStadiumsTitle"));
        label_viewStadiumsTitle->setGeometry(QRect(80, 10, 481, 51));
        stackedWidget->addWidget(page_viewStadiums);
        page_viewConferences = new QWidget();
        page_viewConferences->setObjectName(QStringLiteral("page_viewConferences"));
        label_ConferencesTitle = new QLabel(page_viewConferences);
        label_ConferencesTitle->setObjectName(QStringLiteral("label_ConferencesTitle"));
        label_ConferencesTitle->setGeometry(QRect(70, 10, 491, 51));
        tableWidget_conferences = new QTableWidget(page_viewConferences);
        if (tableWidget_conferences->columnCount() < 2)
            tableWidget_conferences->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_conferences->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_conferences->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        tableWidget_conferences->setObjectName(QStringLiteral("tableWidget_conferences"));
        tableWidget_conferences->setGeometry(QRect(150, 80, 341, 311));
        pushButton_backConferences = new QPushButton(page_viewConferences);
        pushButton_backConferences->setObjectName(QStringLiteral("pushButton_backConferences"));
        pushButton_backConferences->setGeometry(QRect(10, 490, 75, 23));
        checkBox_americanConference = new QCheckBox(page_viewConferences);
        checkBox_americanConference->setObjectName(QStringLiteral("checkBox_americanConference"));
        checkBox_americanConference->setGeometry(QRect(120, 410, 191, 17));
        checkBox_nationalConference = new QCheckBox(page_viewConferences);
        checkBox_nationalConference->setObjectName(QStringLiteral("checkBox_nationalConference"));
        checkBox_nationalConference->setGeometry(QRect(330, 410, 191, 17));
        stackedWidget->addWidget(page_viewConferences);
        page_viewOpenRoof = new QWidget();
        page_viewOpenRoof->setObjectName(QStringLiteral("page_viewOpenRoof"));
        label_OpenRoofTitle = new QLabel(page_viewOpenRoof);
        label_OpenRoofTitle->setObjectName(QStringLiteral("label_OpenRoofTitle"));
        label_OpenRoofTitle->setGeometry(QRect(70, 10, 481, 61));
        stackedWidget->addWidget(page_viewOpenRoof);
        page_viewStarPlayers = new QWidget();
        page_viewStarPlayers->setObjectName(QStringLiteral("page_viewStarPlayers"));
        label_starPlayersTitle = new QLabel(page_viewStarPlayers);
        label_starPlayersTitle->setObjectName(QStringLiteral("label_starPlayersTitle"));
        label_starPlayersTitle->setGeometry(QRect(80, 10, 481, 51));
        stackedWidget->addWidget(page_viewStarPlayers);
        page_viewSeatingCapacity = new QWidget();
        page_viewSeatingCapacity->setObjectName(QStringLiteral("page_viewSeatingCapacity"));
        label_seatingCapacityTitle = new QLabel(page_viewSeatingCapacity);
        label_seatingCapacityTitle->setObjectName(QStringLiteral("label_seatingCapacityTitle"));
        label_seatingCapacityTitle->setGeometry(QRect(20, 10, 601, 61));
        stackedWidget->addWidget(page_viewSeatingCapacity);
        page_viewSurfaceType = new QWidget();
        page_viewSurfaceType->setObjectName(QStringLiteral("page_viewSurfaceType"));
        label_viewTeamInfo = new QLabel(page_viewSurfaceType);
        label_viewTeamInfo->setObjectName(QStringLiteral("label_viewTeamInfo"));
        label_viewTeamInfo->setGeometry(QRect(80, 10, 481, 71));
        stackedWidget->addWidget(page_viewSurfaceType);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_home->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Home</span></p></body></html>", Q_NULLPTR));
        comboBox_selectAction->clear();
        comboBox_selectAction->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 - View NFL Information", Q_NULLPTR)
        );
        comboBox_displayOptions->clear();
        comboBox_displayOptions->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 - NFL Team Information", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 - NFL Teams", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 - NFL Stadiums", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 - NFL Team Conferences", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 - Open Roof Type Stadiums", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6 - Star Players", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7 - Stadium Seating Capacity", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8 - Stadium Surface Type", Q_NULLPTR)
        );
        pushButton_backViewNFLInfo->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_viewNFLInfo->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Information</span></p></body></html>", Q_NULLPTR));
        label_NFLInfoPrompt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Select the information that you would like to view.</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_teamInfo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_teamInfo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Stadium Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_teamInfo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Stadium Capacity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_teamInfo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_teamInfo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Conference", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_teamInfo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Surface Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_teamInfo->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Stadium Roof Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_teamInfo->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Star Player", Q_NULLPTR));
        pushButton_backViewTeamInfo->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_TeamInfoTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Team Information</span></p></body></html>", Q_NULLPTR));
        label_teamInfoPrompt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Select the name of a team to view their information.</span></p></body></html>", Q_NULLPTR));
        label_viewTeamsTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Teams</span></p></body></html>", Q_NULLPTR));
        label_viewStadiumsTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Stadiums</span></p></body></html>", Q_NULLPTR));
        label_ConferencesTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Team Conferences</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_conferences->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_conferences->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Conference", Q_NULLPTR));
        pushButton_backConferences->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        checkBox_americanConference->setText(QApplication::translate("MainWindow", "American Football Conference Only", Q_NULLPTR));
        checkBox_nationalConference->setText(QApplication::translate("MainWindow", "National Football Conference Only", Q_NULLPTR));
        label_OpenRoofTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Open Roof Stadiums</span></p></body></html>", Q_NULLPTR));
        label_starPlayersTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Star Players</span></p></body></html>", Q_NULLPTR));
        label_seatingCapacityTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Stadium Seating Capacity</span></p></body></html>", Q_NULLPTR));
        label_viewTeamInfo->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Stadium Surface Type</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

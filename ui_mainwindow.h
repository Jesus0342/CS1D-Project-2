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
#include <QtWidgets/QRadioButton>
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
    QPushButton *pushButton_login;
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
    QTableWidget *tableWidget_teams;
    QPushButton *pushButton_backViewTeams;
    QWidget *page_viewStadiums;
    QLabel *label_viewStadiumsTitle;
    QTableWidget *tableWidget_viewStadiums;
    QPushButton *pushButton_backViewStadiums;
    QWidget *page_viewConferences;
    QLabel *label_ConferencesTitle;
    QTableWidget *tableWidget_conferences;
    QPushButton *pushButton_backConferences;
    QCheckBox *checkBox_americanConference;
    QCheckBox *checkBox_nationalConference;
    QWidget *page_viewRoof;
    QPushButton *pushButton_getRetraRoofs;
    QLabel *label_roofTitle;
    QTableWidget *tableWidget_roof;
    QLabel *label_totalRoofTxt;
    QPushButton *pushButton_getFixedRoofs;
    QPushButton *pushButton_getOpenRoofs;
    QPushButton *pushButton_backRoofs;
    QWidget *page_viewStarPlayers;
    QLabel *label_starPlayersTitle;
    QTableWidget *tableWidget_starPlayers;
    QComboBox *comboBox_starPlayer;
    QRadioButton *radioButton_starPlayer_all;
    QRadioButton *radioButton_starPlayer_filter;
    QPushButton *pushButton_starPlayers_backMenu;
    QWidget *page_viewSeatingCapacity;
    QLabel *label_seatingCapacityTitle;
    QTableWidget *tableWidget_seatingCapacity;
    QPushButton *pushButton_backSeatingCapacity;
    QLabel *label_totalCapacityTxt;
    QLabel *label_totalCapacity;
    QWidget *page_viewSurfaceType;
    QLabel *label_surfaceTypeTitle;
    QTableWidget *tableWidget_surfaceType;
    QPushButton *pushButton_backSurfaceType;
    QWidget *page_displaySouvenirs;
    QPushButton *pushButton_backViewSouvenirs;
    QTableWidget *tableWidget_souvenirs;
    QLabel *label_displaySouvenirs;
    QTableWidget *tableWidget_stadiums;
    QLabel *label_displaySouvenirPrompt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(651, 622);
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
        label_home->setGeometry(QRect(170, 160, 271, 91));
        comboBox_selectAction = new QComboBox(page_home);
        comboBox_selectAction->setObjectName(QStringLiteral("comboBox_selectAction"));
        comboBox_selectAction->setGeometry(QRect(130, 250, 351, 51));
        pushButton_login = new QPushButton(page_home);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(430, 70, 151, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/login.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_login->setIcon(icon);
        pushButton_login->setIconSize(QSize(100, 100));
        pushButton_login->setFlat(true);
        stackedWidget->addWidget(page_home);
        page_viewNFLInfo = new QWidget();
        page_viewNFLInfo->setObjectName(QStringLiteral("page_viewNFLInfo"));
        comboBox_displayOptions = new QComboBox(page_viewNFLInfo);
        comboBox_displayOptions->setObjectName(QStringLiteral("comboBox_displayOptions"));
        comboBox_displayOptions->setGeometry(QRect(210, 200, 181, 22));
        pushButton_backViewNFLInfo = new QPushButton(page_viewNFLInfo);
        pushButton_backViewNFLInfo->setObjectName(QStringLiteral("pushButton_backViewNFLInfo"));
        pushButton_backViewNFLInfo->setGeometry(QRect(200, 420, 161, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Resources/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_backViewNFLInfo->setIcon(icon1);
        pushButton_backViewNFLInfo->setIconSize(QSize(100, 100));
        pushButton_backViewNFLInfo->setFlat(true);
        label_viewNFLInfo = new QLabel(page_viewNFLInfo);
        label_viewNFLInfo->setObjectName(QStringLiteral("label_viewNFLInfo"));
        label_viewNFLInfo->setGeometry(QRect(30, 60, 561, 91));
        label_NFLInfoPrompt = new QLabel(page_viewNFLInfo);
        label_NFLInfoPrompt->setObjectName(QStringLiteral("label_NFLInfoPrompt"));
        label_NFLInfoPrompt->setGeometry(QRect(150, 160, 311, 21));
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
        tableWidget_teamInfo->setGeometry(QRect(21, 130, 591, 291));
        pushButton_backViewTeamInfo = new QPushButton(page_viewTeamInfo);
        pushButton_backViewTeamInfo->setObjectName(QStringLiteral("pushButton_backViewTeamInfo"));
        pushButton_backViewTeamInfo->setGeometry(QRect(10, 510, 111, 41));
        pushButton_backViewTeamInfo->setIcon(icon1);
        pushButton_backViewTeamInfo->setIconSize(QSize(100, 100));
        pushButton_backViewTeamInfo->setFlat(true);
        comboBox_selectTeam = new QComboBox(page_viewTeamInfo);
        comboBox_selectTeam->setObjectName(QStringLiteral("comboBox_selectTeam"));
        comboBox_selectTeam->setGeometry(QRect(210, 470, 221, 22));
        label_TeamInfoTitle = new QLabel(page_viewTeamInfo);
        label_TeamInfoTitle->setObjectName(QStringLiteral("label_TeamInfoTitle"));
        label_TeamInfoTitle->setGeometry(QRect(80, 70, 481, 51));
        label_teamInfoPrompt = new QLabel(page_viewTeamInfo);
        label_teamInfoPrompt->setObjectName(QStringLiteral("label_teamInfoPrompt"));
        label_teamInfoPrompt->setGeometry(QRect(150, 440, 331, 20));
        stackedWidget->addWidget(page_viewTeamInfo);
        page_viewTeams = new QWidget();
        page_viewTeams->setObjectName(QStringLiteral("page_viewTeams"));
        label_viewTeamsTitle = new QLabel(page_viewTeams);
        label_viewTeamsTitle->setObjectName(QStringLiteral("label_viewTeamsTitle"));
        label_viewTeamsTitle->setGeometry(QRect(80, 70, 481, 51));
        tableWidget_teams = new QTableWidget(page_viewTeams);
        if (tableWidget_teams->columnCount() < 8)
            tableWidget_teams->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(5, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(6, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_teams->setHorizontalHeaderItem(7, __qtablewidgetitem15);
        tableWidget_teams->setObjectName(QStringLiteral("tableWidget_teams"));
        tableWidget_teams->setGeometry(QRect(20, 140, 591, 311));
        pushButton_backViewTeams = new QPushButton(page_viewTeams);
        pushButton_backViewTeams->setObjectName(QStringLiteral("pushButton_backViewTeams"));
        pushButton_backViewTeams->setGeometry(QRect(10, 470, 101, 51));
        pushButton_backViewTeams->setIcon(icon1);
        pushButton_backViewTeams->setIconSize(QSize(100, 100));
        pushButton_backViewTeams->setFlat(true);
        stackedWidget->addWidget(page_viewTeams);
        page_viewStadiums = new QWidget();
        page_viewStadiums->setObjectName(QStringLiteral("page_viewStadiums"));
        label_viewStadiumsTitle = new QLabel(page_viewStadiums);
        label_viewStadiumsTitle->setObjectName(QStringLiteral("label_viewStadiumsTitle"));
        label_viewStadiumsTitle->setGeometry(QRect(80, 50, 481, 51));
        tableWidget_viewStadiums = new QTableWidget(page_viewStadiums);
        if (tableWidget_viewStadiums->columnCount() < 2)
            tableWidget_viewStadiums->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_viewStadiums->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_viewStadiums->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        tableWidget_viewStadiums->setObjectName(QStringLiteral("tableWidget_viewStadiums"));
        tableWidget_viewStadiums->setGeometry(QRect(130, 120, 361, 311));
        tableWidget_viewStadiums->setMinimumSize(QSize(341, 0));
        pushButton_backViewStadiums = new QPushButton(page_viewStadiums);
        pushButton_backViewStadiums->setObjectName(QStringLiteral("pushButton_backViewStadiums"));
        pushButton_backViewStadiums->setGeometry(QRect(10, 462, 121, 41));
        pushButton_backViewStadiums->setIcon(icon1);
        pushButton_backViewStadiums->setIconSize(QSize(100, 100));
        pushButton_backViewStadiums->setFlat(true);
        stackedWidget->addWidget(page_viewStadiums);
        page_viewConferences = new QWidget();
        page_viewConferences->setObjectName(QStringLiteral("page_viewConferences"));
        label_ConferencesTitle = new QLabel(page_viewConferences);
        label_ConferencesTitle->setObjectName(QStringLiteral("label_ConferencesTitle"));
        label_ConferencesTitle->setGeometry(QRect(70, 50, 491, 51));
        tableWidget_conferences = new QTableWidget(page_viewConferences);
        if (tableWidget_conferences->columnCount() < 2)
            tableWidget_conferences->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_conferences->setHorizontalHeaderItem(0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_conferences->setHorizontalHeaderItem(1, __qtablewidgetitem19);
        tableWidget_conferences->setObjectName(QStringLiteral("tableWidget_conferences"));
        tableWidget_conferences->setGeometry(QRect(150, 120, 341, 311));
        pushButton_backConferences = new QPushButton(page_viewConferences);
        pushButton_backConferences->setObjectName(QStringLiteral("pushButton_backConferences"));
        pushButton_backConferences->setGeometry(QRect(10, 480, 131, 51));
        pushButton_backConferences->setIcon(icon1);
        pushButton_backConferences->setIconSize(QSize(100, 100));
        pushButton_backConferences->setFlat(true);
        checkBox_americanConference = new QCheckBox(page_viewConferences);
        checkBox_americanConference->setObjectName(QStringLiteral("checkBox_americanConference"));
        checkBox_americanConference->setGeometry(QRect(120, 450, 191, 17));
        checkBox_nationalConference = new QCheckBox(page_viewConferences);
        checkBox_nationalConference->setObjectName(QStringLiteral("checkBox_nationalConference"));
        checkBox_nationalConference->setGeometry(QRect(330, 450, 191, 17));
        stackedWidget->addWidget(page_viewConferences);
        page_viewRoof = new QWidget();
        page_viewRoof->setObjectName(QStringLiteral("page_viewRoof"));
        pushButton_getRetraRoofs = new QPushButton(page_viewRoof);
        pushButton_getRetraRoofs->setObjectName(QStringLiteral("pushButton_getRetraRoofs"));
        pushButton_getRetraRoofs->setGeometry(QRect(240, 490, 141, 23));
        label_roofTitle = new QLabel(page_viewRoof);
        label_roofTitle->setObjectName(QStringLiteral("label_roofTitle"));
        label_roofTitle->setGeometry(QRect(80, 70, 481, 61));
        tableWidget_roof = new QTableWidget(page_viewRoof);
        if (tableWidget_roof->columnCount() < 2)
            tableWidget_roof->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_roof->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_roof->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        tableWidget_roof->setObjectName(QStringLiteral("tableWidget_roof"));
        tableWidget_roof->setGeometry(QRect(150, 140, 341, 281));
        label_totalRoofTxt = new QLabel(page_viewRoof);
        label_totalRoofTxt->setObjectName(QStringLiteral("label_totalRoofTxt"));
        label_totalRoofTxt->setGeometry(QRect(160, 430, 231, 31));
        pushButton_getFixedRoofs = new QPushButton(page_viewRoof);
        pushButton_getFixedRoofs->setObjectName(QStringLiteral("pushButton_getFixedRoofs"));
        pushButton_getFixedRoofs->setGeometry(QRect(320, 460, 141, 23));
        pushButton_getOpenRoofs = new QPushButton(page_viewRoof);
        pushButton_getOpenRoofs->setObjectName(QStringLiteral("pushButton_getOpenRoofs"));
        pushButton_getOpenRoofs->setGeometry(QRect(160, 460, 141, 23));
        pushButton_backRoofs = new QPushButton(page_viewRoof);
        pushButton_backRoofs->setObjectName(QStringLiteral("pushButton_backRoofs"));
        pushButton_backRoofs->setGeometry(QRect(10, 480, 111, 51));
        pushButton_backRoofs->setIcon(icon1);
        pushButton_backRoofs->setIconSize(QSize(100, 100));
        pushButton_backRoofs->setFlat(true);
        stackedWidget->addWidget(page_viewRoof);
        page_viewStarPlayers = new QWidget();
        page_viewStarPlayers->setObjectName(QStringLiteral("page_viewStarPlayers"));
        label_starPlayersTitle = new QLabel(page_viewStarPlayers);
        label_starPlayersTitle->setObjectName(QStringLiteral("label_starPlayersTitle"));
        label_starPlayersTitle->setGeometry(QRect(80, 70, 481, 51));
        tableWidget_starPlayers = new QTableWidget(page_viewStarPlayers);
        tableWidget_starPlayers->setObjectName(QStringLiteral("tableWidget_starPlayers"));
        tableWidget_starPlayers->setGeometry(QRect(30, 140, 301, 351));
        comboBox_starPlayer = new QComboBox(page_viewStarPlayers);
        comboBox_starPlayer->setObjectName(QStringLiteral("comboBox_starPlayer"));
        comboBox_starPlayer->setGeometry(QRect(340, 290, 231, 31));
        radioButton_starPlayer_all = new QRadioButton(page_viewStarPlayers);
        radioButton_starPlayer_all->setObjectName(QStringLiteral("radioButton_starPlayer_all"));
        radioButton_starPlayer_all->setGeometry(QRect(350, 270, 84, 19));
        radioButton_starPlayer_filter = new QRadioButton(page_viewStarPlayers);
        radioButton_starPlayer_filter->setObjectName(QStringLiteral("radioButton_starPlayer_filter"));
        radioButton_starPlayer_filter->setGeometry(QRect(470, 270, 101, 19));
        pushButton_starPlayers_backMenu = new QPushButton(page_viewStarPlayers);
        pushButton_starPlayers_backMenu->setObjectName(QStringLiteral("pushButton_starPlayers_backMenu"));
        pushButton_starPlayers_backMenu->setGeometry(QRect(10, 500, 141, 41));
        pushButton_starPlayers_backMenu->setIcon(icon1);
        pushButton_starPlayers_backMenu->setIconSize(QSize(100, 100));
        pushButton_starPlayers_backMenu->setFlat(true);
        stackedWidget->addWidget(page_viewStarPlayers);
        page_viewSeatingCapacity = new QWidget();
        page_viewSeatingCapacity->setObjectName(QStringLiteral("page_viewSeatingCapacity"));
        label_seatingCapacityTitle = new QLabel(page_viewSeatingCapacity);
        label_seatingCapacityTitle->setObjectName(QStringLiteral("label_seatingCapacityTitle"));
        label_seatingCapacityTitle->setGeometry(QRect(20, 60, 601, 61));
        tableWidget_seatingCapacity = new QTableWidget(page_viewSeatingCapacity);
        if (tableWidget_seatingCapacity->columnCount() < 3)
            tableWidget_seatingCapacity->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_seatingCapacity->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_seatingCapacity->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_seatingCapacity->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        tableWidget_seatingCapacity->setObjectName(QStringLiteral("tableWidget_seatingCapacity"));
        tableWidget_seatingCapacity->setGeometry(QRect(90, 120, 461, 301));
        pushButton_backSeatingCapacity = new QPushButton(page_viewSeatingCapacity);
        pushButton_backSeatingCapacity->setObjectName(QStringLiteral("pushButton_backSeatingCapacity"));
        pushButton_backSeatingCapacity->setGeometry(QRect(10, 480, 131, 41));
        pushButton_backSeatingCapacity->setIcon(icon1);
        pushButton_backSeatingCapacity->setIconSize(QSize(100, 100));
        pushButton_backSeatingCapacity->setFlat(true);
        label_totalCapacityTxt = new QLabel(page_viewSeatingCapacity);
        label_totalCapacityTxt->setObjectName(QStringLiteral("label_totalCapacityTxt"));
        label_totalCapacityTxt->setGeometry(QRect(160, 430, 231, 31));
        label_totalCapacity = new QLabel(page_viewSeatingCapacity);
        label_totalCapacity->setObjectName(QStringLiteral("label_totalCapacity"));
        label_totalCapacity->setGeometry(QRect(390, 430, 131, 31));
        stackedWidget->addWidget(page_viewSeatingCapacity);
        page_viewSurfaceType = new QWidget();
        page_viewSurfaceType->setObjectName(QStringLiteral("page_viewSurfaceType"));
        label_surfaceTypeTitle = new QLabel(page_viewSurfaceType);
        label_surfaceTypeTitle->setObjectName(QStringLiteral("label_surfaceTypeTitle"));
        label_surfaceTypeTitle->setGeometry(QRect(80, 60, 481, 61));
        tableWidget_surfaceType = new QTableWidget(page_viewSurfaceType);
        if (tableWidget_surfaceType->columnCount() < 4)
            tableWidget_surfaceType->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_surfaceType->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_surfaceType->setHorizontalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_surfaceType->setHorizontalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_surfaceType->setHorizontalHeaderItem(3, __qtablewidgetitem28);
        tableWidget_surfaceType->setObjectName(QStringLiteral("tableWidget_surfaceType"));
        tableWidget_surfaceType->setGeometry(QRect(40, 120, 561, 301));
        pushButton_backSurfaceType = new QPushButton(page_viewSurfaceType);
        pushButton_backSurfaceType->setObjectName(QStringLiteral("pushButton_backSurfaceType"));
        pushButton_backSurfaceType->setGeometry(QRect(0, 450, 121, 51));
        pushButton_backSurfaceType->setIcon(icon1);
        pushButton_backSurfaceType->setIconSize(QSize(100, 100));
        pushButton_backSurfaceType->setFlat(true);
        stackedWidget->addWidget(page_viewSurfaceType);
        page_displaySouvenirs = new QWidget();
        page_displaySouvenirs->setObjectName(QStringLiteral("page_displaySouvenirs"));
        pushButton_backViewSouvenirs = new QPushButton(page_displaySouvenirs);
        pushButton_backViewSouvenirs->setObjectName(QStringLiteral("pushButton_backViewSouvenirs"));
        pushButton_backViewSouvenirs->setGeometry(QRect(10, 480, 121, 41));
        pushButton_backViewSouvenirs->setIcon(icon1);
        pushButton_backViewSouvenirs->setIconSize(QSize(100, 100));
        pushButton_backViewSouvenirs->setFlat(true);
        tableWidget_souvenirs = new QTableWidget(page_displaySouvenirs);
        if (tableWidget_souvenirs->columnCount() < 2)
            tableWidget_souvenirs->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_souvenirs->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_souvenirs->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        tableWidget_souvenirs->setObjectName(QStringLiteral("tableWidget_souvenirs"));
        tableWidget_souvenirs->setGeometry(QRect(380, 170, 201, 171));
        label_displaySouvenirs = new QLabel(page_displaySouvenirs);
        label_displaySouvenirs->setObjectName(QStringLiteral("label_displaySouvenirs"));
        label_displaySouvenirs->setGeometry(QRect(70, 70, 481, 61));
        tableWidget_stadiums = new QTableWidget(page_displaySouvenirs);
        if (tableWidget_stadiums->columnCount() < 1)
            tableWidget_stadiums->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_stadiums->setHorizontalHeaderItem(0, __qtablewidgetitem31);
        tableWidget_stadiums->setObjectName(QStringLiteral("tableWidget_stadiums"));
        tableWidget_stadiums->setGeometry(QRect(50, 170, 241, 281));
        label_displaySouvenirPrompt = new QLabel(page_displaySouvenirs);
        label_displaySouvenirPrompt->setObjectName(QStringLiteral("label_displaySouvenirPrompt"));
        label_displaySouvenirPrompt->setGeometry(QRect(110, 130, 421, 21));
        stackedWidget->addWidget(page_displaySouvenirs);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 651, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        comboBox_selectAction->setCurrentIndex(0);
        comboBox_displayOptions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_home->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; color:#000000;\">Home</span></p></body></html>", Q_NULLPTR));
        comboBox_selectAction->clear();
        comboBox_selectAction->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1 - View NFL Information", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2 - Traverse Graph", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3 - Visit All Starting at Ford Field", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4 - Visit Stadiums Starting at LA Memorial Coliseum", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5 - Plan Custom Vacation", Q_NULLPTR)
        );
        pushButton_login->setText(QString());
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
         << QApplication::translate("MainWindow", "9 - Team Souvenirs", Q_NULLPTR)
        );
        pushButton_backViewNFLInfo->setText(QString());
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
        pushButton_backViewTeamInfo->setText(QString());
        label_TeamInfoTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Team Information</span></p></body></html>", Q_NULLPTR));
        label_teamInfoPrompt->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Select the name of a team to view their information.</span></p></body></html>", Q_NULLPTR));
        label_viewTeamsTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Teams</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_teams->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_teams->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "Stadium Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_teams->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "Stadium Capacity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_teams->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_teams->horizontalHeaderItem(4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "Conference", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_teams->horizontalHeaderItem(5);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Surface Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_teams->horizontalHeaderItem(6);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "Stadium Roof Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_teams->horizontalHeaderItem(7);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "Star Player", Q_NULLPTR));
        pushButton_backViewTeams->setText(QString());
        label_viewStadiumsTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Stadiums</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_viewStadiums->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_viewStadiums->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Stadium Name", Q_NULLPTR));
        pushButton_backViewStadiums->setText(QString());
        label_ConferencesTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Team Conferences</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_conferences->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_conferences->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Conference", Q_NULLPTR));
        pushButton_backConferences->setText(QString());
        checkBox_americanConference->setText(QApplication::translate("MainWindow", "American Football Conference Only", Q_NULLPTR));
        checkBox_nationalConference->setText(QApplication::translate("MainWindow", "National Football Conference Only", Q_NULLPTR));
        pushButton_getRetraRoofs->setText(QApplication::translate("MainWindow", "Retractable Roof Stadiums", Q_NULLPTR));
        label_roofTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Open Roof Stadiums</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_roof->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_roof->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "Stadium", Q_NULLPTR));
        label_totalRoofTxt->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Total Open Roof Stadiums:</span></p></body></html>", Q_NULLPTR));
        pushButton_getFixedRoofs->setText(QApplication::translate("MainWindow", "Fixed Roof Stadiums", Q_NULLPTR));
        pushButton_getOpenRoofs->setText(QApplication::translate("MainWindow", "Open Roof Stadiums", Q_NULLPTR));
        pushButton_backRoofs->setText(QString());
        label_starPlayersTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Star Players</span></p></body></html>", Q_NULLPTR));
        radioButton_starPlayer_all->setText(QApplication::translate("MainWindow", "View All", Q_NULLPTR));
        radioButton_starPlayer_filter->setText(QApplication::translate("MainWindow", "Filter by Team", Q_NULLPTR));
        pushButton_starPlayers_backMenu->setText(QString());
        label_seatingCapacityTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Stadium Seating Capacity</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_seatingCapacity->horizontalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_seatingCapacity->horizontalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Stadium Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_seatingCapacity->horizontalHeaderItem(2);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "Seating Capacity", Q_NULLPTR));
        pushButton_backSeatingCapacity->setText(QString());
        label_totalCapacityTxt->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Total NFL Seating Capacity:</span></p></body></html>", Q_NULLPTR));
        label_totalCapacity->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        label_surfaceTypeTitle->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Stadium Surface Type</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_surfaceType->horizontalHeaderItem(0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_surfaceType->horizontalHeaderItem(1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "Stadium Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_surfaceType->horizontalHeaderItem(2);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_surfaceType->horizontalHeaderItem(3);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "Surface Type", Q_NULLPTR));
        pushButton_backSurfaceType->setText(QString());
        pushButton_backViewSouvenirs->setText(QString());
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_souvenirs->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "Souvenir Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_souvenirs->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "Price", Q_NULLPTR));
        label_displaySouvenirs->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Team Souvenirs</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_stadiums->horizontalHeaderItem(0);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        label_displaySouvenirPrompt->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Please click the name of a team to display its souvenirs.</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

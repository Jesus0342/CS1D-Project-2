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
    QComboBox *comboBox_selectTeamInfo;
    QPushButton *pushButton_backViewNFLInfo;
    QLabel *label_viewNFLInfo;
    QWidget *page_viewTeamInfo;
    QTableWidget *tableWidget;
    QPushButton *pushButton_3;
    QPushButton *pushButton_backViewTeamInfo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 550);
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
        label_home->setGeometry(QRect(150, 20, 271, 91));
        comboBox_selectAction = new QComboBox(page_home);
        comboBox_selectAction->setObjectName(QStringLiteral("comboBox_selectAction"));
        comboBox_selectAction->setGeometry(QRect(180, 380, 191, 22));
        stackedWidget->addWidget(page_home);
        page_viewNFLInfo = new QWidget();
        page_viewNFLInfo->setObjectName(QStringLiteral("page_viewNFLInfo"));
        comboBox_selectTeamInfo = new QComboBox(page_viewNFLInfo);
        comboBox_selectTeamInfo->setObjectName(QStringLiteral("comboBox_selectTeamInfo"));
        comboBox_selectTeamInfo->setGeometry(QRect(180, 360, 181, 22));
        pushButton_backViewNFLInfo = new QPushButton(page_viewNFLInfo);
        pushButton_backViewNFLInfo->setObjectName(QStringLiteral("pushButton_backViewNFLInfo"));
        pushButton_backViewNFLInfo->setGeometry(QRect(20, 440, 75, 23));
        label_viewNFLInfo = new QLabel(page_viewNFLInfo);
        label_viewNFLInfo->setObjectName(QStringLiteral("label_viewNFLInfo"));
        label_viewNFLInfo->setGeometry(QRect(10, 10, 561, 91));
        stackedWidget->addWidget(page_viewNFLInfo);
        page_viewTeamInfo = new QWidget();
        page_viewTeamInfo->setObjectName(QStringLiteral("page_viewTeamInfo"));
        tableWidget = new QTableWidget(page_viewTeamInfo);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 34, 482, 350));
        pushButton_3 = new QPushButton(page_viewTeamInfo);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 390, 482, 23));
        pushButton_backViewTeamInfo = new QPushButton(page_viewTeamInfo);
        pushButton_backViewTeamInfo->setObjectName(QStringLiteral("pushButton_backViewTeamInfo"));
        pushButton_backViewTeamInfo->setGeometry(QRect(10, 450, 75, 23));
        stackedWidget->addWidget(page_viewTeamInfo);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_home->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Home</span></p></body></html>", Q_NULLPTR));
        comboBox_selectAction->clear();
        comboBox_selectAction->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("MainWindow", "View NFL Information", Q_NULLPTR)
        );
        comboBox_selectTeamInfo->clear();
        comboBox_selectTeamInfo->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NFL Team Information", Q_NULLPTR)
        );
        pushButton_backViewNFLInfo->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_viewNFLInfo->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">NFL Information</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Stadium Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Stadium Capacity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Conference", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Surface Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Stadium Roof Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "Star Player", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        pushButton_backViewTeamInfo->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

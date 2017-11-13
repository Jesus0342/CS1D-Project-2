/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_adminHome;
    QLabel *label_adminTitle_2;
    QPushButton *pushButton_logout;
    QComboBox *comboBox_adminFunctions;
    QWidget *page_addStadiums;
    QLabel *label_adminTitle;
    QTableWidget *tableWidget_newStadiums;
    QPushButton *pushButton_addStadiums;
    QPushButton *pushButton_backAddStadiums;
    QPushButton *pushButton_reset;
    QWidget *page_addSouvenirs;
    QLabel *label_adminTitle_3;
    QWidget *page_modifySouvenirs;
    QLabel *label_adminTitle_4;
    QWidget *page_modifyStadiumInfo;
    QLabel *label_adminTitle_5;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(591, 481);
        horizontalLayout = new QHBoxLayout(AdminWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(AdminWindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_adminHome = new QWidget();
        page_adminHome->setObjectName(QStringLiteral("page_adminHome"));
        label_adminTitle_2 = new QLabel(page_adminHome);
        label_adminTitle_2->setObjectName(QStringLiteral("label_adminTitle_2"));
        label_adminTitle_2->setGeometry(QRect(10, 10, 561, 91));
        pushButton_logout = new QPushButton(page_adminHome);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(10, 430, 75, 23));
        comboBox_adminFunctions = new QComboBox(page_adminHome);
        comboBox_adminFunctions->setObjectName(QStringLiteral("comboBox_adminFunctions"));
        comboBox_adminFunctions->setGeometry(QRect(190, 140, 171, 22));
        stackedWidget->addWidget(page_adminHome);
        page_addStadiums = new QWidget();
        page_addStadiums->setObjectName(QStringLiteral("page_addStadiums"));
        label_adminTitle = new QLabel(page_addStadiums);
        label_adminTitle->setObjectName(QStringLiteral("label_adminTitle"));
        label_adminTitle->setGeometry(QRect(0, 0, 561, 91));
        tableWidget_newStadiums = new QTableWidget(page_addStadiums);
        if (tableWidget_newStadiums->columnCount() < 8)
            tableWidget_newStadiums->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_newStadiums->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_newStadiums->setObjectName(QStringLiteral("tableWidget_newStadiums"));
        tableWidget_newStadiums->setGeometry(QRect(10, 100, 551, 121));
        pushButton_addStadiums = new QPushButton(page_addStadiums);
        pushButton_addStadiums->setObjectName(QStringLiteral("pushButton_addStadiums"));
        pushButton_addStadiums->setGeometry(QRect(240, 240, 75, 23));
        pushButton_backAddStadiums = new QPushButton(page_addStadiums);
        pushButton_backAddStadiums->setObjectName(QStringLiteral("pushButton_backAddStadiums"));
        pushButton_backAddStadiums->setGeometry(QRect(20, 430, 75, 23));
        pushButton_reset = new QPushButton(page_addStadiums);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(240, 320, 75, 23));
        stackedWidget->addWidget(page_addStadiums);
        page_addSouvenirs = new QWidget();
        page_addSouvenirs->setObjectName(QStringLiteral("page_addSouvenirs"));
        label_adminTitle_3 = new QLabel(page_addSouvenirs);
        label_adminTitle_3->setObjectName(QStringLiteral("label_adminTitle_3"));
        label_adminTitle_3->setGeometry(QRect(10, 10, 561, 91));
        stackedWidget->addWidget(page_addSouvenirs);
        page_modifySouvenirs = new QWidget();
        page_modifySouvenirs->setObjectName(QStringLiteral("page_modifySouvenirs"));
        label_adminTitle_4 = new QLabel(page_modifySouvenirs);
        label_adminTitle_4->setObjectName(QStringLiteral("label_adminTitle_4"));
        label_adminTitle_4->setGeometry(QRect(0, 0, 561, 91));
        stackedWidget->addWidget(page_modifySouvenirs);
        page_modifyStadiumInfo = new QWidget();
        page_modifyStadiumInfo->setObjectName(QStringLiteral("page_modifyStadiumInfo"));
        label_adminTitle_5 = new QLabel(page_modifyStadiumInfo);
        label_adminTitle_5->setObjectName(QStringLiteral("label_adminTitle_5"));
        label_adminTitle_5->setGeometry(QRect(10, 10, 561, 81));
        stackedWidget->addWidget(page_modifyStadiumInfo);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(AdminWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", 0));
        label_adminTitle_2->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Administrator Window</span></p></body></html>", 0));
        pushButton_logout->setText(QApplication::translate("AdminWindow", "Logout", 0));
        comboBox_adminFunctions->clear();
        comboBox_adminFunctions->insertItems(0, QStringList()
         << QApplication::translate("AdminWindow", "<Select Here>", 0)
         << QApplication::translate("AdminWindow", "1 - Add New Stadiums", 0)
         << QApplication::translate("AdminWindow", "2 - Add Souvenirs", 0)
         << QApplication::translate("AdminWindow", "3 - Modify Souvenirs", 0)
         << QApplication::translate("AdminWindow", "4 - Modify Stadium Information", 0)
        );
        label_adminTitle->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Add New Stadiums</span></p></body></html>", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_newStadiums->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AdminWindow", "Team Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_newStadiums->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AdminWindow", "Stadium Name", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_newStadiums->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AdminWindow", "Seating Capacity", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_newStadiums->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AdminWindow", "Location", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_newStadiums->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("AdminWindow", "Conference", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_newStadiums->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("AdminWindow", "Surface Type", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_newStadiums->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("AdminWindow", "Roof Type", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_newStadiums->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("AdminWindow", "Star Player", 0));
        pushButton_addStadiums->setText(QApplication::translate("AdminWindow", "Add Stadiums", 0));
        pushButton_backAddStadiums->setText(QApplication::translate("AdminWindow", "Back", 0));
        pushButton_reset->setText(QApplication::translate("AdminWindow", "Reset", 0));
        label_adminTitle_3->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Add Souvenirs</span></p></body></html>", 0));
        label_adminTitle_4->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Modify Souvenirs</span></p></body></html>", 0));
        label_adminTitle_5->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Modify Stadium Info</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H

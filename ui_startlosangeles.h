/********************************************************************************
** Form generated from reading UI file 'startlosangeles.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTLOSANGELES_H
#define UI_STARTLOSANGELES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startlosangeles
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget_routes;
    QComboBox *comboBox_listofstadiums;
    QPushButton *pushButton_totalDist;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_back;
    QPushButton *pushButton_buySouv;
    QPushButton *pushButton_visit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *startlosangeles)
    {
        if (startlosangeles->objectName().isEmpty())
            startlosangeles->setObjectName(QStringLiteral("startlosangeles"));
        startlosangeles->resize(660, 558);
        centralwidget = new QWidget(startlosangeles);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget_routes = new QTableWidget(centralwidget);
        tableWidget_routes->setObjectName(QStringLiteral("tableWidget_routes"));
        tableWidget_routes->setGeometry(QRect(30, 90, 281, 411));
        comboBox_listofstadiums = new QComboBox(centralwidget);
        comboBox_listofstadiums->setObjectName(QStringLiteral("comboBox_listofstadiums"));
        comboBox_listofstadiums->setGeometry(QRect(30, 20, 281, 31));
        pushButton_totalDist = new QPushButton(centralwidget);
        pushButton_totalDist->setObjectName(QStringLiteral("pushButton_totalDist"));
        pushButton_totalDist->setGeometry(QRect(370, 250, 211, 23));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(420, 210, 121, 31));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(370, 310, 211, 23));
        pushButton_buySouv = new QPushButton(centralwidget);
        pushButton_buySouv->setObjectName(QStringLiteral("pushButton_buySouv"));
        pushButton_buySouv->setGeometry(QRect(370, 280, 211, 23));
        pushButton_visit = new QPushButton(centralwidget);
        pushButton_visit->setObjectName(QStringLiteral("pushButton_visit"));
        pushButton_visit->setGeometry(QRect(30, 60, 281, 21));
        startlosangeles->setCentralWidget(centralwidget);
        menubar = new QMenuBar(startlosangeles);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 21));
        startlosangeles->setMenuBar(menubar);
        statusbar = new QStatusBar(startlosangeles);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        startlosangeles->setStatusBar(statusbar);

        retranslateUi(startlosangeles);

        QMetaObject::connectSlotsByName(startlosangeles);
    } // setupUi

    void retranslateUi(QMainWindow *startlosangeles)
    {
        startlosangeles->setWindowTitle(QApplication::translate("startlosangeles", "MainWindow", Q_NULLPTR));
        pushButton_totalDist->setText(QApplication::translate("startlosangeles", "Calculate Total Distance", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("startlosangeles", "Back", Q_NULLPTR));
        pushButton_buySouv->setText(QApplication::translate("startlosangeles", "Buy Souvenir", Q_NULLPTR));
        pushButton_visit->setText(QApplication::translate("startlosangeles", "Visit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class startlosangeles: public Ui_startlosangeles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTLOSANGELES_H

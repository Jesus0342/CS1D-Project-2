/********************************************************************************
** Form generated from reading UI file 'startatfordfield.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTATFORDFIELD_H
#define UI_STARTATFORDFIELD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startAtFordField
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_seePrefRoute;
    QLabel *label;
    QLabel *label_2;
    QLCDNumber *lcdNumber_distanceTravelled;
    QLabel *label_3;
    QPushButton *pushButton_buySouvenirs;
    QLabel *label_5_dateToday;
    QPushButton *pushButton_buySouvenirs_2;
    QTableWidget *tableWidget_routes;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *startAtFordField)
    {
        if (startAtFordField->objectName().isEmpty())
            startAtFordField->setObjectName(QStringLiteral("startAtFordField"));
        startAtFordField->resize(537, 544);
        centralwidget = new QWidget(startAtFordField);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_seePrefRoute = new QPushButton(centralwidget);
        pushButton_seePrefRoute->setObjectName(QStringLiteral("pushButton_seePrefRoute"));
        pushButton_seePrefRoute->setGeometry(QRect(130, 80, 221, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 411, 41));
        label->setStyleSheet(QStringLiteral("font: 16pt \"Rockwell\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 121, 20));
        label_2->setStyleSheet(QStringLiteral("font: 12pt \"Rockwell\";"));
        lcdNumber_distanceTravelled = new QLCDNumber(centralwidget);
        lcdNumber_distanceTravelled->setObjectName(QStringLiteral("lcdNumber_distanceTravelled"));
        lcdNumber_distanceTravelled->setGeometry(QRect(320, 270, 141, 51));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 240, 231, 20));
        label_3->setStyleSheet(QStringLiteral("font: 16pt \"Rockwell\";"));
        pushButton_buySouvenirs = new QPushButton(centralwidget);
        pushButton_buySouvenirs->setObjectName(QStringLiteral("pushButton_buySouvenirs"));
        pushButton_buySouvenirs->setGeometry(QRect(190, 170, 171, 51));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/buy.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_buySouvenirs->setIcon(icon);
        pushButton_buySouvenirs->setIconSize(QSize(150, 150));
        pushButton_buySouvenirs->setFlat(true);
        label_5_dateToday = new QLabel(centralwidget);
        label_5_dateToday->setObjectName(QStringLiteral("label_5_dateToday"));
        label_5_dateToday->setGeometry(QRect(500, 40, 291, 81));
        pushButton_buySouvenirs_2 = new QPushButton(centralwidget);
        pushButton_buySouvenirs_2->setObjectName(QStringLiteral("pushButton_buySouvenirs_2"));
        pushButton_buySouvenirs_2->setGeometry(QRect(240, 460, 281, 31));
        tableWidget_routes = new QTableWidget(centralwidget);
        tableWidget_routes->setObjectName(QStringLiteral("tableWidget_routes"));
        tableWidget_routes->setGeometry(QRect(30, 180, 141, 311));
        startAtFordField->setCentralWidget(centralwidget);
        menubar = new QMenuBar(startAtFordField);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 537, 20));
        startAtFordField->setMenuBar(menubar);
        statusbar = new QStatusBar(startAtFordField);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        startAtFordField->setStatusBar(statusbar);

        retranslateUi(startAtFordField);

        QMetaObject::connectSlotsByName(startAtFordField);
    } // setupUi

    void retranslateUi(QMainWindow *startAtFordField)
    {
        startAtFordField->setWindowTitle(QApplication::translate("startAtFordField", "MainWindow", Q_NULLPTR));
        pushButton_seePrefRoute->setText(QApplication::translate("startAtFordField", "Click to See Preferred Routes", Q_NULLPTR));
        label->setText(QApplication::translate("startAtFordField", "Visiting All Stadiums Starting At Ford Field", Q_NULLPTR));
        label_2->setText(QApplication::translate("startAtFordField", "Preferred Route", Q_NULLPTR));
        label_3->setText(QApplication::translate("startAtFordField", "Total Distance Travelled", Q_NULLPTR));
        pushButton_buySouvenirs->setText(QString());
        label_5_dateToday->setText(QString());
        pushButton_buySouvenirs_2->setText(QApplication::translate("startAtFordField", "Back to Main Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class startAtFordField: public Ui_startAtFordField {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTATFORDFIELD_H

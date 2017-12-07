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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startlosangeles
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox_listofstadiums;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_back;
    QPushButton *pushButton_buySouv;
    QPushButton *pushButton_visit;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *startlosangeles)
    {
        if (startlosangeles->objectName().isEmpty())
            startlosangeles->setObjectName(QStringLiteral("startlosangeles"));
        startlosangeles->resize(660, 558);
        centralwidget = new QWidget(startlosangeles);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        comboBox_listofstadiums = new QComboBox(centralwidget);
        comboBox_listofstadiums->setObjectName(QStringLiteral("comboBox_listofstadiums"));
        comboBox_listofstadiums->setGeometry(QRect(190, 110, 281, 31));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(270, 240, 121, 31));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(20, 480, 71, 23));
        pushButton_buySouv = new QPushButton(centralwidget);
        pushButton_buySouv->setObjectName(QStringLiteral("pushButton_buySouv"));
        pushButton_buySouv->setGeometry(QRect(230, 320, 211, 23));
        pushButton_visit = new QPushButton(centralwidget);
        pushButton_visit->setObjectName(QStringLiteral("pushButton_visit"));
        pushButton_visit->setGeometry(QRect(190, 150, 281, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 40, 371, 61));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 210, 181, 21));
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
        pushButton_back->setText(QApplication::translate("startlosangeles", "Back", Q_NULLPTR));
        pushButton_buySouv->setText(QApplication::translate("startlosangeles", "Buy Souvenir", Q_NULLPTR));
        pushButton_visit->setText(QApplication::translate("startlosangeles", "Visit", Q_NULLPTR));
        label->setText(QApplication::translate("startlosangeles", "<html><head/><body><p><span style=\" font-size:12pt;\">Please select the stadium that you would like to visit</span></p><p><span style=\" font-size:12pt;\">starting from Los Angeles Memorial Coliseum.</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("startlosangeles", "<html><head/><body><p><span style=\" font-size:12pt; text-decoration: underline;\">Total Distance Traveled</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class startlosangeles: public Ui_startlosangeles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTLOSANGELES_H

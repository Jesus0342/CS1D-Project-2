/********************************************************************************
** Form generated from reading UI file 'customtour.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMTOUR_H
#define UI_CUSTOMTOUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomTour
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_back;
    QLabel *label_title;
    QGroupBox *groupBox;
    QPushButton *pushButton_add;
    QLabel *label_2;
    QLabel *label_1;
    QLabel *label;
    QPushButton *pushButton_reset;
    QTableWidget *tableWidget_selected;
    QLabel *label_dist;
    QLabel *label_distNum;
    QComboBox *comboBox_stadiums;
    QListWidget *listWidget;
    QGroupBox *groupBox_2;
    QRadioButton *radioButton_selected;
    QRadioButton *radioButton_short;
    QPushButton *pushButton_calculateTrip;
    QLabel *label_error;
    QPushButton *pushButton_souvenirs;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *CustomTour)
    {
        if (CustomTour->objectName().isEmpty())
            CustomTour->setObjectName(QStringLiteral("CustomTour"));
        CustomTour->resize(651, 575);
        centralwidget = new QWidget(CustomTour);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(20, 500, 131, 23));
        QFont font;
        font.setPointSize(10);
        pushButton_back->setFont(font);
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(30, 30, 591, 41));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 90, 611, 401));
        groupBox->setFont(font);
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(10, 90, 211, 23));
        pushButton_add->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 30, 361, 20));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(240, 90, 361, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 211, 16));
        pushButton_reset = new QPushButton(groupBox);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(10, 120, 211, 23));
        pushButton_reset->setFont(font);
        tableWidget_selected = new QTableWidget(groupBox);
        if (tableWidget_selected->columnCount() < 2)
            tableWidget_selected->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_selected->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_selected->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_selected->setObjectName(QStringLiteral("tableWidget_selected"));
        tableWidget_selected->setGeometry(QRect(240, 110, 361, 251));
        tableWidget_selected->setFont(font);
        label_dist = new QLabel(groupBox);
        label_dist->setObjectName(QStringLiteral("label_dist"));
        label_dist->setGeometry(QRect(450, 370, 101, 16));
        label_distNum = new QLabel(groupBox);
        label_distNum->setObjectName(QStringLiteral("label_distNum"));
        label_distNum->setGeometry(QRect(560, 370, 41, 16));
        comboBox_stadiums = new QComboBox(groupBox);
        comboBox_stadiums->setObjectName(QStringLiteral("comboBox_stadiums"));
        comboBox_stadiums->setGeometry(QRect(10, 50, 211, 31));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(240, 50, 351, 21));
        listWidget->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 160, 211, 91));
        radioButton_selected = new QRadioButton(groupBox_2);
        radioButton_selected->setObjectName(QStringLiteral("radioButton_selected"));
        radioButton_selected->setGeometry(QRect(10, 20, 131, 16));
        radioButton_short = new QRadioButton(groupBox_2);
        radioButton_short->setObjectName(QStringLiteral("radioButton_short"));
        radioButton_short->setGeometry(QRect(10, 40, 161, 16));
        pushButton_calculateTrip = new QPushButton(groupBox_2);
        pushButton_calculateTrip->setObjectName(QStringLiteral("pushButton_calculateTrip"));
        pushButton_calculateTrip->setGeometry(QRect(10, 60, 191, 23));
        label_error = new QLabel(groupBox);
        label_error->setObjectName(QStringLiteral("label_error"));
        label_error->setGeometry(QRect(20, 260, 201, 20));
        pushButton_souvenirs = new QPushButton(centralwidget);
        pushButton_souvenirs->setObjectName(QStringLiteral("pushButton_souvenirs"));
        pushButton_souvenirs->setGeometry(QRect(500, 500, 131, 23));
        pushButton_souvenirs->setFont(font);
        CustomTour->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(CustomTour);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CustomTour->setStatusBar(statusbar);
        menubar = new QMenuBar(CustomTour);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 651, 21));
        CustomTour->setMenuBar(menubar);

        retranslateUi(CustomTour);

        QMetaObject::connectSlotsByName(CustomTour);
    } // setupUi

    void retranslateUi(QMainWindow *CustomTour)
    {
        CustomTour->setWindowTitle(QApplication::translate("CustomTour", "MainWindow", Q_NULLPTR));
        pushButton_back->setText(QApplication::translate("CustomTour", "Back to Main Menu", Q_NULLPTR));
        label_title->setText(QApplication::translate("CustomTour", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">Plan a vacation</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CustomTour", "Stadium Selection", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("CustomTour", "Add this stadium", Q_NULLPTR));
        label_2->setText(QApplication::translate("CustomTour", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Starting Stadium</span></p></body></html>", Q_NULLPTR));
        label_1->setText(QApplication::translate("CustomTour", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Selected Stadiums</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("CustomTour", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Available Stadiums</span></p></body></html>", Q_NULLPTR));
        pushButton_reset->setText(QApplication::translate("CustomTour", "Reset stadiums", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_selected->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CustomTour", "Stadium", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_selected->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CustomTour", "Distance", Q_NULLPTR));
        label_dist->setText(QApplication::translate("CustomTour", "<html><head/><body><p><span style=\" font-size:10pt;\">Total Distance: </span></p></body></html>", Q_NULLPTR));
        label_distNum->setText(QApplication::translate("CustomTour", "<html><head/><body><p align=\"right\"><br/></p></body></html>", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CustomTour", "Order to Visit", Q_NULLPTR));
        radioButton_selected->setText(QApplication::translate("CustomTour", "Selected Order", Q_NULLPTR));
        radioButton_short->setText(QApplication::translate("CustomTour", "Shortest Order", Q_NULLPTR));
        pushButton_calculateTrip->setText(QApplication::translate("CustomTour", "Calculate Trip", Q_NULLPTR));
        label_error->setText(QString());
        pushButton_souvenirs->setText(QApplication::translate("CustomTour", "Buy Souvenirs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomTour: public Ui_CustomTour {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMTOUR_H

/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QPushButton *pushButton_confirmAdd;
    QComboBox *comboBox_stadiumList_add;
    QDoubleSpinBox *doubleSpinBox_itemPrice;
    QLineEdit *lineEdit_itemName;
    QPushButton *pushButton_clearFields;
    QLabel *label_status;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_backAddSouvenirs;
    QWidget *page_modifySouvenirs;
    QLabel *label_adminTitle_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_stadiumList_delete;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_souvenirList_delete;
    QPushButton *pushButton;
    QLabel *label_success;
    QPushButton *pushButton_backDeleteSouvenirs;
    QWidget *page_modifyStadiumInfo;
    QLabel *label_adminTitle_5;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_stadiumList_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_souvenirList_2;
    QPushButton *confirmModify;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLineEdit *lineEdit_souvenirPrice;
    QLabel *label_status_2;

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
        comboBox_adminFunctions->setGeometry(QRect(110, 140, 321, 22));
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
        pushButton_confirmAdd = new QPushButton(page_addSouvenirs);
        pushButton_confirmAdd->setObjectName(QStringLiteral("pushButton_confirmAdd"));
        pushButton_confirmAdd->setGeometry(QRect(90, 280, 411, 31));
        comboBox_stadiumList_add = new QComboBox(page_addSouvenirs);
        comboBox_stadiumList_add->setObjectName(QStringLiteral("comboBox_stadiumList_add"));
        comboBox_stadiumList_add->setGeometry(QRect(160, 120, 251, 41));
        doubleSpinBox_itemPrice = new QDoubleSpinBox(page_addSouvenirs);
        doubleSpinBox_itemPrice->setObjectName(QStringLiteral("doubleSpinBox_itemPrice"));
        doubleSpinBox_itemPrice->setGeometry(QRect(160, 210, 131, 31));
        doubleSpinBox_itemPrice->setMaximum(1e+9);
        lineEdit_itemName = new QLineEdit(page_addSouvenirs);
        lineEdit_itemName->setObjectName(QStringLiteral("lineEdit_itemName"));
        lineEdit_itemName->setGeometry(QRect(160, 170, 251, 31));
        pushButton_clearFields = new QPushButton(page_addSouvenirs);
        pushButton_clearFields->setObjectName(QStringLiteral("pushButton_clearFields"));
        pushButton_clearFields->setGeometry(QRect(90, 320, 411, 31));
        label_status = new QLabel(page_addSouvenirs);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(160, 360, 281, 51));
        label_status->setStyleSheet(QStringLiteral("font: 16pt \"Tahoma\";"));
        label_1 = new QLabel(page_addSouvenirs);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(90, 130, 61, 21));
        label_1->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(page_addSouvenirs);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 170, 91, 21));
        label_2->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label_3 = new QLabel(page_addSouvenirs);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 210, 91, 21));
        label_3->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        pushButton_backAddSouvenirs = new QPushButton(page_addSouvenirs);
        pushButton_backAddSouvenirs->setObjectName(QStringLiteral("pushButton_backAddSouvenirs"));
        pushButton_backAddSouvenirs->setGeometry(QRect(10, 420, 75, 23));
        stackedWidget->addWidget(page_addSouvenirs);
        page_modifySouvenirs = new QWidget();
        page_modifySouvenirs->setObjectName(QStringLiteral("page_modifySouvenirs"));
        label_adminTitle_4 = new QLabel(page_modifySouvenirs);
        label_adminTitle_4->setObjectName(QStringLiteral("label_adminTitle_4"));
        label_adminTitle_4->setGeometry(QRect(0, 0, 561, 91));
        groupBox = new QGroupBox(page_modifySouvenirs);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 100, 351, 121));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 311, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        comboBox_stadiumList_delete = new QComboBox(layoutWidget);
        comboBox_stadiumList_delete->setObjectName(QStringLiteral("comboBox_stadiumList_delete"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_stadiumList_delete->sizePolicy().hasHeightForWidth());
        comboBox_stadiumList_delete->setSizePolicy(sizePolicy);
        comboBox_stadiumList_delete->setMinimumSize(QSize(50, 0));

        horizontalLayout_2->addWidget(comboBox_stadiumList_delete);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 311, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBox_souvenirList_delete = new QComboBox(layoutWidget1);
        comboBox_souvenirList_delete->setObjectName(QStringLiteral("comboBox_souvenirList_delete"));
        sizePolicy.setHeightForWidth(comboBox_souvenirList_delete->sizePolicy().hasHeightForWidth());
        comboBox_souvenirList_delete->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(comboBox_souvenirList_delete);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 80, 131, 21));
        label_success = new QLabel(page_modifySouvenirs);
        label_success->setObjectName(QStringLiteral("label_success"));
        label_success->setGeometry(QRect(106, 240, 341, 31));
        label_success->setStyleSheet(QStringLiteral("font: 20pt \"Times New Roman\";"));
        pushButton_backDeleteSouvenirs = new QPushButton(page_modifySouvenirs);
        pushButton_backDeleteSouvenirs->setObjectName(QStringLiteral("pushButton_backDeleteSouvenirs"));
        pushButton_backDeleteSouvenirs->setGeometry(QRect(20, 420, 75, 23));
        stackedWidget->addWidget(page_modifySouvenirs);
        page_modifyStadiumInfo = new QWidget();
        page_modifyStadiumInfo->setObjectName(QStringLiteral("page_modifyStadiumInfo"));
        label_adminTitle_5 = new QLabel(page_modifyStadiumInfo);
        label_adminTitle_5->setObjectName(QStringLiteral("label_adminTitle_5"));
        label_adminTitle_5->setGeometry(QRect(10, 10, 561, 81));
        groupBox_2 = new QGroupBox(page_modifyStadiumInfo);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 100, 351, 181));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 311, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBox_stadiumList_2 = new QComboBox(layoutWidget_2);
        comboBox_stadiumList_2->setObjectName(QStringLiteral("comboBox_stadiumList_2"));
        sizePolicy.setHeightForWidth(comboBox_stadiumList_2->sizePolicy().hasHeightForWidth());
        comboBox_stadiumList_2->setSizePolicy(sizePolicy);
        comboBox_stadiumList_2->setMinimumSize(QSize(50, 0));

        horizontalLayout_4->addWidget(comboBox_stadiumList_2);

        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 50, 311, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBox_souvenirList_2 = new QComboBox(layoutWidget_3);
        comboBox_souvenirList_2->setObjectName(QStringLiteral("comboBox_souvenirList_2"));

        horizontalLayout_5->addWidget(comboBox_souvenirList_2);

        confirmModify = new QPushButton(groupBox_2);
        confirmModify->setObjectName(QStringLiteral("confirmModify"));
        confirmModify->setGeometry(QRect(110, 140, 131, 21));
        layoutWidget_4 = new QWidget(groupBox_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 100, 311, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_6->addWidget(label_8);

        lineEdit_souvenirPrice = new QLineEdit(layoutWidget_4);
        lineEdit_souvenirPrice->setObjectName(QStringLiteral("lineEdit_souvenirPrice"));

        horizontalLayout_6->addWidget(lineEdit_souvenirPrice);

        label_status_2 = new QLabel(page_modifyStadiumInfo);
        label_status_2->setObjectName(QStringLiteral("label_status_2"));
        label_status_2->setGeometry(QRect(160, 300, 281, 51));
        label_status_2->setStyleSheet(QStringLiteral("font: 16pt \"Tahoma\";"));
        stackedWidget->addWidget(page_modifyStadiumInfo);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(AdminWindow);

        stackedWidget->setCurrentIndex(4);
        comboBox_adminFunctions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", Q_NULLPTR));
        label_adminTitle_2->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Administrator Window</span></p></body></html>", Q_NULLPTR));
        pushButton_logout->setText(QApplication::translate("AdminWindow", "Logout", Q_NULLPTR));
        comboBox_adminFunctions->clear();
        comboBox_adminFunctions->insertItems(0, QStringList()
         << QApplication::translate("AdminWindow", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("AdminWindow", "1 - Add New Stadiums", Q_NULLPTR)
         << QApplication::translate("AdminWindow", "2 - Add Souvenirs", Q_NULLPTR)
         << QApplication::translate("AdminWindow", "3 - Delete Souvenirs", Q_NULLPTR)
         << QApplication::translate("AdminWindow", "4 - Modify Stadium and Souvneir Information", Q_NULLPTR)
        );
        label_adminTitle->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Add New Stadiums</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_newStadiums->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AdminWindow", "Team Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_newStadiums->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AdminWindow", "Stadium Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_newStadiums->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AdminWindow", "Seating Capacity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_newStadiums->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AdminWindow", "Location", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_newStadiums->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("AdminWindow", "Conference", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_newStadiums->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("AdminWindow", "Surface Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_newStadiums->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("AdminWindow", "Roof Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_newStadiums->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("AdminWindow", "Star Player", Q_NULLPTR));
        pushButton_addStadiums->setText(QApplication::translate("AdminWindow", "Add Stadiums", Q_NULLPTR));
        pushButton_backAddStadiums->setText(QApplication::translate("AdminWindow", "Back", Q_NULLPTR));
        pushButton_reset->setText(QApplication::translate("AdminWindow", "Reset", Q_NULLPTR));
        label_adminTitle_3->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Add Souvenirs</span></p></body></html>", Q_NULLPTR));
        pushButton_confirmAdd->setText(QApplication::translate("AdminWindow", "CONFIRM", Q_NULLPTR));
        pushButton_clearFields->setText(QApplication::translate("AdminWindow", "CLEAR FIELDS", Q_NULLPTR));
        label_status->setText(QString());
        label_1->setText(QApplication::translate("AdminWindow", "Stadiums", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminWindow", "Souvenir Name", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminWindow", "Souvenir Price", Q_NULLPTR));
        pushButton_backAddSouvenirs->setText(QApplication::translate("AdminWindow", "Back", Q_NULLPTR));
        label_adminTitle_4->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Delete Souvenirs</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AdminWindow", "Delete Souvenir", Q_NULLPTR));
        label->setText(QApplication::translate("AdminWindow", "Stadium:", Q_NULLPTR));
        label_4->setText(QApplication::translate("AdminWindow", "Souvenir:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AdminWindow", "Delete", Q_NULLPTR));
        label_success->setText(QString());
        pushButton_backDeleteSouvenirs->setText(QApplication::translate("AdminWindow", "Back", Q_NULLPTR));
        label_adminTitle_5->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Modify Souvenirs</span></p></body></html>", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("AdminWindow", "Modify Souvenirs", Q_NULLPTR));
        label_5->setText(QApplication::translate("AdminWindow", "Stadium:", Q_NULLPTR));
        label_6->setText(QApplication::translate("AdminWindow", "Souvenir:", Q_NULLPTR));
        confirmModify->setText(QApplication::translate("AdminWindow", "Modify", Q_NULLPTR));
        label_8->setText(QApplication::translate("AdminWindow", "Souvenir Price:             ", Q_NULLPTR));
        label_status_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H

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
    QWidget *page_modifyStadiums;
    QLabel *label_adminTitle_6;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *comboBox_teamList;
    QPushButton *confirmModifyStadiums;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *lineEdit_stadiumName;
    QLabel *label_stadiumNameModified;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEdit_stadiumSeatingCapacity;
    QLabel *label_seatingCapacityModified;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdit_stadiumLocation;
    QLabel *label_locationModified;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *lineEdit_stadiumSurfaceType;
    QLabel *label_surfaceTypeModified;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QLineEdit *lineEdit_stadiumRoofType;
    QLabel *label_roofTypeModified;
    QPushButton *pushButton_backModifyStadiums;
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
    QComboBox *comboBox_teamList_add;
    QDoubleSpinBox *doubleSpinBox_itemPrice;
    QLineEdit *lineEdit_itemName;
    QPushButton *pushButton_clearFields;
    QLabel *label_status;
    QLabel *label_1;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_backAddSouvenirs;
    QWidget *page_deleteSouveinrs;
    QLabel *label_adminTitle_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_teamList_delete;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox_souvenirList_delete;
    QPushButton *pushButton;
    QLabel *label_success;
    QPushButton *pushButton_backDeleteSouvenirs;
    QWidget *page_modifySouvenirs;
    QLabel *label_adminTitle_5;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_teamList_2;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_souvenirList_2;
    QPushButton *confirmModify;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_newPrice;
    QLabel *label_status_2;
    QPushButton *pushButton_backModifySouvenirs;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(591, 481);
        horizontalLayout = new QHBoxLayout(AdminWindow);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        stackedWidget = new QStackedWidget(AdminWindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_modifyStadiums = new QWidget();
        page_modifyStadiums->setObjectName(QStringLiteral("page_modifyStadiums"));
        label_adminTitle_6 = new QLabel(page_modifyStadiums);
        label_adminTitle_6->setObjectName(QStringLiteral("label_adminTitle_6"));
        label_adminTitle_6->setGeometry(QRect(10, 10, 561, 81));
        groupBox_3 = new QGroupBox(page_modifyStadiums);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(70, 90, 431, 261));
        layoutWidget_5 = new QWidget(groupBox_3);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 20, 311, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setPointSize(10);
        label_7->setFont(font);

        horizontalLayout_7->addWidget(label_7);

        comboBox_teamList = new QComboBox(layoutWidget_5);
        comboBox_teamList->setObjectName(QStringLiteral("comboBox_teamList"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_teamList->sizePolicy().hasHeightForWidth());
        comboBox_teamList->setSizePolicy(sizePolicy);
        comboBox_teamList->setMinimumSize(QSize(50, 0));

        horizontalLayout_7->addWidget(comboBox_teamList);

        confirmModifyStadiums = new QPushButton(groupBox_3);
        confirmModifyStadiums->setObjectName(QStringLiteral("confirmModifyStadiums"));
        confirmModifyStadiums->setGeometry(QRect(150, 220, 131, 21));
        layoutWidget_7 = new QWidget(groupBox_3);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(20, 60, 391, 24));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_7);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_9->addWidget(label_10);

        lineEdit_stadiumName = new QLineEdit(layoutWidget_7);
        lineEdit_stadiumName->setObjectName(QStringLiteral("lineEdit_stadiumName"));
        lineEdit_stadiumName->setEnabled(true);

        horizontalLayout_9->addWidget(lineEdit_stadiumName);

        label_stadiumNameModified = new QLabel(layoutWidget_7);
        label_stadiumNameModified->setObjectName(QStringLiteral("label_stadiumNameModified"));
        label_stadiumNameModified->setMinimumSize(QSize(40, 0));

        horizontalLayout_9->addWidget(label_stadiumNameModified);

        layoutWidget_8 = new QWidget(groupBox_3);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(20, 90, 391, 24));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_8);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_10->addWidget(label_11);

        lineEdit_stadiumSeatingCapacity = new QLineEdit(layoutWidget_8);
        lineEdit_stadiumSeatingCapacity->setObjectName(QStringLiteral("lineEdit_stadiumSeatingCapacity"));

        horizontalLayout_10->addWidget(lineEdit_stadiumSeatingCapacity);

        label_seatingCapacityModified = new QLabel(layoutWidget_8);
        label_seatingCapacityModified->setObjectName(QStringLiteral("label_seatingCapacityModified"));
        label_seatingCapacityModified->setMinimumSize(QSize(40, 0));

        horizontalLayout_10->addWidget(label_seatingCapacityModified);

        layoutWidget_9 = new QWidget(groupBox_3);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(20, 120, 391, 24));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_9);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_11->addWidget(label_12);

        lineEdit_stadiumLocation = new QLineEdit(layoutWidget_9);
        lineEdit_stadiumLocation->setObjectName(QStringLiteral("lineEdit_stadiumLocation"));

        horizontalLayout_11->addWidget(lineEdit_stadiumLocation);

        label_locationModified = new QLabel(layoutWidget_9);
        label_locationModified->setObjectName(QStringLiteral("label_locationModified"));
        label_locationModified->setMinimumSize(QSize(40, 0));

        horizontalLayout_11->addWidget(label_locationModified);

        layoutWidget_10 = new QWidget(groupBox_3);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(20, 150, 391, 24));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_10);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_12->addWidget(label_13);

        lineEdit_stadiumSurfaceType = new QLineEdit(layoutWidget_10);
        lineEdit_stadiumSurfaceType->setObjectName(QStringLiteral("lineEdit_stadiumSurfaceType"));

        horizontalLayout_12->addWidget(lineEdit_stadiumSurfaceType);

        label_surfaceTypeModified = new QLabel(layoutWidget_10);
        label_surfaceTypeModified->setObjectName(QStringLiteral("label_surfaceTypeModified"));
        label_surfaceTypeModified->setMinimumSize(QSize(40, 0));

        horizontalLayout_12->addWidget(label_surfaceTypeModified);

        layoutWidget_11 = new QWidget(groupBox_3);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(20, 180, 391, 24));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_11);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_13->addWidget(label_14);

        lineEdit_stadiumRoofType = new QLineEdit(layoutWidget_11);
        lineEdit_stadiumRoofType->setObjectName(QStringLiteral("lineEdit_stadiumRoofType"));

        horizontalLayout_13->addWidget(lineEdit_stadiumRoofType);

        label_roofTypeModified = new QLabel(layoutWidget_11);
        label_roofTypeModified->setObjectName(QStringLiteral("label_roofTypeModified"));
        label_roofTypeModified->setMinimumSize(QSize(40, 0));

        horizontalLayout_13->addWidget(label_roofTypeModified);

        pushButton_backModifyStadiums = new QPushButton(page_modifyStadiums);
        pushButton_backModifyStadiums->setObjectName(QStringLiteral("pushButton_backModifyStadiums"));
        pushButton_backModifyStadiums->setGeometry(QRect(10, 430, 75, 23));
        stackedWidget->addWidget(page_modifyStadiums);
        page_adminHome = new QWidget();
        page_adminHome->setObjectName(QStringLiteral("page_adminHome"));
        label_adminTitle_2 = new QLabel(page_adminHome);
        label_adminTitle_2->setObjectName(QStringLiteral("label_adminTitle_2"));
        label_adminTitle_2->setGeometry(QRect(10, 40, 561, 91));
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
        comboBox_teamList_add = new QComboBox(page_addSouvenirs);
        comboBox_teamList_add->setObjectName(QStringLiteral("comboBox_teamList_add"));
        comboBox_teamList_add->setGeometry(QRect(160, 120, 251, 41));
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
        page_deleteSouveinrs = new QWidget();
        page_deleteSouveinrs->setObjectName(QStringLiteral("page_deleteSouveinrs"));
        label_adminTitle_4 = new QLabel(page_deleteSouveinrs);
        label_adminTitle_4->setObjectName(QStringLiteral("label_adminTitle_4"));
        label_adminTitle_4->setGeometry(QRect(0, 0, 561, 91));
        groupBox = new QGroupBox(page_deleteSouveinrs);
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

        comboBox_teamList_delete = new QComboBox(layoutWidget);
        comboBox_teamList_delete->setObjectName(QStringLiteral("comboBox_teamList_delete"));
        sizePolicy.setHeightForWidth(comboBox_teamList_delete->sizePolicy().hasHeightForWidth());
        comboBox_teamList_delete->setSizePolicy(sizePolicy);
        comboBox_teamList_delete->setMinimumSize(QSize(50, 0));

        horizontalLayout_2->addWidget(comboBox_teamList_delete);

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
        label_success = new QLabel(page_deleteSouveinrs);
        label_success->setObjectName(QStringLiteral("label_success"));
        label_success->setGeometry(QRect(106, 240, 341, 31));
        label_success->setStyleSheet(QStringLiteral("font: 20pt \"Times New Roman\";"));
        pushButton_backDeleteSouvenirs = new QPushButton(page_deleteSouveinrs);
        pushButton_backDeleteSouvenirs->setObjectName(QStringLiteral("pushButton_backDeleteSouvenirs"));
        pushButton_backDeleteSouvenirs->setGeometry(QRect(20, 420, 75, 23));
        stackedWidget->addWidget(page_deleteSouveinrs);
        page_modifySouvenirs = new QWidget();
        page_modifySouvenirs->setObjectName(QStringLiteral("page_modifySouvenirs"));
        label_adminTitle_5 = new QLabel(page_modifySouvenirs);
        label_adminTitle_5->setObjectName(QStringLiteral("label_adminTitle_5"));
        label_adminTitle_5->setGeometry(QRect(10, 10, 561, 81));
        groupBox_2 = new QGroupBox(page_modifySouvenirs);
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

        comboBox_teamList_2 = new QComboBox(layoutWidget_2);
        comboBox_teamList_2->setObjectName(QStringLiteral("comboBox_teamList_2"));
        sizePolicy.setHeightForWidth(comboBox_teamList_2->sizePolicy().hasHeightForWidth());
        comboBox_teamList_2->setSizePolicy(sizePolicy);
        comboBox_teamList_2->setMinimumSize(QSize(50, 0));

        horizontalLayout_4->addWidget(comboBox_teamList_2);

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
        layoutWidget_4->setGeometry(QRect(20, 100, 311, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        horizontalLayout_6->addWidget(label_8);

        doubleSpinBox_newPrice = new QDoubleSpinBox(layoutWidget_4);
        doubleSpinBox_newPrice->setObjectName(QStringLiteral("doubleSpinBox_newPrice"));
        doubleSpinBox_newPrice->setMaximum(999.99);

        horizontalLayout_6->addWidget(doubleSpinBox_newPrice);

        label_status_2 = new QLabel(page_modifySouvenirs);
        label_status_2->setObjectName(QStringLiteral("label_status_2"));
        label_status_2->setGeometry(QRect(160, 300, 281, 51));
        label_status_2->setStyleSheet(QStringLiteral("font: 16pt \"Tahoma\";"));
        pushButton_backModifySouvenirs = new QPushButton(page_modifySouvenirs);
        pushButton_backModifySouvenirs->setObjectName(QStringLiteral("pushButton_backModifySouvenirs"));
        pushButton_backModifySouvenirs->setGeometry(QRect(10, 430, 75, 23));
        stackedWidget->addWidget(page_modifySouvenirs);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(AdminWindow);

        stackedWidget->setCurrentIndex(1);
        comboBox_adminFunctions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", 0));
        label_adminTitle_6->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Modify Stadiums</span></p></body></html>", 0));
        groupBox_3->setTitle(QApplication::translate("AdminWindow", "Modify Stadiums", 0));
        label_7->setText(QApplication::translate("AdminWindow", "Team Name:", 0));
        confirmModifyStadiums->setText(QApplication::translate("AdminWindow", "Modify", 0));
        label_10->setText(QApplication::translate("AdminWindow", "Stadium Name:             ", 0));
        label_stadiumNameModified->setText(QString());
        label_11->setText(QApplication::translate("AdminWindow", "Seating Capacity:          ", 0));
        label_seatingCapacityModified->setText(QString());
        label_12->setText(QApplication::translate("AdminWindow", "Location:                      ", 0));
        label_locationModified->setText(QString());
        label_13->setText(QApplication::translate("AdminWindow", "Surface Type:               ", 0));
        label_surfaceTypeModified->setText(QString());
        label_14->setText(QApplication::translate("AdminWindow", "Stadium Roof Type:       ", 0));
        label_roofTypeModified->setText(QString());
        pushButton_backModifyStadiums->setText(QApplication::translate("AdminWindow", "Back", 0));
        label_adminTitle_2->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; color:#ffff00;\">Administrator Window</span></p></body></html>", 0));
        pushButton_logout->setText(QApplication::translate("AdminWindow", "Logout", 0));
        comboBox_adminFunctions->clear();
        comboBox_adminFunctions->insertItems(0, QStringList()
         << QApplication::translate("AdminWindow", "<Select Here>", 0)
         << QApplication::translate("AdminWindow", "1 - Add New Stadiums", 0)
         << QApplication::translate("AdminWindow", "2 - Add Souvenirs", 0)
         << QApplication::translate("AdminWindow", "3 - Delete Souvenirs", 0)
         << QApplication::translate("AdminWindow", "4 - Change Souvenir Price", 0)
         << QApplication::translate("AdminWindow", "5 - Modify Stadium Information", 0)
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
        pushButton_confirmAdd->setText(QApplication::translate("AdminWindow", "CONFIRM", 0));
        pushButton_clearFields->setText(QApplication::translate("AdminWindow", "CLEAR FIELDS", 0));
        label_status->setText(QString());
        label_1->setText(QApplication::translate("AdminWindow", "Teams", 0));
        label_2->setText(QApplication::translate("AdminWindow", "Souvenir Name", 0));
        label_3->setText(QApplication::translate("AdminWindow", "Souvenir Price", 0));
        pushButton_backAddSouvenirs->setText(QApplication::translate("AdminWindow", "Back", 0));
        label_adminTitle_4->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Delete Souvenirs</span></p></body></html>", 0));
        groupBox->setTitle(QApplication::translate("AdminWindow", "Delete Souvenir", 0));
        label->setText(QApplication::translate("AdminWindow", "Team:", 0));
        label_4->setText(QApplication::translate("AdminWindow", "Souvenir:", 0));
        pushButton->setText(QApplication::translate("AdminWindow", "Delete", 0));
        label_success->setText(QString());
        pushButton_backDeleteSouvenirs->setText(QApplication::translate("AdminWindow", "Back", 0));
        label_adminTitle_5->setText(QApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Modify Souvenirs</span></p></body></html>", 0));
        groupBox_2->setTitle(QApplication::translate("AdminWindow", "Modify Souvenirs", 0));
        label_5->setText(QApplication::translate("AdminWindow", "Team:", 0));
        label_6->setText(QApplication::translate("AdminWindow", "Souvenir:", 0));
        confirmModify->setText(QApplication::translate("AdminWindow", "Modify", 0));
        label_8->setText(QApplication::translate("AdminWindow", "Souvenir Price:             ", 0));
        label_status_2->setText(QString());
        pushButton_backModifySouvenirs->setText(QApplication::translate("AdminWindow", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H

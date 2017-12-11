/********************************************************************************
** Form generated from reading UI file 'traversegraph.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVERSEGRAPH_H
#define UI_TRAVERSEGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_traversegraph
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_home;
    QLabel *label_graphHome;
    QPushButton *pushButton_backGraph;
    QLabel *label_graphImage;
    QComboBox *comboBox;
    QWidget *page_MST;
    QLabel *label_titleMST;
    QPushButton *pushButton_backMST;
    QTableWidget *tableWidget_MST;
    QLabel *label_distanceMST;
    QWidget *page_DFS;
    QLabel *label_titleDFS;
    QPushButton *pushButton_backDFS;
    QTableWidget *tableWidget_DFS;
    QLabel *label_distanceDFS;
    QWidget *page_BFS;
    QLabel *label_titleBFS;
    QPushButton *pushButton_backBFS;
    QTableWidget *tableWidget_BFS;
    QLabel *label_distanceBFS;

    void setupUi(QDialog *traversegraph)
    {
        if (traversegraph->objectName().isEmpty())
            traversegraph->setObjectName(QStringLiteral("traversegraph"));
        traversegraph->resize(570, 470);
        verticalLayout = new QVBoxLayout(traversegraph);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(traversegraph);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_home = new QWidget();
        page_home->setObjectName(QStringLiteral("page_home"));
        label_graphHome = new QLabel(page_home);
        label_graphHome->setObjectName(QStringLiteral("label_graphHome"));
        label_graphHome->setGeometry(QRect(100, 10, 351, 91));
        pushButton_backGraph = new QPushButton(page_home);
        pushButton_backGraph->setObjectName(QStringLiteral("pushButton_backGraph"));
        pushButton_backGraph->setGeometry(QRect(190, 402, 101, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("Resources/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_backGraph->setIcon(icon);
        pushButton_backGraph->setIconSize(QSize(100, 100));
        pushButton_backGraph->setFlat(true);
        label_graphImage = new QLabel(page_home);
        label_graphImage->setObjectName(QStringLiteral("label_graphImage"));
        label_graphImage->setGeometry(QRect(40, 100, 471, 221));
        comboBox = new QComboBox(page_home);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(220, 140, 251, 22));
        stackedWidget->addWidget(page_home);
        page_MST = new QWidget();
        page_MST->setObjectName(QStringLiteral("page_MST"));
        label_titleMST = new QLabel(page_MST);
        label_titleMST->setObjectName(QStringLiteral("label_titleMST"));
        label_titleMST->setGeometry(QRect(10, 10, 531, 91));
        pushButton_backMST = new QPushButton(page_MST);
        pushButton_backMST->setObjectName(QStringLiteral("pushButton_backMST"));
        pushButton_backMST->setGeometry(QRect(10, 420, 75, 23));
        tableWidget_MST = new QTableWidget(page_MST);
        if (tableWidget_MST->columnCount() < 1)
            tableWidget_MST->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_MST->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget_MST->setObjectName(QStringLiteral("tableWidget_MST"));
        tableWidget_MST->setGeometry(QRect(30, 100, 231, 251));
        label_distanceMST = new QLabel(page_MST);
        label_distanceMST->setObjectName(QStringLiteral("label_distanceMST"));
        label_distanceMST->setGeometry(QRect(270, 160, 281, 31));
        stackedWidget->addWidget(page_MST);
        page_DFS = new QWidget();
        page_DFS->setObjectName(QStringLiteral("page_DFS"));
        label_titleDFS = new QLabel(page_DFS);
        label_titleDFS->setObjectName(QStringLiteral("label_titleDFS"));
        label_titleDFS->setGeometry(QRect(10, 10, 531, 91));
        pushButton_backDFS = new QPushButton(page_DFS);
        pushButton_backDFS->setObjectName(QStringLiteral("pushButton_backDFS"));
        pushButton_backDFS->setGeometry(QRect(10, 420, 75, 23));
        tableWidget_DFS = new QTableWidget(page_DFS);
        if (tableWidget_DFS->columnCount() < 1)
            tableWidget_DFS->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_DFS->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        tableWidget_DFS->setObjectName(QStringLiteral("tableWidget_DFS"));
        tableWidget_DFS->setGeometry(QRect(30, 100, 231, 251));
        label_distanceDFS = new QLabel(page_DFS);
        label_distanceDFS->setObjectName(QStringLiteral("label_distanceDFS"));
        label_distanceDFS->setGeometry(QRect(270, 170, 281, 31));
        stackedWidget->addWidget(page_DFS);
        page_BFS = new QWidget();
        page_BFS->setObjectName(QStringLiteral("page_BFS"));
        label_titleBFS = new QLabel(page_BFS);
        label_titleBFS->setObjectName(QStringLiteral("label_titleBFS"));
        label_titleBFS->setGeometry(QRect(10, 10, 531, 91));
        pushButton_backBFS = new QPushButton(page_BFS);
        pushButton_backBFS->setObjectName(QStringLiteral("pushButton_backBFS"));
        pushButton_backBFS->setGeometry(QRect(10, 420, 75, 23));
        tableWidget_BFS = new QTableWidget(page_BFS);
        if (tableWidget_BFS->columnCount() < 1)
            tableWidget_BFS->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_BFS->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        tableWidget_BFS->setObjectName(QStringLiteral("tableWidget_BFS"));
        tableWidget_BFS->setGeometry(QRect(30, 100, 231, 251));
        label_distanceBFS = new QLabel(page_BFS);
        label_distanceBFS->setObjectName(QStringLiteral("label_distanceBFS"));
        label_distanceBFS->setGeometry(QRect(270, 190, 281, 31));
        stackedWidget->addWidget(page_BFS);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(traversegraph);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(traversegraph);
    } // setupUi

    void retranslateUi(QDialog *traversegraph)
    {
        traversegraph->setWindowTitle(QApplication::translate("traversegraph", "Dialog", Q_NULLPTR));
        label_graphHome->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Traverse Graph</span></p></body></html>", Q_NULLPTR));
        pushButton_backGraph->setText(QString());
        label_graphImage->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("traversegraph", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("traversegraph", "1 - Minimum Spanning Tree", Q_NULLPTR)
         << QApplication::translate("traversegraph", "2 - Depth-First Search (from Hard Rock Stadium)", Q_NULLPTR)
         << QApplication::translate("traversegraph", "3 - Breadth-First Search (from Lambeau Field)", Q_NULLPTR)
        );
        label_titleMST->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Minimum Spanning Tree</span></p></body></html>", Q_NULLPTR));
        pushButton_backMST->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_MST->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("traversegraph", "Stadium Name", Q_NULLPTR));
        label_distanceMST->setText(QString());
        label_titleDFS->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt;\">DFS - Starting at Hard Rock Stadium</span></p></body></html>", Q_NULLPTR));
        pushButton_backDFS->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_DFS->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("traversegraph", "Stadium Name", Q_NULLPTR));
        label_distanceDFS->setText(QString());
        label_titleBFS->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt;\">BFS - Starting at Lambeau Field</span></p></body></html>", Q_NULLPTR));
        pushButton_backBFS->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_BFS->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("traversegraph", "Stadium Name", Q_NULLPTR));
        label_distanceBFS->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class traversegraph: public Ui_traversegraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVERSEGRAPH_H

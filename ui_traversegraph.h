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
    QWidget *page_DFS;
    QLabel *label_titleDFS;
    QPushButton *pushButton_backDFS;
    QWidget *page_BFS;
    QLabel *label_titleBFS;
    QPushButton *pushButton_backBFS;

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
        pushButton_backGraph->setGeometry(QRect(10, 420, 75, 23));
        label_graphImage = new QLabel(page_home);
        label_graphImage->setObjectName(QStringLiteral("label_graphImage"));
        label_graphImage->setGeometry(QRect(40, 100, 471, 221));
        comboBox = new QComboBox(page_home);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(190, 350, 161, 22));
        stackedWidget->addWidget(page_home);
        page_MST = new QWidget();
        page_MST->setObjectName(QStringLiteral("page_MST"));
        label_titleMST = new QLabel(page_MST);
        label_titleMST->setObjectName(QStringLiteral("label_titleMST"));
        label_titleMST->setGeometry(QRect(10, 10, 531, 91));
        pushButton_backMST = new QPushButton(page_MST);
        pushButton_backMST->setObjectName(QStringLiteral("pushButton_backMST"));
        pushButton_backMST->setGeometry(QRect(10, 420, 75, 23));
        stackedWidget->addWidget(page_MST);
        page_DFS = new QWidget();
        page_DFS->setObjectName(QStringLiteral("page_DFS"));
        label_titleDFS = new QLabel(page_DFS);
        label_titleDFS->setObjectName(QStringLiteral("label_titleDFS"));
        label_titleDFS->setGeometry(QRect(10, 10, 531, 91));
        pushButton_backDFS = new QPushButton(page_DFS);
        pushButton_backDFS->setObjectName(QStringLiteral("pushButton_backDFS"));
        pushButton_backDFS->setGeometry(QRect(10, 420, 75, 23));
        stackedWidget->addWidget(page_DFS);
        page_BFS = new QWidget();
        page_BFS->setObjectName(QStringLiteral("page_BFS"));
        label_titleBFS = new QLabel(page_BFS);
        label_titleBFS->setObjectName(QStringLiteral("label_titleBFS"));
        label_titleBFS->setGeometry(QRect(10, 10, 531, 91));
        pushButton_backBFS = new QPushButton(page_BFS);
        pushButton_backBFS->setObjectName(QStringLiteral("pushButton_backBFS"));
        pushButton_backBFS->setGeometry(QRect(10, 420, 75, 23));
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
        pushButton_backGraph->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
        label_graphImage->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("traversegraph", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("traversegraph", "1 - Minimum Spanning Tree", Q_NULLPTR)
         << QApplication::translate("traversegraph", "2 - Depth-First Search", Q_NULLPTR)
         << QApplication::translate("traversegraph", "3 - Breadth-First Search", Q_NULLPTR)
        );
        label_titleMST->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Minimum Spanning Tree</span></p></body></html>", Q_NULLPTR));
        pushButton_backMST->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
        label_titleDFS->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Depth-First Search</span></p></body></html>", Q_NULLPTR));
        pushButton_backDFS->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
        label_titleBFS->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Breadth-First Search</span></p></body></html>", Q_NULLPTR));
        pushButton_backBFS->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class traversegraph: public Ui_traversegraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVERSEGRAPH_H

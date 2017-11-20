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
    QWidget *page;
    QLabel *label_graphHome;
    QPushButton *pushButton_backGraph;
    QLabel *label_graphImage;
    QComboBox *comboBox;
    QWidget *page_2;

    void setupUi(QDialog *traversegraph)
    {
        if (traversegraph->objectName().isEmpty())
            traversegraph->setObjectName(QStringLiteral("traversegraph"));
        traversegraph->resize(570, 470);
        verticalLayout = new QVBoxLayout(traversegraph);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(traversegraph);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_graphHome = new QLabel(page);
        label_graphHome->setObjectName(QStringLiteral("label_graphHome"));
        label_graphHome->setGeometry(QRect(100, 0, 351, 91));
        pushButton_backGraph = new QPushButton(page);
        pushButton_backGraph->setObjectName(QStringLiteral("pushButton_backGraph"));
        pushButton_backGraph->setGeometry(QRect(10, 420, 75, 23));
        label_graphImage = new QLabel(page);
        label_graphImage->setObjectName(QStringLiteral("label_graphImage"));
        label_graphImage->setGeometry(QRect(40, 100, 471, 221));
        comboBox = new QComboBox(page);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(190, 350, 161, 22));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(traversegraph);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(traversegraph);
    } // setupUi

    void retranslateUi(QDialog *traversegraph)
    {
        traversegraph->setWindowTitle(QApplication::translate("traversegraph", "Dialog", Q_NULLPTR));
        label_graphHome->setText(QApplication::translate("traversegraph", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Traverse Graph</span></p></body></html>", Q_NULLPTR));
        pushButton_backGraph->setText(QApplication::translate("traversegraph", "Back", Q_NULLPTR));
        label_graphImage->setText(QApplication::translate("traversegraph", "aaaa", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("traversegraph", "<Select Here>", Q_NULLPTR)
         << QApplication::translate("traversegraph", "1 - Minimum Spanning Tree", Q_NULLPTR)
         << QApplication::translate("traversegraph", "2 - Depth-First Search", Q_NULLPTR)
         << QApplication::translate("traversegraph", "3 - Breadth-First Search", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class traversegraph: public Ui_traversegraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVERSEGRAPH_H

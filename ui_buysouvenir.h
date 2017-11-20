/********************************************************************************
** Form generated from reading UI file 'buysouvenir.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYSOUVENIR_H
#define UI_BUYSOUVENIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buySouvenir
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_receipt;
    QTextBrowser *textBrowser_cart_itemName_2;
    QTextBrowser *textBrowser_cart_itemPrice_2;
    QTextBrowser *textBrowser_cart_itemQty_2;
    QTextBrowser *textBrowser_cart_stadiumName_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber_grandTotal;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox_main;
    QLCDNumber *lcdNumber_itemxqty;
    QPushButton *pushButton_resetCart;
    QPushButton *pushButton_confirmPurchase;
    QLCDNumber *lcdNumber_cartTotal;
    QTextBrowser *textBrowser_cart_itemName;
    QSpinBox *spinBox_qty_input;
    QPushButton *pushButton_addToCart;
    QTextBrowser *textBrowser_cart_itemPrice;
    QLCDNumber *lcdNumber_cartQty;
    QTextBrowser *textBrowser_cart_itemQty;
    QTextBrowser *textBrowser_cart_stadiumName;
    QComboBox *comboBox_stadiumName;
    QComboBox *comboBox_souvenir;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *buySouvenir)
    {
        if (buySouvenir->objectName().isEmpty())
            buySouvenir->setObjectName(QStringLiteral("buySouvenir"));
        buySouvenir->resize(851, 446);
        buySouvenir->setAutoFillBackground(false);
        buySouvenir->setStyleSheet(QStringLiteral(""));
        buySouvenir->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(buySouvenir);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_receipt = new QGroupBox(centralwidget);
        groupBox_receipt->setObjectName(QStringLiteral("groupBox_receipt"));
        groupBox_receipt->setGeometry(QRect(120, 10, 651, 391));
        textBrowser_cart_itemName_2 = new QTextBrowser(groupBox_receipt);
        textBrowser_cart_itemName_2->setObjectName(QStringLiteral("textBrowser_cart_itemName_2"));
        textBrowser_cart_itemName_2->setGeometry(QRect(70, 100, 161, 221));
        textBrowser_cart_itemPrice_2 = new QTextBrowser(groupBox_receipt);
        textBrowser_cart_itemPrice_2->setObjectName(QStringLiteral("textBrowser_cart_itemPrice_2"));
        textBrowser_cart_itemPrice_2->setGeometry(QRect(490, 100, 91, 221));
        textBrowser_cart_itemQty_2 = new QTextBrowser(groupBox_receipt);
        textBrowser_cart_itemQty_2->setObjectName(QStringLiteral("textBrowser_cart_itemQty_2"));
        textBrowser_cart_itemQty_2->setGeometry(QRect(420, 100, 61, 221));
        textBrowser_cart_stadiumName_2 = new QTextBrowser(groupBox_receipt);
        textBrowser_cart_stadiumName_2->setObjectName(QStringLiteral("textBrowser_cart_stadiumName_2"));
        textBrowser_cart_stadiumName_2->setGeometry(QRect(250, 100, 161, 221));
        label = new QLabel(groupBox_receipt);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 80, 101, 16));
        label_2 = new QLabel(groupBox_receipt);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 80, 121, 16));
        label_3 = new QLabel(groupBox_receipt);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 80, 47, 13));
        label_4 = new QLabel(groupBox_receipt);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(520, 80, 47, 13));
        lcdNumber_grandTotal = new QLCDNumber(groupBox_receipt);
        lcdNumber_grandTotal->setObjectName(QStringLiteral("lcdNumber_grandTotal"));
        lcdNumber_grandTotal->setGeometry(QRect(290, 330, 291, 41));
        label_5 = new QLabel(groupBox_receipt);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 340, 211, 20));
        label_5->setStyleSheet(QStringLiteral("font: 75 18pt \"Fixedsys\";"));
        pushButton = new QPushButton(groupBox_receipt);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(550, 20, 91, 21));
        label_8 = new QLabel(groupBox_receipt);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 30, 461, 31));
        label_8->setStyleSheet(QStringLiteral("font: 75 18pt \"Fixedsys\";"));
        label_9 = new QLabel(groupBox_receipt);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 40, 47, 13));
        textBrowser_cart_itemName_2->raise();
        textBrowser_cart_itemPrice_2->raise();
        textBrowser_cart_itemQty_2->raise();
        textBrowser_cart_stadiumName_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        lcdNumber_grandTotal->raise();
        label_5->raise();
        pushButton->raise();
        label_8->raise();
        label_9->raise();
        groupBox_main = new QGroupBox(centralwidget);
        groupBox_main->setObjectName(QStringLiteral("groupBox_main"));
        groupBox_main->setGeometry(QRect(20, 10, 831, 391));
        lcdNumber_itemxqty = new QLCDNumber(groupBox_main);
        lcdNumber_itemxqty->setObjectName(QStringLiteral("lcdNumber_itemxqty"));
        lcdNumber_itemxqty->setGeometry(QRect(130, 170, 121, 41));
        lcdNumber_itemxqty->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_itemxqty->setAutoFillBackground(false);
        lcdNumber_itemxqty->setStyleSheet(QStringLiteral(""));
        lcdNumber_itemxqty->setFrameShape(QFrame::NoFrame);
        lcdNumber_itemxqty->setFrameShadow(QFrame::Plain);
        lcdNumber_itemxqty->setLineWidth(0);
        lcdNumber_itemxqty->setMidLineWidth(0);
        lcdNumber_itemxqty->setSmallDecimalPoint(true);
        lcdNumber_itemxqty->setSegmentStyle(QLCDNumber::Filled);
        pushButton_resetCart = new QPushButton(groupBox_main);
        pushButton_resetCart->setObjectName(QStringLiteral("pushButton_resetCart"));
        pushButton_resetCart->setGeometry(QRect(10, 270, 251, 21));
        pushButton_confirmPurchase = new QPushButton(groupBox_main);
        pushButton_confirmPurchase->setObjectName(QStringLiteral("pushButton_confirmPurchase"));
        pushButton_confirmPurchase->setGeometry(QRect(10, 300, 251, 61));
        pushButton_confirmPurchase->setStyleSheet(QLatin1String("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(21, 61, 158, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"font: 14pt \"Comic Sans MS\";"));
        pushButton_confirmPurchase->setCheckable(false);
        pushButton_confirmPurchase->setAutoDefault(false);
        pushButton_confirmPurchase->setFlat(false);
        lcdNumber_cartTotal = new QLCDNumber(groupBox_main);
        lcdNumber_cartTotal->setObjectName(QStringLiteral("lcdNumber_cartTotal"));
        lcdNumber_cartTotal->setGeometry(QRect(570, 320, 211, 41));
        lcdNumber_cartTotal->setStyleSheet(QStringLiteral(""));
        lcdNumber_cartTotal->setFrameShape(QFrame::Panel);
        lcdNumber_cartTotal->setFrameShadow(QFrame::Sunken);
        textBrowser_cart_itemName = new QTextBrowser(groupBox_main);
        textBrowser_cart_itemName->setObjectName(QStringLiteral("textBrowser_cart_itemName"));
        textBrowser_cart_itemName->setGeometry(QRect(270, 0, 161, 251));
        spinBox_qty_input = new QSpinBox(groupBox_main);
        spinBox_qty_input->setObjectName(QStringLiteral("spinBox_qty_input"));
        spinBox_qty_input->setGeometry(QRect(10, 140, 91, 22));
        spinBox_qty_input->setValue(1);
        pushButton_addToCart = new QPushButton(groupBox_main);
        pushButton_addToCart->setObjectName(QStringLiteral("pushButton_addToCart"));
        pushButton_addToCart->setGeometry(QRect(10, 230, 251, 31));
        pushButton_addToCart->setFlat(false);
        textBrowser_cart_itemPrice = new QTextBrowser(groupBox_main);
        textBrowser_cart_itemPrice->setObjectName(QStringLiteral("textBrowser_cart_itemPrice"));
        textBrowser_cart_itemPrice->setGeometry(QRect(690, 0, 91, 251));
        lcdNumber_cartQty = new QLCDNumber(groupBox_main);
        lcdNumber_cartQty->setObjectName(QStringLiteral("lcdNumber_cartQty"));
        lcdNumber_cartQty->setGeometry(QRect(420, 320, 121, 41));
        lcdNumber_cartQty->setFrameShape(QFrame::Panel);
        lcdNumber_cartQty->setFrameShadow(QFrame::Sunken);
        textBrowser_cart_itemQty = new QTextBrowser(groupBox_main);
        textBrowser_cart_itemQty->setObjectName(QStringLiteral("textBrowser_cart_itemQty"));
        textBrowser_cart_itemQty->setGeometry(QRect(620, 0, 61, 251));
        textBrowser_cart_stadiumName = new QTextBrowser(groupBox_main);
        textBrowser_cart_stadiumName->setObjectName(QStringLiteral("textBrowser_cart_stadiumName"));
        textBrowser_cart_stadiumName->setGeometry(QRect(450, 0, 161, 251));
        comboBox_stadiumName = new QComboBox(groupBox_main);
        comboBox_stadiumName->setObjectName(QStringLiteral("comboBox_stadiumName"));
        comboBox_stadiumName->setGeometry(QRect(10, 40, 251, 41));
        comboBox_souvenir = new QComboBox(groupBox_main);
        comboBox_souvenir->setObjectName(QStringLiteral("comboBox_souvenir"));
        comboBox_souvenir->setGeometry(QRect(10, 90, 251, 41));
        label_6 = new QLabel(groupBox_main);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(500, 300, 91, 16));
        label_7 = new QLabel(groupBox_main);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(730, 300, 111, 16));
        lcdNumber_itemxqty->raise();
        pushButton_resetCart->raise();
        pushButton_confirmPurchase->raise();
        lcdNumber_cartTotal->raise();
        textBrowser_cart_itemName->raise();
        spinBox_qty_input->raise();
        pushButton_addToCart->raise();
        textBrowser_cart_itemPrice->raise();
        lcdNumber_cartQty->raise();
        textBrowser_cart_itemQty->raise();
        textBrowser_cart_stadiumName->raise();
        comboBox_stadiumName->raise();
        comboBox_souvenir->raise();
        label_6->raise();
        label_7->raise();
        groupBox_receipt->raise();
        groupBox_receipt->raise();
        buySouvenir->setCentralWidget(centralwidget);
        groupBox_main->raise();
        groupBox_receipt->raise();
        menubar = new QMenuBar(buySouvenir);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 851, 20));
        buySouvenir->setMenuBar(menubar);
        statusbar = new QStatusBar(buySouvenir);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        buySouvenir->setStatusBar(statusbar);

        retranslateUi(buySouvenir);

        pushButton_confirmPurchase->setDefault(false);


        QMetaObject::connectSlotsByName(buySouvenir);
    } // setupUi

    void retranslateUi(QMainWindow *buySouvenir)
    {
        buySouvenir->setWindowTitle(QApplication::translate("buySouvenir", "Purchase Souvenir", Q_NULLPTR));
        groupBox_receipt->setTitle(QApplication::translate("buySouvenir", "Receipt of Purchase", Q_NULLPTR));
        label->setText(QApplication::translate("buySouvenir", "Souvenir Item", Q_NULLPTR));
        label_2->setText(QApplication::translate("buySouvenir", "Purchased From", Q_NULLPTR));
        label_3->setText(QApplication::translate("buySouvenir", "Quantity", Q_NULLPTR));
        label_4->setText(QApplication::translate("buySouvenir", "Price", Q_NULLPTR));
        label_5->setText(QApplication::translate("buySouvenir", "Grand Total", Q_NULLPTR));
        pushButton->setText(QApplication::translate("buySouvenir", "Exit", Q_NULLPTR));
        label_8->setText(QApplication::translate("buySouvenir", "Thank you for your purchase!", Q_NULLPTR));
        label_9->setText(QString());
        groupBox_main->setTitle(QApplication::translate("buySouvenir", "Make Purchase", Q_NULLPTR));
        pushButton_resetCart->setText(QApplication::translate("buySouvenir", "Reset Cart", Q_NULLPTR));
        pushButton_confirmPurchase->setText(QApplication::translate("buySouvenir", "Confirm Purchase", Q_NULLPTR));
        pushButton_addToCart->setText(QApplication::translate("buySouvenir", "Add To Cart", Q_NULLPTR));
        label_6->setText(QApplication::translate("buySouvenir", "Total Qty", Q_NULLPTR));
        label_7->setText(QApplication::translate("buySouvenir", "Cart Total", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class buySouvenir: public Ui_buySouvenir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYSOUVENIR_H

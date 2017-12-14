#include "buysouvenir.h"
#include "ui_buysouvenir.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "database.h"
#include "mainwindow.h"

buySouvenir::buySouvenir(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::buySouvenir)
{
    ui->setupUi(this);
    MainWindow *w = new MainWindow();
    w->connectToDatabase();

   //background
   QPixmap bg("Resources/buysouv.jpg");
   bg = bg.scaled(this->size(), Qt::IgnoreAspectRatio);
   QPalette palette;
   palette.setBrush(QPalette::Background, bg);
   this->setPalette(palette);

   cartTotal = 0;
   totalQty  = 0;

   ui->groupBox_receipt->hide();
   ui->pushButton_confirmPurchase->setEnabled(false);
}

buySouvenir::~buySouvenir()
{
    delete ui;
}

void buySouvenir::setData(QString startStadium, QList<QString> stadiumsList)
{
    startingStadium = startStadium;
    stadiums = stadiumsList;

}

void buySouvenir::populateDropdown()
{
    //add starting stadium to the list of stadiums
    stadiums.append(startingStadium);

    //populate stadium name combobox
    ui->comboBox_stadiumName->addItems(stadiums);

    //populate souvenir items from initial value in combobox
    QSqlQueryModel *mod = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();
    qry->prepare("SELECT SouvenirName from NFL_SOUVENIRS where TeamName='"+stadiums.at(0)+"'");
    qry->exec();
    mod->setQuery(*qry);
    ui->comboBox_souvenir->setModel(mod);

    //initial item price
    QSqlQuery q;
    double itemPrice;
    q.exec("SELECT Price from NFL_SOUVENIRS where SouvenirName='"+ui->comboBox_souvenir->currentText()+"'");
    while(q.next()) {
        itemPrice = q.value(0).toDouble();
    }
    ui->lcdNumber_itemxqty->display(itemPrice);



}

void buySouvenir::on_comboBox_stadiumName_currentIndexChanged(const QString &arg1)
{
    QSqlQueryModel *mod = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery();
    qry->prepare("SELECT SouvenirName from NFL_SOUVENIRS where TeamName='"+arg1+"'");
    qry->exec();
    mod->setQuery(*qry);
    ui->comboBox_souvenir->setModel(mod);

    ui->spinBox_qty_input->setValue(1);
}

void buySouvenir::on_spinBox_qty_input_valueChanged(int arg1)
{
    QString item = ui->comboBox_souvenir->currentText();
    double disp;
    QSqlQuery query;
    double itemPrice;
    query.exec("SELECT Price from NFL_SOUVENIRS where SouvenirName =\""+item+"\"");
       while(query.next()) {
           itemPrice = query.value(0).toDouble();
    }
    disp = itemPrice * arg1;

    //update display to have itemPrice * qty
    ui->lcdNumber_itemxqty->display(disp);
}

void buySouvenir::on_comboBox_souvenir_currentIndexChanged(const QString &arg1)
{
    //update item price
    QSqlQuery q;
    double itemPrice;
    q.exec("SELECT Price from NFL_SOUVENIRS where SouvenirName='"+arg1+"' and TeamName = '"+ui->comboBox_stadiumName->currentText()+"'");
    while(q.next()) {
        itemPrice = q.value(0).toDouble();
    }
    ui->lcdNumber_itemxqty->display(itemPrice);

    ui->spinBox_qty_input->setValue(1);

      QTextStream(stdout) << startingStadium << " " <<  arg1 << " " << itemPrice;
}

void buySouvenir::on_pushButton_addToCart_clicked()
{
    ui->pushButton_confirmPurchase->setEnabled(true);

    QTextBrowser *itemName  = ui->textBrowser_cart_itemName;
    QTextBrowser *itemQty   = ui->textBrowser_cart_itemQty;
    QTextBrowser *itemPrice = ui->textBrowser_cart_itemPrice;
    QTextBrowser *stadium   = ui->textBrowser_cart_stadiumName;

    itemName->append(ui->comboBox_souvenir->itemText(ui->comboBox_souvenir->currentIndex()));
    itemPrice->append(QString::number(ui->lcdNumber_itemxqty->value()));
    itemQty->append("x " + QString::number(ui->spinBox_qty_input->value()));
    stadium->append(ui->comboBox_stadiumName->itemText(ui->comboBox_stadiumName->currentIndex()));

    int qty = ui->spinBox_qty_input->value();
    double price = ui->lcdNumber_itemxqty->value()/qty;

    cartTotal += qty*price;
    totalQty += qty;

    ui->lcdNumber_cartTotal->display(cartTotal);
    ui->lcdNumber_cartQty->display(totalQty);
}

void buySouvenir::on_pushButton_resetCart_clicked()
{
    ui->textBrowser_cart_itemName->clear();
    ui->textBrowser_cart_itemPrice->clear();
    ui->textBrowser_cart_itemQty->clear();
    ui->textBrowser_cart_stadiumName->clear();

    cartTotal = 0;
    totalQty = 0;

    ui->lcdNumber_cartQty->display(totalQty);
    ui->lcdNumber_cartTotal->display(cartTotal);
    ui->spinBox_qty_input->setValue(1);

    ui->pushButton_confirmPurchase->setEnabled(false);

}


void buySouvenir::on_pushButton_confirmPurchase_clicked()
{//receipt goes here
    ui->groupBox_main->hide();
    ui->groupBox_receipt->show();

    setReceipt();
}

void buySouvenir::setReceipt()
{
    ui->textBrowser_cart_itemName_2->append(ui->textBrowser_cart_itemName->toPlainText());
    ui->textBrowser_cart_itemPrice_2->append(ui->textBrowser_cart_itemPrice->toPlainText());
    ui->textBrowser_cart_itemQty_2->append(ui->textBrowser_cart_itemQty->toPlainText());
    ui->textBrowser_cart_stadiumName_2->append(ui->textBrowser_cart_stadiumName->toPlainText());

    ui->lcdNumber_grandTotal->display(cartTotal);
}

void buySouvenir::on_pushButton_clicked()
{
    this->close();

    ui->comboBox_stadiumName->clear();
}

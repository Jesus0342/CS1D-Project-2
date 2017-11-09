#include "login.h"
#include "ui_login.h"

#include "adminwindow.h"
#include <QMessageBox>
#include <QObject>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_login_clicked()
{
    // Valid username and password.
    QString username = "a";
    QString password = "1";

    // If username or password fields are left empty, displays warning message, else
    // checks the username and password entered.
    if(ui->lineEdit_username->text() == "" || ui->lineEdit_password->text() == "")
    {
        QMessageBox::warning(this, "Empty field(s)", "Please fill in all fields!");
    }
    else
    {
        // If username and password match predetermined values, launches administrator window, else
        // displays an error message.
        if(ui->lineEdit_username->text() == username && ui->lineEdit_password->text() == password)
        {
            // Returns the signal to hide mainwindow (see on_pushButton_login_clicked()).
            accepted();

            AdminWindow *adminWindow = new AdminWindow;

            adminWindow->show();

            QObject::connect(adminWindow, SIGNAL(accepted()), this, SLOT(reject()));
            QObject::connect(adminWindow, SIGNAL(accepted()), adminWindow, SLOT(deleteLater()));
        }
        else
        {
            QMessageBox::critical(this, "Error", "Invalid Login Information!");
        }
    }
}

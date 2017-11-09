#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    /**
     * @brief on_pushButton_login_clicked verifies the administrator's login information and
     * launches the Administrator Window if valid credentials are entered.
     */
    void on_pushButton_login_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H

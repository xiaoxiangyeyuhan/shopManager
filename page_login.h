#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include <QWidget>
#include <QString>
#include <QDebug>
#include <database.h>


#include "page_register.h"
#include "customer.h"
#include "manager.h"
namespace Ui {
class Page_Login;
}

class Page_Login : public QWidget
{
    Q_OBJECT

public:
    //Database myDatabase; //数据库连接
    explicit Page_Login(QWidget *parent = nullptr);

    Customer *login_customer;
    Manager *login_manager;
    ~Page_Login();

private slots:
    void on_btn_login_clicked();

    void on_btn_register_clicked();

signals:
    void sendLoginSuccess();
    void sendRegisterSuccess();
    void sendLoginCustomerSuccess();

private:
    Ui::Page_Login *ui;
    page_register m_dlgregister;

};

#endif // PAGE_LOGIN_H

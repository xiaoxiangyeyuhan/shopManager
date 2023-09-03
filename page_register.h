#ifndef PAGE_REGISTER_H
#define PAGE_REGISTER_H

#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QString>
#include <QMessageBox>
#include <database.h>

#include "manager.h"
#include "customer.h"
namespace Ui {
class page_register;
}

class page_register : public QWidget
{
    Q_OBJECT

public:
    explicit page_register(QWidget *parent = nullptr);
    //Database register_myDatabase; //数据库连接

    Customer* customer_register;
    Manager *manager_register;
    ~page_register();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void showCriticlaMsg();

    void showCriticlaMsg2();

    void showCriticlaMsg3();

    void showCriticlaMsg4();

    void showRegister_Success();

    void showRegister_Warning();


signals:
    void Warning1();//用户名不可为空
    void Warning2();//密码不可为空
    void Warning3();//确认密码不可为空
    void Warning4();//两次密码不一致

    void Register_Success();//注册成功
    void Register_Warning();//用户名重复

private:
    Ui::page_register *ui;


};

#endif // PAGE_REGISTER_H

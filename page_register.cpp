#include "page_register.h"
#include "ui_page_register.h"
#include <QCryptographicHash>  //md5加密的库

page_register::page_register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page_register)
{
    ui->setupUi(this);

    connect(this,&page_register::Warning1,this,&page_register::showCriticlaMsg);
    connect(this,&page_register::Warning2,this,&page_register::showCriticlaMsg2);
    connect(this,&page_register::Warning3,this,&page_register::showCriticlaMsg3);
    connect(this,&page_register::Warning4,this,&page_register::showCriticlaMsg4);
    connect(this,&page_register::Register_Warning,this,&page_register::showRegister_Warning);
    //连接警告消息框

    connect(this,&page_register::Register_Success,this,[=]()
            {
                showRegister_Success();
                ui->UserNum->clear();
                ui->UserPassword->clear();
                ui->UserPassword2->clear();
                this->close();
            });

     //this->register_myDatabase.getConnection();//连接数据库

    manager_register = new Manager;//为manager分配空间
    customer_register = new Customer;
}

page_register::~page_register()
{
    delete ui;

    delete manager_register;//释放manager的内存

    delete customer_register;//释放类的内存
}

void page_register::on_pushButton_2_clicked()
{
    ui->UserNum->clear();
    ui->UserPassword->clear();
    ui->UserPassword2->clear();
    this->close();
}


void page_register::on_pushButton_clicked()
{
    //将账户与密码输入数据库中

    QString UserNumber = ui->UserNum->text();
    QString UserPassword =ui->UserPassword->text();
    QString UserPassword2 = ui->UserPassword2->text();

    if(UserNumber=="")
    {
        //用户名为空，发出警告信号
        emit Warning1();
        return;
    }
    if(UserPassword=="")
    {
        emit Warning2();
        return;
    }

    if(UserPassword2=="")
    {
        emit Warning3();
        return;
    }

    if(UserPassword!=UserPassword2)
    {
        emit Warning4();
        return;
    }


    UserPassword = QCryptographicHash::hash(UserPassword.toLatin1(),QCryptographicHash::Md5).toHex();

    customer_register->setName(UserNumber);
    customer_register->setPassword(UserPassword);

//    manager_register->addCustomer(*customer_register);//调用插入函数
//    QSqlQuery sql;
//    sql.prepare("insert into 顾客信息表(UserName,UserPassword)" "values(:UserNum,:UserPassword)");
//    sql.bindValue(":UserNum",UserNumber);
//    sql.bindValue(":UserPassword",UserPassword);

    bool flag = manager_register->addCustomer(*customer_register);//调用插入函数//用于判断插入数据是否成功
                           //mysql数据库中顾客信息表的用户名设为了主键，故不可以重名
    if(flag)
    {
        qDebug()<<"插入成功！";
        emit Register_Success();
    }
    else
    {
        qDebug()<<"插入失败";
        emit Register_Warning();
    }


}


void page_register::showCriticlaMsg()
{
    QMessageBox::critical(this,"错误警告","用户名不可为空！");
}

void page_register::showCriticlaMsg2()
{
    QMessageBox::critical(this,"错误警告","密码不可为空！");
}

void page_register::showCriticlaMsg3()
{
    QMessageBox::critical(this,"错误警告","请确认密码！");
}

void page_register::showCriticlaMsg4()
{
    QMessageBox::critical(this,"错误警告","两次密码不一致！");
}

void page_register::showRegister_Success()
{
    QMessageBox::information(this,"注册成功！","注册成功！");
}

void page_register::showRegister_Warning()
{
    QMessageBox::critical(this,"错误警告","此账号已存在！");
}


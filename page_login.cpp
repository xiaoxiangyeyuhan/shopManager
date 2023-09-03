#include "page_login.h"
#include "ui_page_login.h"
#include <QCryptographicHash>  //md5加密的库
#include <QMessageBox>

Page_Login::Page_Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_Login)
{
    ui->setupUi(this);
    //this->myDatabase.getConnection();//连接数据库

    login_customer = new Customer;
    login_manager = new Manager;

    connect(this,&Page_Login::sendRegisterSuccess,&m_dlgregister,[=](){
        m_dlgregister.show();
    });//跳转到注册界面

}

Page_Login::~Page_Login()
{
    //this->myDatabase.quitConnection();
    delete login_customer;
    delete login_manager;
    delete ui;
}

void Page_Login::on_btn_login_clicked()
{
    //数据库查找用户名和密码
    QString userInputtype;
    if(ui->Rad_Mgr->isChecked())
    {
        userInputtype = "manager";
    }
    else
    {
        userInputtype = "Customer";
    }


    QString userInputNumber = ui->le_userName->text();
    QString userInputPassword = ui->le_Password->text();

    userInputPassword = QCryptographicHash::hash(userInputPassword.toLatin1(),QCryptographicHash::Md5).toHex();
    //qDebug()<<userInputPassword;用于检查是否加密成功

    if(userInputNumber=="")
    {
        QMessageBox::warning(this,"警告","用户名不可为空");
        qDebug()<<"请输入用户名";
    }
    else
    {
        if(ui->Rad_Mgr->isChecked())
        {
            //获取数据库中的信息
//            QSqlQuery sql;
//            sql.prepare("select * from 管理员信息表 where UserNumber = :userInputNumber");
//            sql.bindValue(":userInputNumber",userInputNumber);
//            sql.exec();

//            QString userNumber;
//            QString userPassword;

//            while(sql.next())
//            {
//                userNumber = sql.value("UserNumber").toString();
//                userPassword = sql.value("UserPassword").toString();
//            }

//            qDebug()<<"数据库找到的账号"+userNumber;
//            qDebug()<<"数据库找到的密码"+userPassword;
//            sql.clear();

            if(login_manager->manager_login(userInputNumber,userInputPassword))
            {

                qDebug()<<"登录成功!";
                ui->le_Password->clear();
                emit sendLoginSuccess();//发送信号，让主窗口接受

                this->close();

            }
            else
            {
                QMessageBox::warning(this,"登录失败！","请检查用户名与密码是否正确");
                qDebug()<<"登录失败!";
            }
        }
        else//顾客登录
        {
            //获取数据库中的信息
//            QSqlQuery sql;
//            sql.prepare("select * from 顾客信息表 where UserName = :userInputNumber");
//            sql.bindValue(":userInputNumber",userInputNumber);
//            sql.exec();
//            QString userNumber;
//            QString userPassword;

//            while(sql.next())
//            {
//                userNumber = sql.value("UserName").toString();
//                userPassword = sql.value("UserPassword").toString();
//            }

//            qDebug()<<"数据库找到的账号"+userNumber;
//            qDebug()<<"数据库找到的密码"+userPassword;
//            sql.clear();

            QSqlQuery sql;

            if(login_customer->customer_login(userInputNumber,userInputPassword))
            {
                sql.prepare("insert into 登录记录(UserID)" "values (:UserNumber)");
                sql.bindValue(":UserNumber",userInputNumber);//将此数据插入登录记录表中
                sql.exec();
                sql.clear();

                qDebug()<<"登录成功!";
                emit sendLoginCustomerSuccess();//发送信号，让主窗口接收
                ui->le_Password->clear();
                this->close();//关闭此窗口
            }
            else
            {
                QMessageBox::warning(this,"登录失败！","请检查用户名与密码是否正确");
                qDebug()<<"登录失败!";
            }
        }

    }
    //如果成功，就进入界面

}




void Page_Login::on_btn_register_clicked()
{
     emit sendRegisterSuccess();
}


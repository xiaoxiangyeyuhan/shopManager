#include "database.h"

QSqlDatabase Database::db = QSqlDatabase::addDatabase("QODBC"); //创建静态数据库实例
QSqlQuery* Database::sql = NULL;

 Database::Database()
{
     //qDebug() << "数据库实例已创建";
}

bool Database::getConnection()
{
    //数据库连接
    db.setHostName("127.0.0.1");        //绑定数据库IP路径，127.0.0.1是默认本机
    db.setPort(3306);                   //绑定数据库端口号
    db.setDatabaseName("supermarket");      //绑定ODBC数据源名称
    db.setUserName("root");             //绑定数据库系统用户名
    db.setPassword("tree030310");       //绑定数据库系统登录密码

    if(!db.open())
    {
        qDebug()<<"DataBase Error";
        qDebug()<<db.lastError().text();
        return false;
    }
    else
    {
        qDebug()<<"connection successed!";
        return true;
    }

}

void Database::quitConnection()
{
    db.close();
}

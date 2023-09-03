#ifndef DATABASE_H
#define DATABASE_H

#include <QSql>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

class Database
{
public:
    Database();
    //数据库连接相关函数

    static bool getConnection(); //获得数据库连接

    static void quitConnection(); //断开数据库连接

private:
    static QSqlDatabase db; //定义静态变量db作为数据库实例
    static QSqlQuery* sql; //定义静态变量sql作为数据库执行语言实例

};

#endif // DATABASE_H

#ifndef MANAGER_H
#define MANAGER_H

#include <QSqlQueryModel>
#include "user.h"

#include "database.h"
#include "product.h"
#include "customer.h"
class Manager : public User
{
public:
    Manager();
    ~Manager();
    Manager(QString,QString);


    QString getName();
    QString getPassword();
    //Database manager_myDatabase; //数据库连接

    void setName(QString);
    void setPassword(QString);

    bool manager_login(QString,QString);//管理员登录

    bool addCustomer(Customer &customer);//用于添加客户

    bool addProducts(Product &product);//添加商品
    bool deleteProducts(Product *product);//删除商品
    bool changeProducts(Product &product);//修改商品







};

#endif // MANAGER_H

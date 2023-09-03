#ifndef CUSTOMER_H
#define CUSTOMER_H


#include "user.h"
#include <QDateTime>
#include "product.h"
#include <QSqlQueryModel>

class Customer : public User
{
public:
    Customer();
    Customer(QString);
    Customer(QString,QString);
    QString getName();
    QString getPassword();
    QSqlQueryModel *mode;
    Product *customer_product;

    bool customer_login(QString,QString);//负责客户的登录操作

    QString customer_get();

    void customer_out();

    void setName(QString);
    void setPassword(QString);

    void payment(Product * product,int Sum);//付款

    bool addGoods(Product *product,int Sum);//添加商品，去购物车
    void showCart(QTableView* tableView);//显示购物车
    void deleteGoodsInCart(Product *product);//从购物车中删去此商品
    void payAll();//用钞能力清空购物车

    ~Customer();
private:

};

#endif // CUSTOMER_H

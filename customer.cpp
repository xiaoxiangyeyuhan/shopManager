#include "customer.h"
#include "database.h"
#include <QDate>
Customer::Customer()
{
    mode = new QSqlQueryModel;
    customer_product = new Product;
}
Customer::Customer(QString UserNo)
{
    Name = UserNo;
}

Customer::Customer(QString UserNo,QString UserPassword)
{
    Name = UserNo;
    Password = UserPassword;
}
QString Customer::getName()
{
    return Name;
}
QString Customer::getPassword()
{
    return Password;
}

bool Customer::addGoods(Product *product,int Sum)
{
    QSqlQuery sql;
    sql.prepare("insert into 购物车(UserNo,ProductName,ProductPrice,discount,ProductNo,Import,ProductAmount) values(:UserName,:GoodsName,:GoodsPrice,:GoodsDiscount,:No,:flag,:Sum)");
    sql.bindValue(":UserName",getName());
    sql.bindValue(":GoodsName",product->getName());
    sql.bindValue(":GoodsPrice",product->getPrice());
    sql.bindValue(":GoodsDiscount",product->getDiscount());
    sql.bindValue(":No",product->getNo());
    sql.bindValue(":flag",product->getImport());
    sql.bindValue(":Sum",Sum);

    return(sql.exec());

}
void Customer::payment(Product * product,int Sum)
{
    QSqlQuery sql;
    QDateTime dateTime = QDateTime::currentDateTime();

    sql.prepare("insert into 订单信息表(Time,UserName,GoodsName,GoodsPrice,GoodsDiscount,Import,GoodsNo,ProductAmount) values(:date,:UserName,:GoodsName,:GoodsPrice,:GoodsDiscount,:flag,:No,:Sum)");
    sql.bindValue(":date",dateTime);
    sql.bindValue(":UserName",getName());
    sql.bindValue(":GoodsName",product->getName());
    sql.bindValue(":GoodsPrice",product->getPrice());
    sql.bindValue(":GoodsDiscount",product->getDiscount());
    sql.bindValue(":flag",product->getImport());
    sql.bindValue(":No",product->getNo());
    sql.bindValue(":Sum",Sum);
    sql.exec();

}
void Customer::setName(QString name)
{
    Name = name;
}

void Customer::setPassword(QString Password_)
{
    Password = Password_;
}


bool Customer::customer_login(QString userInputNumber,QString userInputPassword)
{
    QSqlQuery sql;
    sql.prepare("select * from 顾客信息表 where UserName = :userInputNumber");
    sql.bindValue(":userInputNumber",userInputNumber);
    sql.exec();
    QString userNumber;
    QString userPassword;

    while(sql.next())
    {
        userNumber = sql.value("UserName").toString();
        userPassword = sql.value("UserPassword").toString();
    }

    qDebug()<<"数据库找到的账号"+userNumber;
    qDebug()<<"数据库找到的密码"+userPassword;
    sql.clear();

    if(userInputNumber == userNumber && userInputPassword == userPassword)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Customer::customer_out()
{
    QSqlQuery sql;
    sql.prepare("delete from 登录记录");
    sql.exec();
}

QString Customer::customer_get()
{
    QSqlQuery sql;
    sql.prepare("select * from 登录记录");
    sql.exec();
    sql.next();
    QString UserName1 = sql.value("UserID").toString();
    return UserName1;
}
void Customer::showCart(QTableView* tableView)//显示购物车
{
    mode->setParent(tableView);
    mode->setQuery("select * from 购物车 where UserNo = '" + this->getName() +"'");
    qDebug()<<this->getName();
    mode->setHeaderData(0, Qt::Horizontal,"用户名");
    mode->setHeaderData(1, Qt::Horizontal, "商品名称");
    mode->setHeaderData(2, Qt::Horizontal, "商品价格");
    mode->setHeaderData(3, Qt::Horizontal,"商品折扣");
    mode->setHeaderData(4, Qt::Horizontal, "商品编号");
    mode->setHeaderData(5, Qt::Horizontal, "是否进口");
    mode->setHeaderData(6, Qt::Horizontal, "商品数量");

    tableView->setModel(mode);
}

void Customer::deleteGoodsInCart(Product *product)
{
    QSqlQuery sql;
    sql.prepare("delete from 购物车 where ProductNo = :Product_no");
    sql.bindValue(":Product_no",product->getNo());
    sql.exec();
}

void Customer::payAll()
{
    QSqlQuery sql;
    QSqlQuery sql1;
    sql.prepare("select * from 购物车 where UserNo = :UserNo");
    sql.bindValue(":UserNo",Name);
    sql.exec();

    QString Product_name;
    double Product_price;
    double discount;
    QString Product_no;
    bool Import;
    int sum;


    QDateTime dateTime = QDateTime::currentDateTime();
    while(sql.next())
    {
        Product_name = sql.value("ProductName").toString();
        Product_price = sql.value("ProductPrice").toDouble();
        discount = sql.value("discount").toDouble();
        Product_no = sql.value("ProductNo").toString();
        Import = sql.value("Import").toBool();
        sum = sql.value("productAmount").toInt();

        customer_product->setProduct(Product_name,Product_price,discount,Product_no,Import);



        sql1.prepare("insert into 订单信息表(Time,UserName,GoodsName,GoodsPrice,GoodsDiscount,Import,GoodsNo,ProductAmount) values(:date,:UserName,:GoodsName,:GoodsPrice,:GoodsDiscount,:flag,:No,:Sum)");
        sql1.bindValue(":date",dateTime);
        sql1.bindValue(":UserName",getName());
        sql1.bindValue(":GoodsName",Product_name);
        sql1.bindValue(":GoodsPrice",Product_price);
        sql1.bindValue(":GoodsDiscount",discount);
        sql1.bindValue(":flag",Import);
        sql1.bindValue(":No",Product_no);
        sql1.bindValue(":Sum",sum);
        sql1.exec();
        sql1.clear();
    }

    sql.clear();
    sql.prepare("delete from 购物车 where UserNo = :UserNo");
    sql.bindValue(":UserNo",Name);
    sql.exec();

    sql.clear();
}
Customer::~Customer()
{
    delete mode;
    delete customer_product;
}


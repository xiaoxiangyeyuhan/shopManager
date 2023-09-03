#include "manager.h"

Manager::Manager()
{
    //this->manager_myDatabase.getConnection();

}

QString Manager::getName()
{
    return Name;
}
QString Manager::getPassword()
{
    return Password;
}

Manager::~Manager()
{

}

//    product_name = product_name1;
//    product_price = product_price1;
//    discount = discount1;
//    product_no = product_no1;
//    import = import1;
bool Manager::addProducts(Product &product)
{
    QSqlQuery sql;


    QString product_name;
    if(product.getImport()==true)
    {
        product_name = product.getName();
        product_name += "<I>";
    }
    else
    {
        product_name = product.getName();
    }
    sql.prepare("insert into 商品信息(ProductName,ProductPrice,discount,ProductNo,Import)" "values(:name,:price,:discount,:Number,:flag)");
    sql.bindValue(":name",product_name);
    sql.bindValue(":price",product.getPrice());
    sql.bindValue(":discount",product.getDiscount());
    sql.bindValue(":Number",product.getNo());

    sql.bindValue(":flag",product.getImport());
    return(sql.exec());

}
bool Manager::deleteProducts(Product *product)
{
    QSqlQuery sql;

    sql.prepare("delete from 商品信息 where ProductNo = :P_No");
    sql.bindValue(":P_No",product->getNo());
    return (sql.exec());
}

bool Manager::changeProducts(Product &product)//修改商品
{
     QSqlQuery sql;
     sql.prepare("update 商品信息 set ProductName = :Name,ProductPrice = :price,discount = :discount,Import = :flag where ProductNo = :Number");
     sql.bindValue(":Name",product.getName());
     sql.bindValue(":price",product.getPrice());
     sql.bindValue(":discount",product.getDiscount());
     sql.bindValue(":flag",product.getImport());
     sql.bindValue(":Number",product.getNo());

     return(sql.exec());
}

bool Manager::addCustomer(Customer &customer)
{
    QSqlQuery sql;
    sql.prepare("insert into 顾客信息表(UserName,UserPassword)" "values(:UserNum,:UserPassword)");
    sql.bindValue(":UserNum",customer.getName());
    sql.bindValue(":UserPassword",customer.getPassword());
    return(sql.exec());
}

void Manager::setName(QString name_)
{
    Name = name_;
}
void Manager::setPassword(QString Password_)
{
    Password = Password_;
}

bool Manager::manager_login(QString userInputNumber,QString userInputPassword)
{
    QSqlQuery sql;
    sql.prepare("select * from 管理员信息表 where UserNumber = :userInputNumber");
    sql.bindValue(":userInputNumber",userInputNumber);
    sql.exec();

    QString userNumber;
    QString userPassword;

    while(sql.next())
    {
        userNumber = sql.value("UserNumber").toString();
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

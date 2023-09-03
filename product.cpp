#include "product.h"

Product::Product()
{
    mode = new QSqlQueryModel;
}

Product::Product(QString product_name1,double product_price1,double discount1,QString product_no1,bool import1)
{
    product_name = product_name1;
    product_price = product_price1;
    discount = discount1;
    product_no = product_no1;
    import = import1;
}
void Product::setProduct(QString product_name1,double product_price1,double discount1,QString product_no1,bool import1)
{
    product_name = product_name1;
    product_price = product_price1;
    discount = discount1;
    product_no = product_no1;
    import = import1;
}

QString Product::getName()
{
    return product_name;
}
double Product::getPrice()
{
    return product_price;
}
double Product::getDiscount()
{
    return discount;
}
QString Product::getNo()
{
    return product_no;
}
bool Product::getImport()
{
    return import;
}

void Product::setNo(QString product_no1)
{
     product_no = product_no1;
}

void Product::showTableview(QTableView* tableView)
{
    mode->setParent(tableView);

    mode->setQuery("select * from 商品信息");
    mode->setHeaderData(0,Qt::Horizontal,"商品名称");
    mode->setHeaderData(1, Qt::Horizontal, "商品价格");
    mode->setHeaderData(2,Qt::Horizontal,"商品折扣");
    mode->setHeaderData(3, Qt::Horizontal, "商品编号");
    mode->setHeaderData(4, Qt::Horizontal, "是否进口");

    tableView->setModel(mode);
}

void Product::showOneProduct(QTableView* tableView,QString Product_No)
{
    mode->setParent(tableView);
    mode->setQuery("select * from 商品信息 where ProductNo = '" + Product_No +"'");
    mode->setHeaderData(0,Qt::Horizontal,"商品名称");
    mode->setHeaderData(1, Qt::Horizontal, "商品价格");
    mode->setHeaderData(2,Qt::Horizontal,"商品折扣");
    mode->setHeaderData(3, Qt::Horizontal, "商品编号");
    mode->setHeaderData(4, Qt::Horizontal, "是否进口");

    tableView->setModel(mode);
}
void Product::showNameProduct(QTableView* tableView,QString Product_Name)
{
    mode->setParent(tableView);
    mode->setQuery("select * from 商品信息 where ProductName like '%" + Product_Name +"%'");//因为是顾客,所以找到有关键字的
    mode->setHeaderData(0,Qt::Horizontal,"商品名称");
    mode->setHeaderData(1, Qt::Horizontal, "商品价格");
    mode->setHeaderData(2,Qt::Horizontal,"商品折扣");
    mode->setHeaderData(3, Qt::Horizontal, "商品编号");
    mode->setHeaderData(4, Qt::Horizontal, "是否进口");

    tableView->setModel(mode);
}

Product::~Product()
{

     delete mode;

}

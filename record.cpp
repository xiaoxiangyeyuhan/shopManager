#include "record.h"

Record::Record()
{
    mode = new QSqlQueryModel;
}

void Record::showRecord(Customer *customer,QTableView *tableView)
{
    QString Cus_Name = customer->getName();

    mode->setParent(tableView);

    mode->setQuery("select * from 订单信息表 where UserName = '" + Cus_Name + "'");
    mode->setHeaderData(0,Qt::Horizontal,"下单时间");
    mode->setHeaderData(1, Qt::Horizontal,"账号");
    mode->setHeaderData(2,Qt::Horizontal,"商品名称");
    mode->setHeaderData(3, Qt::Horizontal,"商品价格");
    mode->setHeaderData(4, Qt::Horizontal,"商品折扣");
    mode->setHeaderData(5, Qt::Horizontal,"是否进口");
    mode->setHeaderData(6, Qt::Horizontal,"商品编号");
    mode->setHeaderData(7, Qt::Horizontal,"商品数量");
    mode->setHeaderData(8, Qt::Horizontal,"订单编号");

    tableView->setModel(mode);

}

void Record::showRecordByName(Customer *customer,QTableView *tableView,QString ProductName)
{
    QString Cus_Name = customer->getName();
    QString Product_name = ProductName;

    mode->setParent(tableView);

    if(ProductName != "")
    {
        mode->setQuery("select * from 订单信息表 where UserName = '" + Cus_Name + "' and GoodsName like '%" + Product_name +"%'");
        mode->setHeaderData(0,Qt::Horizontal,"下单时间");
        mode->setHeaderData(1, Qt::Horizontal,"账号");
        mode->setHeaderData(2,Qt::Horizontal,"商品名称");
        mode->setHeaderData(3, Qt::Horizontal,"商品价格");
        mode->setHeaderData(4, Qt::Horizontal,"商品折扣");
        mode->setHeaderData(5, Qt::Horizontal,"是否进口");
        mode->setHeaderData(6, Qt::Horizontal,"商品编号");
        mode->setHeaderData(7, Qt::Horizontal,"商品数量");
        mode->setHeaderData(8, Qt::Horizontal,"订单编号");
        tableView->setModel(mode);
    }
    else
    {
        showRecord(customer,tableView);
    }



}

void Record::deleteRecord(Customer *customer,QTableView* tableView,int RecordNum)
{
    QSqlQuery sql;
    sql.prepare("delete from 订单信息表 where recordNo = :recordNum");
    sql.bindValue(":recordNum",RecordNum);
    sql.exec();

    showRecord(customer,tableView);

}

void Record::showAll(QTableView * tableView)
{
        mode->setParent(tableView);
        mode->setQuery("select * from 订单信息表");
        mode->setHeaderData(0,Qt::Horizontal,"下单时间");
        mode->setHeaderData(1, Qt::Horizontal,"账号");
        mode->setHeaderData(2,Qt::Horizontal,"商品名称");
        mode->setHeaderData(3, Qt::Horizontal,"商品价格");
        mode->setHeaderData(4, Qt::Horizontal,"商品折扣");
        mode->setHeaderData(5, Qt::Horizontal,"是否进口");
        mode->setHeaderData(6, Qt::Horizontal,"商品编号");
        mode->setHeaderData(7, Qt::Horizontal,"商品数量");
        mode->setHeaderData(8, Qt::Horizontal,"订单编号");
        tableView->setModel(mode);
}

void Record::searchByDay(QDateTime time,QTableView * tableView)
{
    mode->setParent(tableView);
    QString date = time.toString("yyyy-MM-dd");
    qDebug()<<date;
    mode->setQuery("select * from 订单信息表 where Time like '"+ date +"%'");
    mode->setHeaderData(0,Qt::Horizontal,"下单时间");
    mode->setHeaderData(1, Qt::Horizontal,"账号");
    mode->setHeaderData(2,Qt::Horizontal,"商品名称");
    mode->setHeaderData(3, Qt::Horizontal,"商品价格");
    mode->setHeaderData(4, Qt::Horizontal,"商品折扣");
    mode->setHeaderData(5, Qt::Horizontal,"是否进口");
    mode->setHeaderData(6, Qt::Horizontal,"商品编号");
    mode->setHeaderData(7, Qt::Horizontal,"商品数量");
    mode->setHeaderData(8, Qt::Horizontal,"订单编号");
    tableView->setModel(mode);
}

void Record::searchByMonth(QDateTime time,QTableView * tableView)
{
    mode->setParent(tableView);
    QString date = time.toString("yyyy-MM");
    qDebug()<<date;
    mode->setQuery("select * from 订单信息表 where Time like '"+ date +"%'");
    mode->setHeaderData(0,Qt::Horizontal,"下单时间");
    mode->setHeaderData(1, Qt::Horizontal,"账号");
    mode->setHeaderData(2,Qt::Horizontal,"商品名称");
    mode->setHeaderData(3, Qt::Horizontal,"商品价格");
    mode->setHeaderData(4, Qt::Horizontal,"商品折扣");
    mode->setHeaderData(5, Qt::Horizontal,"是否进口");
    mode->setHeaderData(6, Qt::Horizontal,"商品编号");
    mode->setHeaderData(7, Qt::Horizontal,"商品数量");
    mode->setHeaderData(8, Qt::Horizontal,"订单编号");
    tableView->setModel(mode);
}

void Record::DataStatisticsByTime(QDateTime time,QTableView * tableView)//通过日期统计数据
{
    mode->setParent(tableView);

    QString date = time.toString("yyyy-MM-dd");
    qDebug()<<date;
    mode->setQuery("select COUNT(*),cast(SUM(GoodsPrice*GoodsDiscount*ProductAmount) AS decimal(20,3)) from 订单信息表 where Time like '"+ date +"%'");
    mode->setHeaderData(0,Qt::Horizontal,"总订单数");
    mode->setHeaderData(1,Qt::Horizontal,"总销售额");
    tableView->setModel(mode);
}

void Record::DateStatisticsByProduct(QDateTime time,QTableView * tableView,Product* product)
{
    mode->setParent(tableView);

    QString date = time.toString("yyyy-MM-dd");
    QString ProductName = product->getName();

    mode->setQuery("select GoodsName,COUNT(*),cast(SUM(GoodsPrice*GoodsDiscount*ProductAmount) AS decimal(20,3)) from 订单信息表 where Time like '"+ date +"%' and GoodsName = '" + ProductName +"'");

    mode->setHeaderData(0,Qt::Horizontal,"商品名称");
    mode->setHeaderData(1,Qt::Horizontal,"总订单数");
    mode->setHeaderData(2,Qt::Horizontal,"总销售额");
    tableView->setModel(mode);


}

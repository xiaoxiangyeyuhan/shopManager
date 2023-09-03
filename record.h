#ifndef RECORD_H
#define RECORD_H

#include <QString>
#include <QDateTime>
#include "customer.h"
#include "product.h"
#include <QSqlQueryModel>
#include "database.h"
#include <QDate>

class Record
{
public:
    Record();
    ~Record();
    QDateTime getTime();
    QString getUserName();
    QString getGoodsName();
    double getGoodsPrice();
    double getGoodsDiscount();
    bool getImport();
    QString getGoodsNO();
    int getGoodsAmount();//商品数量
    QSqlQueryModel *mode;

    void showAll(QTableView * tableView);
    void showRecord(Customer *customer,QTableView *tableView);
    void showRecordByName(Customer *customer,QTableView *tableView,QString ProductName);

    void deleteRecord(Customer *customer,QTableView* tableView,int RecordNum);

    void searchByDay(QDateTime,QTableView * tableView);
    void searchByMonth(QDateTime,QTableView * tableView);

    void DataStatisticsByTime(QDateTime,QTableView * tableView);//通过日期统计数据
    void DateStatisticsByProduct(QDateTime,QTableView * tableView,Product*);
private:
    QDateTime dateTime;
    Customer record_customer;
    Product record_product;
    int Product_amount;
    int record;
};

#endif // RECORD_H

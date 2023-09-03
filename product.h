#ifndef PRODUCT_H
#define PRODUCT_H

#include<QString>
#include <QSqlQueryModel>
#include <QTableView>
class Product
{
public:
    Product();
    ~Product();
    Product(QString,double,double,QString,bool);

    void setProduct(QString,double,double,QString,bool);
    void setNo(QString);

    QString getName();
    double getPrice();
    double getDiscount();
    QString getNo();
    bool getImport();

    void showTableview(QTableView*);

    void showNameProduct(QTableView*,QString);
    void showOneProduct(QTableView*,QString);
    QSqlQueryModel *mode;

private:
    QString product_name;
    double product_price;
    double discount;
    QString product_no;
    bool import;
};

#endif // PRODUCT_H

#ifndef PAGE_CUSTOMER_H
#define PAGE_CUSTOMER_H

#include <QWidget>
#include "customer.h"
#include "database.h"
#include <QSqlQueryModel>
#include "record.h"
#include <QSqlQueryModel>
#include "product.h"

namespace Ui {
class page_customer;
}

class page_customer : public QWidget
{
    Q_OBJECT

public:
    explicit page_customer(QWidget *parent = nullptr);
    ~page_customer();

    Customer* customer;
    Database customer_database;
    QSqlQueryModel *mode;
    Product * customer_product;
    void searchName();
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_btn_Buy_clicked();

    void on_btn_addcart_clicked();

    void on_btn_clear_clicked();



    void on_show_cart_clicked();

    void on_btn_buy_clicked();

    void on_btn_delete_clicked();

    void on_btn_buyAll_clicked();

    void on_btn_searchAll_clicked();

    void on_btn_cancleSearch_clicked();

    void on_btn_search_clicked();

    void on_btn_deleteRecord_clicked();

    void on_pushButton_2_clicked();

signals:
    void sendSuccessCustomer();
    void ReturnLogin();

private:
    Ui::page_customer *ui;
    Record *customer_record;
};

#endif // PAGE_CUSTOMER_H

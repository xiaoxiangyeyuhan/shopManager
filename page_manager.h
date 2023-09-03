#ifndef PAGE_MANAGER_H
#define PAGE_MANAGER_H

#include <QWidget>
#include <database.h>
#include "manager.h"
#include <QSqlQueryModel>
#include "product.h"
#include "record.h"
namespace Ui {
class page_manager;
}

class page_manager : public QWidget
{
    Q_OBJECT

public:
    explicit page_manager(QWidget *parent = nullptr);
    ~page_manager();
    Manager *manager;

    Product *manager_product;

    //QSqlQueryModel *mode;


private slots:
    void on_cancel_clicked();

    void on_pushButton_clicked();

    void on_showInformation_clicked();

    void on_ok_clicked();

    void on_delete_delete_clicked();

    void on_delete_cancel_clicked();

    void on_pushButton_2_clicked();

    void on_btn_change_clicked();

    void on_searchALL_clicked();

    void on_searchTime_clicked();

    void on_btn_shop_clicked();

    void on_btn_search_clicked();

    void on_btn_shopSearch_clicked();

    void on_pushButton_3_clicked();

signals:
    void ReturnLogin();

private:
    Ui::page_manager *ui;
    Record *manager_record;

};

#endif // PAGE_MANAGER_H

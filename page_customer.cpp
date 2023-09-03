#include "page_customer.h"
#include "ui_page_customer.h"
#include <QMessageBox>
#include <QStackedWidget>
#include <QListWidget>

page_customer::page_customer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page_customer)
{
    ui->setupUi(this);

    //customer_database.getConnection();
    ui->listWidget->insertItem(0,"商品");
    ui->listWidget->insertItem(1,"我的购物车");
    ui->listWidget->insertItem(2,"我的订单");

    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));

    mode = new QSqlQueryModel;
    customer_product = new Product;

    customer = new Customer;
    customer_record = new Record;

}

void page_customer::searchName()
{
//    QSqlQuery sql;
//    sql.prepare("select * from 登录记录");
//    sql.exec();
//    sql.next();
//    QString UserName1 = sql.value("UserID").toString();
    QString UserName1 = customer->customer_get();
    customer->setName(UserName1);//查询顾客账号
//    qDebug()<<customer->getName();
}


page_customer::~page_customer()
{
//    QSqlQuery sql;
//    sql.prepare("delete from 登录记录");
//    sql.exec();

    customer->customer_out();

    qDebug()<<"out";
    delete ui;
    delete customer_product;
    delete customer;
    delete mode;
}

void page_customer::on_pushButton_4_clicked()
{
    this->~page_customer();
}


void page_customer::on_pushButton_clicked()//显示商品
{
    if(ui->Input_Name->text() != "")
    {
        customer_product->showNameProduct(ui->tableView,ui->Input_Name->text());
    }
    else
    {
        customer_product->showTableview(ui->tableView);
    }
}


void page_customer::on_btn_Buy_clicked()
{
    searchName();//查询顾客的账号


    int curRow = ui->tableView->currentIndex().row();//curRow为选中行
    QString GoodsName = customer_product->mode->data(customer_product->mode->index(curRow,0)).toString();
    double GoodsPrice = customer_product->mode->data(customer_product->mode->index(curRow,1)).toDouble();
    double GoodsDiscount = customer_product->mode->data(customer_product->mode->index(curRow,2)).toDouble();
    bool flag = customer_product->mode->data(customer_product->mode->index(curRow,4)).toBool();
    QString No = customer_product->mode->data(customer_product->mode->index(curRow,3)).toString();
    int Sum = ui->Input_sum->text().toInt();

    customer_product->setProduct(GoodsName,GoodsPrice,GoodsDiscount,No,flag);




    switch(QMessageBox::question(this, "确认购买","是否确认购买？",
            QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes))
    {
        case QMessageBox::Yes:
            customer->payment(customer_product,Sum);
            ui->Input_Name->setText(customer_product->getName());
            ui->Input_Number->setText(customer_product->getNo());
            QMessageBox::information(this,"成功","购买成功");

            break;

        case QMessageBox::No:
            qDebug()<<"no";
            break;
        default:
            break;


    }

}


void page_customer::on_btn_addcart_clicked()
{
    searchName();//查询顾客账号
    int curRow = ui->tableView->currentIndex().row();//curRow为选中行

    QString GoodsName = customer_product->mode->data(customer_product->mode->index(curRow,0)).toString();
    double GoodsPrice = customer_product->mode->data(customer_product->mode->index(curRow,1)).toDouble();
    double GoodsDiscount = customer_product->mode->data(customer_product->mode->index(curRow,2)).toDouble();
    bool flag = customer_product->mode->data(customer_product->mode->index(curRow,4)).toBool();
    QString No = customer_product->mode->data(customer_product->mode->index(curRow,3)).toString();
    int Sum = ui->Input_sum->text().toInt();

    customer_product->setProduct(GoodsName,GoodsPrice,GoodsDiscount,No,flag);

    if(customer->addGoods(customer_product,Sum))
    {
        QMessageBox::information(this,"添加成功","成功添加到购物车");
    }
    else
    {
        QMessageBox::warning(this,"警告","添加失败,此商品已经在购物车里了");
    }
}


void page_customer::on_btn_clear_clicked()
{
    ui->Input_Name->clear();
    ui->Input_Number->clear();
    ui->Input_sum->cleanText();
}





void page_customer::on_show_cart_clicked()
{
    searchName();
    customer->showCart(ui->cart_tableView);
}


void page_customer::on_btn_buy_clicked()
{
    searchName();//查询顾客账号

    int curRow = ui->cart_tableView->currentIndex().row();//curRow为选中行

    QString GoodsName = customer->mode->data(customer->mode->index(curRow,1)).toString();
    double GoodsPrice = customer->mode->data(customer->mode->index(curRow,2)).toDouble();
    double GoodsDiscount = customer->mode->data(customer->mode->index(curRow,3)).toDouble();
    bool flag = customer->mode->data(customer->mode->index(curRow,5)).toBool();
    QString No = customer->mode->data(customer->mode->index(curRow,4)).toString();
    int Sum = customer->mode->data(customer->mode->index(curRow,6)).toInt();

    customer_product->setProduct(GoodsName,GoodsPrice,GoodsDiscount,No,flag);


    switch(QMessageBox::question(this, "确认购买","是否确认购买？",
                                  QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes))
    {
    case QMessageBox::Yes:
        customer->payment(customer_product,Sum);
        QMessageBox::information(this,"成功","购买成功");
        customer->deleteGoodsInCart(customer_product);
        customer->showCart(ui->cart_tableView);
        break;

    case QMessageBox::No:
        qDebug()<<"no";
        break;
    default:
        break;


    }

}


void page_customer::on_btn_delete_clicked()
{
    searchName();//查询顾客账号

    int curRow = ui->cart_tableView->currentIndex().row();//curRow为选中行

    QString GoodsName = customer->mode->data(customer->mode->index(curRow,1)).toString();
    double GoodsPrice = customer->mode->data(customer->mode->index(curRow,2)).toDouble();
    double GoodsDiscount = customer->mode->data(customer->mode->index(curRow,3)).toDouble();
    bool flag = customer->mode->data(customer->mode->index(curRow,5)).toBool();
    QString No = customer->mode->data(customer->mode->index(curRow,4)).toString();
    //int Sum = customer->mode->data(customer->mode->index(curRow,6)).toInt();

    customer_product->setProduct(GoodsName,GoodsPrice,GoodsDiscount,No,flag);

    switch(QMessageBox::question(this, "确认删除","是否确认删除商品？",
                                  QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes))
    {
    case QMessageBox::Yes:
        QMessageBox::information(this,"成功","删除成功");
        customer->deleteGoodsInCart(customer_product);
        customer->showCart(ui->cart_tableView);
        break;

    case QMessageBox::No:
        qDebug()<<"no";
        break;
    default:
        break;


    }


}


void page_customer::on_btn_buyAll_clicked()
{
    switch(QMessageBox::question(this, "确认","是否确认购买所以商品？",
                                  QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes))
    {
    case QMessageBox::Yes:
        QMessageBox::information(this,"成功","成功动用钞能力清空购物车");
        customer->payAll();
        customer->showCart(ui->cart_tableView);
        break;

    case QMessageBox::No:
        break;
    default:
        break;


    }


}


void page_customer::on_btn_searchAll_clicked()
{
    searchName();
    customer_record->showRecord(customer,ui->record_tableview);
}


void page_customer::on_btn_cancleSearch_clicked()
{
    searchName();
    ui->InputPdtName->clear();
    customer_record->showRecord(customer,ui->record_tableview);
}


void page_customer::on_btn_search_clicked()
{
    searchName();
    customer_record->showRecordByName(customer,ui->record_tableview,ui->InputPdtName->text());
}


void page_customer::on_btn_deleteRecord_clicked()
{
    searchName();
    int curRow = ui->record_tableview->currentIndex().row();
    int recordNum = customer_record->mode->data(customer_record->mode->index(curRow,8)).toInt();

    switch(QMessageBox::question(this, "确认","是否确认删除该订单？",
                                  QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes))
    {
    case QMessageBox::Yes:
        QMessageBox::information(this,"成功","删除成功");
        customer_record->deleteRecord(customer,ui->record_tableview,recordNum);
        break;
    case QMessageBox::No:
        break;
    default:
        break;


    }


}


void page_customer::on_pushButton_2_clicked()
{

    customer->customer_out();
    emit ReturnLogin();
}


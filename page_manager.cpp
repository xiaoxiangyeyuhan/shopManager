#include "page_manager.h"
#include "ui_page_manager.h"
#include <QListWidget>
#include <QStackedWidget>
#include <QMessageBox>
page_manager::page_manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::page_manager)
{
    ui->setupUi(this);
    ui->listWidget->insertItem(0,"添加商品");
    ui->listWidget->insertItem(1,"删除商品");
    ui->listWidget->insertItem(2,"查询商品");
    ui->listWidget->insertItem(3,"修改商品");
    ui->listWidget->insertItem(4,"查看订单");
    ui->listWidget->insertItem(5,"销售情况");

    //mode = new QSqlQueryModel(ui->DatatableView1);
    manager = new Manager;
    manager_product = new Product;
    manager_record = new Record;

    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));


}

page_manager::~page_manager()
{
    delete manager;//delete掉指针
    //delete mode;
    delete manager_product;
    delete ui;
}

void page_manager::on_cancel_clicked()
{
    ui->InputDiscount->clear();
    ui->InputName->clear();
    ui->InputNo->clear();
    ui->InputPrice->clear();
}


void page_manager::on_pushButton_clicked()//退出操作
{
    exit(0);
}


void page_manager::on_showInformation_clicked()//显示详情操作
{

    //model_->setTable("商品信息");
    //model_->select();
    //ui->DatatableView->setModel(model_);


      manager_product->showTableview(ui->DatatableView1);
//    mode->setQuery("select * from 商品信息");
//    mode->setHeaderData(0,Qt::Horizontal,"商品名称");
//    mode->setHeaderData(1, Qt::Horizontal, "商品价格");
//    mode->setHeaderData(2,Qt::Horizontal,"商品折扣");
//    mode->setHeaderData(3, Qt::Horizontal, "商品编号");
//    mode->setHeaderData(4, Qt::Horizontal, "是否进口");
//    ui->DatatableView1->setModel(mode);


}


void page_manager::on_ok_clicked()//插入操作
{

    QString product_name = ui->InputName->text();
    QString product_no = ui->InputNo->text();

    QString price = ui->InputPrice->text();
    double product_price =  price.toDouble();//将输入的价格转为double类型

    QString discount = ui->InputDiscount->text();
    double product_discount = discount.toDouble();//将输入的折扣转为double类型

    bool flag;


    if(ui->YES->isChecked())//如果是进口
    {
        flag = true;
    }
    else
    {
        flag = false;
    }

    manager_product->setProduct(product_name,product_price,product_discount,product_no,flag);

    bool flag1 = manager->addProducts(*manager_product);//成功完成了插入操作！

    if(flag1)
    {
        QMessageBox::information(this,"添加商品成功！","添加商品成功");
        ui->InputName->clear();
        ui->InputDiscount->clear();
        ui->InputNo->clear();
        ui->InputPrice->clear();
    }
    else
    {
        QMessageBox::warning(this,"添加商品失败！","请检查是否重复添加商品");
    }

}


void page_manager::on_delete_delete_clicked()//删除操作
{
    int curRow = ui->DatatableView1->currentIndex().row();//curRow为选中行
    QString delete_No = manager_product->mode->data(manager_product->mode->index(curRow,3)).toString();//获取此位置上的产品编号数据
    QString delete_Name = manager_product->mode->data(manager_product->mode->index(curRow,0)).toString();

    ui->deleteNum->setText(delete_Name);
    manager_product->setNo(delete_No);

    int ok = QMessageBox::warning(this,"删除当前行!","你确定删除当前行吗？",QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::Yes)
        {

            if(manager->deleteProducts(manager_product))
            {
                QMessageBox::information(this, "删除成功","删除成功");
                manager_product->showTableview(ui->DatatableView1);
            }
            //mode->setQuery("select * from 商品信息");//刷新tableView的数据

            else
            {
                QMessageBox::information(this, "删除失败","删除失败");
            }
            //ui->DatatableView1->setModel(mode);

        }

}


void page_manager::on_delete_cancel_clicked()//清空操作
{
    ui->deleteNum->clear();
}


void page_manager::on_pushButton_2_clicked()//查询操作
{
    QString inPutProduct_Number = ui->Search_no->text();
//    QSqlQuery sql;
//    sql.prepare("select * from 商品信息 where ProductNo = :Product_Number");
//    sql.bindValue(":Product_Number",inPutProduct_Number);
//    sql.exec();

    manager_product->setNo(inPutProduct_Number);

    manager_product->showOneProduct(ui->DatatableView1_2,manager_product->getNo());
//    mode->setQuery("select * from 商品信息 where ProductNo = '" + inPutProduct_Number +"'");
//            //泪目，感谢《QT6开发及实例》的作者，找了半天555
//            //此注释由GXQ所写，防伪！
//    mode->setHeaderData(0,Qt::Horizontal,"商品名称");
//    mode->setHeaderData(1, Qt::Horizontal, "商品价格");
//    mode->setHeaderData(2,Qt::Horizontal,"商品折扣");
//    mode->setHeaderData(3, Qt::Horizontal, "商品编号");
//    mode->setHeaderData(4, Qt::Horizontal, "是否进口");
//    ui->DatatableView1_2->setModel(mode);
}


void page_manager::on_btn_change_clicked()//修改操作
{
    QString Product_No= ui->change_No->text();
    QString Product_Name = ui->change_name->text();

    double Product_Price = ui->change_price->text().toDouble();

    double Product_Discount = ui->change_discount->text().toDouble();

    bool flag;
    if(ui->import_Yes->isChecked())
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    manager_product->setProduct(Product_Name,Product_Price,Product_Discount,Product_No,flag);
    bool flag2 = manager->changeProducts(*manager_product);
    if(flag2)
    {
        QMessageBox::information(this, "修改成功","修改成功");

        manager_product->showOneProduct(ui->change_tableView,manager_product->getNo());
//        mode->setQuery("select * from 商品信息 where ProductNo = '" + Product_No +"'");
//        mode->setHeaderData(0,Qt::Horizontal,"商品名称");
//        mode->setHeaderData(1, Qt::Horizontal, "商品价格");
//        mode->setHeaderData(2,Qt::Horizontal,"商品折扣");
//        mode->setHeaderData(3, Qt::Horizontal, "商品编号");
//        mode->setHeaderData(4, Qt::Horizontal, "是否进口");

        ui->change_No->clear();
        ui->change_discount->clear();
        ui->change_name->clear();
        ui->change_price->clear();


    }
    else
    {
        QMessageBox::warning(this, "修改失败","未查询到该商品");
    }


}


void page_manager::on_searchALL_clicked()
{
    manager_record->showAll(ui->record_view);
}


void page_manager::on_searchTime_clicked()
{
    QDateTime date =ui->TimeEdit->dateTime();

    if(ui->rdo_day->isChecked())
    {
        manager_record->searchByDay(date,ui->record_view);
    }
    else
    {
        manager_record->searchByMonth(date,ui->record_view);
    }


}


void page_manager::on_btn_shop_clicked()
{
    manager_product->showTableview(ui->shopView);
}


void page_manager::on_btn_search_clicked()
{
    QDateTime date =ui->Time_edit->dateTime();
    manager_record->DataStatisticsByTime(date,ui->SaleView);
}


void page_manager::on_btn_shopSearch_clicked()
{
    QDateTime date =ui->Time_edit->dateTime();

    int curRow = ui->shopView->currentIndex().row();//curRow为选中行
    QString GoodsName = manager_product->mode->data(manager_product->mode->index(curRow,0)).toString();
    double GoodsPrice = manager_product->mode->data(manager_product->mode->index(curRow,1)).toDouble();
    double GoodsDiscount = manager_product->mode->data(manager_product->mode->index(curRow,2)).toDouble();
    bool flag = manager_product->mode->data(manager_product->mode->index(curRow,4)).toBool();
    QString No = manager_product->mode->data(manager_product->mode->index(curRow,3)).toString();

    manager_product->setProduct(GoodsName,GoodsPrice,GoodsDiscount,No,flag);

    manager_record->DateStatisticsByProduct(date,ui->SaleView,manager_product);

}


void page_manager::on_pushButton_3_clicked()
{

    emit ReturnLogin();
}


#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    main_database.getConnection();//主函数里进行数据库连接！！

    m_dlgCustomer = new page_customer;
    m_dlgLogin = new Page_Login;
    m_dlgManager = new page_manager;

    ui->setupUi(this);
    m_dlgLogin->show();

    connect(m_dlgLogin,&Page_Login::sendLoginSuccess,m_dlgManager,[=](){
        m_dlgManager->show();
    });

    connect(m_dlgLogin,&Page_Login::sendLoginCustomerSuccess,m_dlgCustomer,[=](){
        m_dlgCustomer->show();
    });

    connect(m_dlgManager,&page_manager::ReturnLogin,m_dlgLogin,[=](){
        m_dlgManager->close();
        m_dlgLogin->show();
    });

    connect(m_dlgCustomer,&page_customer::ReturnLogin,m_dlgLogin,[=](){
        m_dlgCustomer->close();
        m_dlgLogin->show();
    });


//    connect(&m_dlgLogin,&Page_Login::sendLoginSuccess,this,[=](){
//        this->show();
//    });//登录窗口连接



//    ui->treeWidget->clear();
//    ui->treeWidget->setColumnCount(1);

//    QStringList l;
//    l << "便利店管理";
//    QTreeWidgetItem *pf = new QTreeWidgetItem(ui->treeWidget,l);
//    ui->treeWidget->addTopLevelItem(pf);

//    l.clear();
//    l << "订单管理";
//    QTreeWidgetItem *p1 = new QTreeWidgetItem(pf,l);


//    l.clear();
//    l << "管理员管理";
//    QTreeWidgetItem *p2 = new QTreeWidgetItem(pf,l);

//    pf->addChild(p1);
//    pf->addChild(p2);

//    ui->treeWidget->expandAll();

//    ui->stackedWidget->setCurrentIndex(1);

}

MainWindow::~MainWindow()
{

    delete m_dlgCustomer;
    delete m_dlgLogin;
    delete m_dlgManager;
    delete ui;
    qDebug()<<"okk";
}


void MainWindow::on_btn_exit_clicked()
{
    exit(0);
}


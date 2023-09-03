#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

#include "page_login.h"
#include "page_manager.h"
#include "page_customer.h"
#include "database.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Database main_database;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_exit_clicked();

private:
    Ui::MainWindow *ui;

    Page_Login *m_dlgLogin;
    page_manager *m_dlgManager;
    page_customer *m_dlgCustomer;

};
#endif // MAINWINDOW_H

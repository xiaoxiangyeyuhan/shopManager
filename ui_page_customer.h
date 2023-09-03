/********************************************************************************
** Form generated from reading UI file 'page_customer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_CUSTOMER_H
#define UI_PAGE_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_customer
{
public:
    QGridLayout *gridLayout_7;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *UserName;
    QLabel *label;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QSpinBox *Input_sum;
    QPushButton *btn_Buy;
    QPushButton *btn_addcart;
    QLabel *label_3;
    QPushButton *btn_clear;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QLineEdit *Input_Name;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLineEdit *Input_Number;
    QPushButton *pushButton;
    QTableView *tableView;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QTableView *cart_tableView;
    QWidget *widget_4;
    QGridLayout *gridLayout_2;
    QPushButton *show_cart;
    QPushButton *btn_buy;
    QPushButton *btn_buyAll;
    QPushButton *btn_delete;
    QWidget *page_3;
    QLabel *label_9;
    QTableView *record_tableview;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QLineEdit *InputPdtName;
    QLabel *label_10;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_search;
    QPushButton *btn_cancleSearch;
    QPushButton *btn_searchAll;
    QPushButton *btn_deleteRecord;

    void setupUi(QWidget *page_customer)
    {
        if (page_customer->objectName().isEmpty())
            page_customer->setObjectName("page_customer");
        page_customer->resize(950, 800);
        page_customer->setMinimumSize(QSize(950, 800));
        page_customer->setMaximumSize(QSize(1000, 800));
        gridLayout_7 = new QGridLayout(page_customer);
        gridLayout_7->setObjectName("gridLayout_7");
        widget_8 = new QWidget(page_customer);
        widget_8->setObjectName("widget_8");
        horizontalLayout_3 = new QHBoxLayout(widget_8);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName("widget_7");
        widget_7->setMaximumSize(QSize(200, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget_7);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(45, 16777215));
        QFont font;
        font.setPointSize(16);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        UserName = new QLabel(widget_7);
        UserName->setObjectName("UserName");
        UserName->setMaximumSize(QSize(150, 16777215));
        UserName->setFont(font);

        horizontalLayout_2->addWidget(UserName);


        horizontalLayout_3->addWidget(widget_7);

        label = new QLabel(widget_8);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(36);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        label_4 = new QLabel(widget_8);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(68, 50));
        label_4->setMaximumSize(QSize(68, 50));
        label_4->setStyleSheet(QString::fromUtf8("border-image: url(:/keli.jpg);"));

        horizontalLayout_3->addWidget(label_4);

        pushButton_2 = new QPushButton(widget_8);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(widget_8);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_3->addWidget(pushButton_4);


        gridLayout_7->addWidget(widget_8, 0, 0, 1, 2);

        listWidget = new QListWidget(page_customer);
        listWidget->setObjectName("listWidget");
        listWidget->setMaximumSize(QSize(100, 16777215));

        gridLayout_7->addWidget(listWidget, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(page_customer);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        widget_3 = new QWidget(page);
        widget_3->setObjectName("widget_3");
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");
        QFont font2;
        font2.setPointSize(14);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_7);

        Input_sum = new QSpinBox(widget_3);
        Input_sum->setObjectName("Input_sum");
        Input_sum->setMinimumSize(QSize(0, 44));
        QFont font3;
        font3.setPointSize(18);
        Input_sum->setFont(font3);
        Input_sum->setMinimum(1);

        verticalLayout_3->addWidget(Input_sum);


        gridLayout->addWidget(widget_3, 4, 1, 1, 1);

        btn_Buy = new QPushButton(page);
        btn_Buy->setObjectName("btn_Buy");

        gridLayout->addWidget(btn_Buy, 6, 1, 1, 1);

        btn_addcart = new QPushButton(page);
        btn_addcart->setObjectName("btn_addcart");

        gridLayout->addWidget(btn_addcart, 5, 1, 1, 1);

        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 65));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font4.setPointSize(22);
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        btn_clear = new QPushButton(page);
        btn_clear->setObjectName("btn_clear");

        gridLayout->addWidget(btn_clear, 7, 1, 1, 1);

        widget_2 = new QWidget(page);
        widget_2->setObjectName("widget_2");
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        Input_Name = new QLineEdit(widget_2);
        Input_Name->setObjectName("Input_Name");
        Input_Name->setMinimumSize(QSize(0, 44));
        Input_Name->setFont(font3);

        gridLayout_4->addWidget(Input_Name, 1, 0, 1, 1);


        gridLayout->addWidget(widget_2, 3, 1, 1, 1);

        widget = new QWidget(page);
        widget->setObjectName("widget");
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        Input_Number = new QLineEdit(widget);
        Input_Number->setObjectName("Input_Number");
        Input_Number->setMinimumSize(QSize(0, 44));
        Input_Number->setFont(font3);

        gridLayout_3->addWidget(Input_Number, 1, 0, 1, 1);


        gridLayout->addWidget(widget, 2, 1, 1, 1);

        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(192, 40));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        tableView = new QTableView(page);
        tableView->setObjectName("tableView");
        tableView->setMinimumSize(QSize(550, 0));
        tableView->setMaximumSize(QSize(550, 16777215));

        gridLayout->addWidget(tableView, 1, 0, 7, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setObjectName("gridLayout_6");
        label_8 = new QLabel(page_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 2);

        cart_tableView = new QTableView(page_2);
        cart_tableView->setObjectName("cart_tableView");
        cart_tableView->setMaximumSize(QSize(700, 16777215));

        gridLayout_6->addWidget(cart_tableView, 1, 0, 1, 1);

        widget_4 = new QWidget(page_2);
        widget_4->setObjectName("widget_4");
        gridLayout_2 = new QGridLayout(widget_4);
        gridLayout_2->setObjectName("gridLayout_2");
        show_cart = new QPushButton(widget_4);
        show_cart->setObjectName("show_cart");
        show_cart->setMinimumSize(QSize(40, 40));

        gridLayout_2->addWidget(show_cart, 0, 0, 1, 1);

        btn_buy = new QPushButton(widget_4);
        btn_buy->setObjectName("btn_buy");
        btn_buy->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(btn_buy, 1, 0, 1, 1);

        btn_buyAll = new QPushButton(widget_4);
        btn_buyAll->setObjectName("btn_buyAll");
        btn_buyAll->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(btn_buyAll, 2, 0, 1, 1);

        btn_delete = new QPushButton(widget_4);
        btn_delete->setObjectName("btn_delete");
        btn_delete->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(btn_delete, 3, 0, 1, 1);


        gridLayout_6->addWidget(widget_4, 1, 1, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 10, 801, 41));
        label_9->setFont(font4);
        label_9->setAlignment(Qt::AlignCenter);
        record_tableview = new QTableView(page_3);
        record_tableview->setObjectName("record_tableview");
        record_tableview->setGeometry(QRect(10, 50, 571, 651));
        widget_5 = new QWidget(page_3);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(580, 130, 251, 341));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        InputPdtName = new QLineEdit(widget_5);
        InputPdtName->setObjectName("InputPdtName");
        InputPdtName->setMinimumSize(QSize(0, 40));
        QFont font5;
        font5.setPointSize(20);
        InputPdtName->setFont(font5);

        gridLayout_5->addWidget(InputPdtName, 1, 0, 1, 1);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName("label_10");
        label_10->setFont(font4);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_10, 0, 0, 1, 1);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName("widget_6");
        horizontalLayout = new QHBoxLayout(widget_6);
        horizontalLayout->setObjectName("horizontalLayout");
        btn_search = new QPushButton(widget_6);
        btn_search->setObjectName("btn_search");
        btn_search->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(btn_search);

        btn_cancleSearch = new QPushButton(widget_6);
        btn_cancleSearch->setObjectName("btn_cancleSearch");
        btn_cancleSearch->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(btn_cancleSearch);


        gridLayout_5->addWidget(widget_6, 2, 0, 1, 1);

        btn_searchAll = new QPushButton(page_3);
        btn_searchAll->setObjectName("btn_searchAll");
        btn_searchAll->setGeometry(QRect(590, 60, 241, 40));
        btn_searchAll->setMinimumSize(QSize(0, 40));
        btn_deleteRecord = new QPushButton(page_3);
        btn_deleteRecord->setObjectName("btn_deleteRecord");
        btn_deleteRecord->setGeometry(QRect(590, 520, 241, 61));
        stackedWidget->addWidget(page_3);

        gridLayout_7->addWidget(stackedWidget, 1, 1, 1, 1);


        retranslateUi(page_customer);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(page_customer);
    } // setupUi

    void retranslateUi(QWidget *page_customer)
    {
        page_customer->setWindowTitle(QCoreApplication::translate("page_customer", "\347\224\250\346\210\267\347\225\214\351\235\242", nullptr));
        label_2->setText(QCoreApplication::translate("page_customer", "\347\224\250\346\210\267\357\274\232", nullptr));
        UserName->setText(QCoreApplication::translate("page_customer", "Customer", nullptr));
        label->setText(QCoreApplication::translate("page_customer", "\346\254\242\350\277\216\345\205\211\344\270\264", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("page_customer", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        pushButton_4->setText(QCoreApplication::translate("page_customer", "\351\200\200\345\207\272", nullptr));
        label_7->setText(QCoreApplication::translate("page_customer", "\350\264\255\344\271\260\345\225\206\345\223\201\346\225\260\351\207\217", nullptr));
        btn_Buy->setText(QCoreApplication::translate("page_customer", "\350\264\255\344\271\260", nullptr));
        btn_addcart->setText(QCoreApplication::translate("page_customer", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        label_3->setText(QCoreApplication::translate("page_customer", "\350\264\255\347\211\251\344\270\255\345\277\203", nullptr));
        btn_clear->setText(QCoreApplication::translate("page_customer", "\351\207\215\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("page_customer", "\350\264\255\344\271\260\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        label_5->setText(QCoreApplication::translate("page_customer", "\350\264\255\344\271\260\345\225\206\345\223\201\347\274\226\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("page_customer", "\346\237\245\350\257\242\344\273\212\346\227\245\345\225\206\345\223\201", nullptr));
        label_8->setText(QCoreApplication::translate("page_customer", "\346\210\221\347\232\204\350\264\255\347\211\251\350\275\246", nullptr));
        show_cart->setText(QCoreApplication::translate("page_customer", "\346\237\245\347\234\213\346\210\221\347\232\204\350\264\255\347\211\251\350\275\246", nullptr));
        btn_buy->setText(QCoreApplication::translate("page_customer", "\345\215\225\344\270\252\350\264\255\344\271\260", nullptr));
        btn_buyAll->setText(QCoreApplication::translate("page_customer", "\344\270\200\351\224\256\350\264\255\344\271\260", nullptr));
        btn_delete->setText(QCoreApplication::translate("page_customer", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        label_9->setText(QCoreApplication::translate("page_customer", "\346\210\221\347\232\204\350\256\242\345\215\225", nullptr));
        label_10->setText(QCoreApplication::translate("page_customer", "\351\234\200\350\246\201\346\237\245\350\257\242\347\232\204\345\225\206\345\223\201", nullptr));
        btn_search->setText(QCoreApplication::translate("page_customer", "\346\237\245\350\257\242", nullptr));
        btn_cancleSearch->setText(QCoreApplication::translate("page_customer", "\345\217\226\346\266\210", nullptr));
        btn_searchAll->setText(QCoreApplication::translate("page_customer", "\346\237\245\350\257\242\346\211\200\346\234\211\345\225\206\345\223\201", nullptr));
        btn_deleteRecord->setText(QCoreApplication::translate("page_customer", "\345\210\240\351\231\244\350\256\242\345\215\225(\351\200\200\350\264\247)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_customer: public Ui_page_customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_CUSTOMER_H

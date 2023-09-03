/********************************************************************************
** Form generated from reading UI file 'page_manager.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_MANAGER_H
#define UI_PAGE_MANAGER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_manager
{
public:
    QGridLayout *gridLayout_9;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_12;
    QWidget *widget_9;
    QGridLayout *gridLayout_7;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLineEdit *InputPrice;
    QWidget *widget_6;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QLineEdit *InputDiscount;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *InputName;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLineEdit *InputNo;
    QLabel *label_7;
    QWidget *widget_10;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancel;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_8;
    QGridLayout *gridLayout_6;
    QWidget *widget_7;
    QGridLayout *gridLayout_5;
    QRadioButton *NO;
    QRadioButton *YES;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QWidget *page_2;
    QGridLayout *gridLayout_26;
    QLabel *label_10;
    QWidget *widget_11;
    QGridLayout *gridLayout_13;
    QLabel *label_5;
    QLineEdit *deleteNum;
    QWidget *widget_29;
    QHBoxLayout *horizontalLayout_7;
    QTableView *DatatableView1;
    QWidget *widget_28;
    QGridLayout *gridLayout_25;
    QPushButton *showInformation;
    QPushButton *delete_delete;
    QPushButton *delete_cancel;
    QWidget *page_3;
    QGridLayout *gridLayout_21;
    QLabel *label_11;
    QWidget *widget_17;
    QGridLayout *gridLayout_20;
    QLineEdit *Search_no;
    QPushButton *pushButton_2;
    QLabel *label_12;
    QWidget *widget_21;
    QHBoxLayout *horizontalLayout_3;
    QTableView *DatatableView1_2;
    QWidget *page_4;
    QGridLayout *gridLayout_18;
    QWidget *widget_13;
    QGridLayout *gridLayout_15;
    QLabel *label_15;
    QLineEdit *change_name;
    QWidget *widget_12;
    QGridLayout *gridLayout_14;
    QLabel *label_14;
    QLineEdit *change_No;
    QTableView *change_tableView;
    QLabel *label_13;
    QWidget *widget_18;
    QGridLayout *gridLayout_19;
    QLabel *label_18;
    QLineEdit *change_price;
    QWidget *widget_14;
    QGridLayout *gridLayout_16;
    QLabel *label_16;
    QLineEdit *change_discount;
    QWidget *widget_15;
    QGridLayout *gridLayout_17;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_16;
    QHBoxLayout *horizontalLayout;
    QRadioButton *import_Yes;
    QRadioButton *import_No;
    QLabel *label_17;
    QPushButton *btn_change;
    QWidget *page_5;
    QGridLayout *gridLayout_22;
    QLabel *label_19;
    QWidget *widget_22;
    QWidget *widget_23;
    QHBoxLayout *horizontalLayout_4;
    QTableView *record_view;
    QWidget *widget_20;
    QGridLayout *gridLayout_23;
    QDateEdit *TimeEdit;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rdo_month;
    QRadioButton *rdo_day;
    QPushButton *searchTime;
    QPushButton *searchALL;
    QWidget *page_6;
    QGridLayout *gridLayout_24;
    QLabel *label_20;
    QWidget *widget_24;
    QHBoxLayout *horizontalLayout_5;
    QTableView *SaleView;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_25;
    QVBoxLayout *verticalLayout;
    QDateEdit *Time_edit;
    QPushButton *btn_search;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_26;
    QHBoxLayout *horizontalLayout_6;
    QTableView *shopView;
    QWidget *widget_27;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_shopSearch;
    QPushButton *btn_shop;
    QWidget *widget_4;
    QGridLayout *gridLayout_11;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QListWidget *listWidget;

    void setupUi(QWidget *page_manager)
    {
        if (page_manager->objectName().isEmpty())
            page_manager->setObjectName("page_manager");
        page_manager->resize(800, 800);
        page_manager->setMinimumSize(QSize(800, 550));
        page_manager->setMaximumSize(QSize(100000, 100000));
        page_manager->setSizeIncrement(QSize(0, 0));
        gridLayout_9 = new QGridLayout(page_manager);
        gridLayout_9->setObjectName("gridLayout_9");
        stackedWidget = new QStackedWidget(page_manager);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(300, 250));
        stackedWidget->setMaximumSize(QSize(100000, 100000));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_12 = new QGridLayout(page);
        gridLayout_12->setObjectName("gridLayout_12");
        widget_9 = new QWidget(page);
        widget_9->setObjectName("widget_9");
        gridLayout_7 = new QGridLayout(widget_9);
        gridLayout_7->setObjectName("gridLayout_7");
        widget_5 = new QWidget(widget_9);
        widget_5->setObjectName("widget_5");
        widget_5->setMinimumSize(QSize(0, 70));
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setObjectName("gridLayout_3");
        label_4 = new QLabel(widget_5);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(16);
        label_4->setFont(font);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        InputPrice = new QLineEdit(widget_5);
        InputPrice->setObjectName("InputPrice");
        InputPrice->setMinimumSize(QSize(500, 55));
        QFont font1;
        font1.setPointSize(11);
        InputPrice->setFont(font1);

        gridLayout_3->addWidget(InputPrice, 0, 1, 1, 1);


        gridLayout_7->addWidget(widget_5, 3, 0, 1, 1);

        widget_6 = new QWidget(widget_9);
        widget_6->setObjectName("widget_6");
        widget_6->setMinimumSize(QSize(0, 70));
        gridLayout_4 = new QGridLayout(widget_6);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(6, -1, 10, -1);
        label_8 = new QLabel(widget_6);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        InputDiscount = new QLineEdit(widget_6);
        InputDiscount->setObjectName("InputDiscount");
        InputDiscount->setMinimumSize(QSize(500, 55));
        InputDiscount->setFont(font1);

        gridLayout_4->addWidget(InputDiscount, 0, 1, 1, 1);


        gridLayout_7->addWidget(widget_6, 4, 0, 1, 1);

        widget_2 = new QWidget(widget_9);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 70));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        label_6 = new QLabel(widget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        InputName = new QLineEdit(widget_2);
        InputName->setObjectName("InputName");
        InputName->setMinimumSize(QSize(500, 55));
        InputName->setFont(font1);

        gridLayout->addWidget(InputName, 1, 1, 1, 1);


        gridLayout_7->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(widget_9);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 70));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        InputNo = new QLineEdit(widget_3);
        InputNo->setObjectName("InputNo");
        InputNo->setMinimumSize(QSize(500, 55));
        InputNo->setFont(font1);

        gridLayout_2->addWidget(InputNo, 0, 2, 1, 1);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 0, 1, 1, 1);


        gridLayout_7->addWidget(widget_3, 2, 0, 1, 1);

        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName("widget_10");
        gridLayout_10 = new QGridLayout(widget_10);
        gridLayout_10->setObjectName("gridLayout_10");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        cancel = new QPushButton(widget_10);
        cancel->setObjectName("cancel");
        cancel->setMinimumSize(QSize(160, 40));

        gridLayout_10->addWidget(cancel, 0, 4, 1, 1);

        ok = new QPushButton(widget_10);
        ok->setObjectName("ok");
        ok->setMinimumSize(QSize(160, 40));

        gridLayout_10->addWidget(ok, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_5, 0, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_7, 0, 3, 1, 1);


        gridLayout_7->addWidget(widget_10, 6, 0, 1, 1);

        widget_8 = new QWidget(widget_9);
        widget_8->setObjectName("widget_8");
        gridLayout_6 = new QGridLayout(widget_8);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(18);
        gridLayout_6->setContentsMargins(0, 7, 49, 6);
        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName("widget_7");
        gridLayout_5 = new QGridLayout(widget_7);
        gridLayout_5->setObjectName("gridLayout_5");
        NO = new QRadioButton(widget_7);
        NO->setObjectName("NO");
        NO->setMinimumSize(QSize(40, 36));
        NO->setChecked(true);

        gridLayout_5->addWidget(NO, 0, 1, 1, 1);

        YES = new QRadioButton(widget_7);
        YES->setObjectName("YES");
        YES->setMinimumSize(QSize(40, 36));
        YES->setChecked(false);

        gridLayout_5->addWidget(YES, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout_6->addWidget(widget_7, 0, 2, 1, 1);

        label_9 = new QLabel(widget_8);
        label_9->setObjectName("label_9");
        QFont font2;
        font2.setPointSize(12);
        label_9->setFont(font2);

        gridLayout_6->addWidget(label_9, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_8, 5, 0, 1, 1);


        gridLayout_12->addWidget(widget_9, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_26 = new QGridLayout(page_2);
        gridLayout_26->setObjectName("gridLayout_26");
        label_10 = new QLabel(page_2);
        label_10->setObjectName("label_10");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font3.setPointSize(24);
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_10, 0, 0, 1, 1);

        widget_11 = new QWidget(page_2);
        widget_11->setObjectName("widget_11");
        gridLayout_13 = new QGridLayout(widget_11);
        gridLayout_13->setObjectName("gridLayout_13");
        label_5 = new QLabel(widget_11);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 16));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font4.setPointSize(12);
        label_5->setFont(font4);

        gridLayout_13->addWidget(label_5, 0, 1, 1, 1);

        deleteNum = new QLineEdit(widget_11);
        deleteNum->setObjectName("deleteNum");
        deleteNum->setMinimumSize(QSize(500, 64));

        gridLayout_13->addWidget(deleteNum, 0, 2, 1, 1);


        gridLayout_26->addWidget(widget_11, 1, 0, 1, 1);

        widget_29 = new QWidget(page_2);
        widget_29->setObjectName("widget_29");
        horizontalLayout_7 = new QHBoxLayout(widget_29);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        DatatableView1 = new QTableView(widget_29);
        DatatableView1->setObjectName("DatatableView1");
        DatatableView1->setMaximumSize(QSize(600, 16777215));

        horizontalLayout_7->addWidget(DatatableView1);

        widget_28 = new QWidget(widget_29);
        widget_28->setObjectName("widget_28");
        gridLayout_25 = new QGridLayout(widget_28);
        gridLayout_25->setObjectName("gridLayout_25");
        showInformation = new QPushButton(widget_28);
        showInformation->setObjectName("showInformation");
        showInformation->setMinimumSize(QSize(0, 35));

        gridLayout_25->addWidget(showInformation, 0, 0, 1, 1);

        delete_delete = new QPushButton(widget_28);
        delete_delete->setObjectName("delete_delete");
        delete_delete->setMinimumSize(QSize(0, 35));

        gridLayout_25->addWidget(delete_delete, 1, 0, 1, 1);

        delete_cancel = new QPushButton(widget_28);
        delete_cancel->setObjectName("delete_cancel");
        delete_cancel->setMinimumSize(QSize(0, 35));

        gridLayout_25->addWidget(delete_cancel, 2, 0, 1, 1);


        horizontalLayout_7->addWidget(widget_28);


        gridLayout_26->addWidget(widget_29, 2, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_21 = new QGridLayout(page_3);
        gridLayout_21->setObjectName("gridLayout_21");
        label_11 = new QLabel(page_3);
        label_11->setObjectName("label_11");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font5.setPointSize(26);
        label_11->setFont(font5);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_21->addWidget(label_11, 0, 0, 1, 1);

        widget_17 = new QWidget(page_3);
        widget_17->setObjectName("widget_17");
        gridLayout_20 = new QGridLayout(widget_17);
        gridLayout_20->setObjectName("gridLayout_20");
        Search_no = new QLineEdit(widget_17);
        Search_no->setObjectName("Search_no");
        Search_no->setMinimumSize(QSize(0, 50));
        Search_no->setFont(font);

        gridLayout_20->addWidget(Search_no, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(widget_17);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setMaximumSize(QSize(16777215, 50));

        gridLayout_20->addWidget(pushButton_2, 3, 0, 1, 1);

        label_12 = new QLabel(widget_17);
        label_12->setObjectName("label_12");
        label_12->setMinimumSize(QSize(0, 40));
        label_12->setMaximumSize(QSize(16777215, 40));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font6.setPointSize(20);
        label_12->setFont(font6);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_20->addWidget(label_12, 1, 0, 1, 1);


        gridLayout_21->addWidget(widget_17, 0, 1, 1, 1);

        widget_21 = new QWidget(page_3);
        widget_21->setObjectName("widget_21");
        horizontalLayout_3 = new QHBoxLayout(widget_21);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        DatatableView1_2 = new QTableView(widget_21);
        DatatableView1_2->setObjectName("DatatableView1_2");
        DatatableView1_2->setMinimumSize(QSize(580, 0));

        horizontalLayout_3->addWidget(DatatableView1_2);


        gridLayout_21->addWidget(widget_21, 1, 0, 1, 2);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_18 = new QGridLayout(page_4);
        gridLayout_18->setObjectName("gridLayout_18");
        widget_13 = new QWidget(page_4);
        widget_13->setObjectName("widget_13");
        gridLayout_15 = new QGridLayout(widget_13);
        gridLayout_15->setObjectName("gridLayout_15");
        label_15 = new QLabel(widget_13);
        label_15->setObjectName("label_15");
        label_15->setFont(font4);

        gridLayout_15->addWidget(label_15, 0, 0, 1, 1);

        change_name = new QLineEdit(widget_13);
        change_name->setObjectName("change_name");
        change_name->setMinimumSize(QSize(0, 50));

        gridLayout_15->addWidget(change_name, 0, 1, 1, 1);


        gridLayout_18->addWidget(widget_13, 2, 1, 1, 2);

        widget_12 = new QWidget(page_4);
        widget_12->setObjectName("widget_12");
        gridLayout_14 = new QGridLayout(widget_12);
        gridLayout_14->setObjectName("gridLayout_14");
        label_14 = new QLabel(widget_12);
        label_14->setObjectName("label_14");
        label_14->setFont(font4);

        gridLayout_14->addWidget(label_14, 0, 0, 1, 1);

        change_No = new QLineEdit(widget_12);
        change_No->setObjectName("change_No");
        change_No->setMinimumSize(QSize(0, 50));

        gridLayout_14->addWidget(change_No, 0, 1, 1, 1);


        gridLayout_18->addWidget(widget_12, 1, 1, 1, 2);

        change_tableView = new QTableView(page_4);
        change_tableView->setObjectName("change_tableView");

        gridLayout_18->addWidget(change_tableView, 1, 0, 8, 1);

        label_13 = new QLabel(page_4);
        label_13->setObjectName("label_13");
        QFont font7;
        font7.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font7.setPointSize(22);
        label_13->setFont(font7);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_13, 0, 0, 1, 2);

        widget_18 = new QWidget(page_4);
        widget_18->setObjectName("widget_18");
        gridLayout_19 = new QGridLayout(widget_18);
        gridLayout_19->setObjectName("gridLayout_19");
        label_18 = new QLabel(widget_18);
        label_18->setObjectName("label_18");
        label_18->setFont(font4);

        gridLayout_19->addWidget(label_18, 0, 0, 1, 1);

        change_price = new QLineEdit(widget_18);
        change_price->setObjectName("change_price");
        change_price->setMinimumSize(QSize(0, 50));

        gridLayout_19->addWidget(change_price, 0, 1, 1, 1);


        gridLayout_18->addWidget(widget_18, 3, 1, 1, 2);

        widget_14 = new QWidget(page_4);
        widget_14->setObjectName("widget_14");
        gridLayout_16 = new QGridLayout(widget_14);
        gridLayout_16->setObjectName("gridLayout_16");
        label_16 = new QLabel(widget_14);
        label_16->setObjectName("label_16");
        label_16->setFont(font4);

        gridLayout_16->addWidget(label_16, 0, 0, 1, 1);

        change_discount = new QLineEdit(widget_14);
        change_discount->setObjectName("change_discount");
        change_discount->setMinimumSize(QSize(0, 50));

        gridLayout_16->addWidget(change_discount, 0, 1, 1, 1);


        gridLayout_18->addWidget(widget_14, 4, 1, 1, 2);

        widget_15 = new QWidget(page_4);
        widget_15->setObjectName("widget_15");
        gridLayout_17 = new QGridLayout(widget_15);
        gridLayout_17->setObjectName("gridLayout_17");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        widget_16 = new QWidget(widget_15);
        widget_16->setObjectName("widget_16");
        horizontalLayout = new QHBoxLayout(widget_16);
        horizontalLayout->setObjectName("horizontalLayout");
        import_Yes = new QRadioButton(widget_16);
        import_Yes->setObjectName("import_Yes");

        horizontalLayout->addWidget(import_Yes);

        import_No = new QRadioButton(widget_16);
        import_No->setObjectName("import_No");
        import_No->setChecked(true);

        horizontalLayout->addWidget(import_No);


        gridLayout_17->addWidget(widget_16, 0, 2, 1, 1);

        label_17 = new QLabel(widget_15);
        label_17->setObjectName("label_17");
        label_17->setFont(font4);

        gridLayout_17->addWidget(label_17, 0, 1, 1, 1);


        gridLayout_18->addWidget(widget_15, 5, 1, 1, 1);

        btn_change = new QPushButton(page_4);
        btn_change->setObjectName("btn_change");
        btn_change->setMinimumSize(QSize(0, 40));

        gridLayout_18->addWidget(btn_change, 7, 1, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_22 = new QGridLayout(page_5);
        gridLayout_22->setObjectName("gridLayout_22");
        label_19 = new QLabel(page_5);
        label_19->setObjectName("label_19");
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout_22->addWidget(label_19, 0, 1, 1, 1);

        widget_22 = new QWidget(page_5);
        widget_22->setObjectName("widget_22");

        gridLayout_22->addWidget(widget_22, 1, 0, 2, 2);

        widget_23 = new QWidget(page_5);
        widget_23->setObjectName("widget_23");
        horizontalLayout_4 = new QHBoxLayout(widget_23);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        record_view = new QTableView(widget_23);
        record_view->setObjectName("record_view");

        horizontalLayout_4->addWidget(record_view);

        widget_20 = new QWidget(widget_23);
        widget_20->setObjectName("widget_20");
        gridLayout_23 = new QGridLayout(widget_20);
        gridLayout_23->setObjectName("gridLayout_23");
        TimeEdit = new QDateEdit(widget_20);
        TimeEdit->setObjectName("TimeEdit");
        TimeEdit->setMinimumSize(QSize(0, 50));
        TimeEdit->setDate(QDate(2022, 11, 10));

        gridLayout_23->addWidget(TimeEdit, 0, 0, 1, 1);

        widget_19 = new QWidget(widget_20);
        widget_19->setObjectName("widget_19");
        horizontalLayout_2 = new QHBoxLayout(widget_19);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        rdo_month = new QRadioButton(widget_19);
        rdo_month->setObjectName("rdo_month");
        rdo_month->setChecked(true);

        horizontalLayout_2->addWidget(rdo_month);

        rdo_day = new QRadioButton(widget_19);
        rdo_day->setObjectName("rdo_day");

        horizontalLayout_2->addWidget(rdo_day);

        searchTime = new QPushButton(widget_19);
        searchTime->setObjectName("searchTime");
        searchTime->setMinimumSize(QSize(0, 25));

        horizontalLayout_2->addWidget(searchTime);


        gridLayout_23->addWidget(widget_19, 1, 0, 1, 1);

        searchALL = new QPushButton(widget_20);
        searchALL->setObjectName("searchALL");
        searchALL->setMinimumSize(QSize(0, 40));

        gridLayout_23->addWidget(searchALL, 3, 0, 1, 1);


        horizontalLayout_4->addWidget(widget_20);


        gridLayout_22->addWidget(widget_23, 2, 1, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        gridLayout_24 = new QGridLayout(page_6);
        gridLayout_24->setObjectName("gridLayout_24");
        label_20 = new QLabel(page_6);
        label_20->setObjectName("label_20");
        label_20->setFont(font7);
        label_20->setAlignment(Qt::AlignCenter);

        gridLayout_24->addWidget(label_20, 0, 0, 1, 1);

        widget_24 = new QWidget(page_6);
        widget_24->setObjectName("widget_24");
        widget_24->setMaximumSize(QSize(16777215, 135));
        horizontalLayout_5 = new QHBoxLayout(widget_24);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        SaleView = new QTableView(widget_24);
        SaleView->setObjectName("SaleView");
        SaleView->setMinimumSize(QSize(450, 0));
        SaleView->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_5->addWidget(SaleView);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        widget_25 = new QWidget(widget_24);
        widget_25->setObjectName("widget_25");
        widget_25->setMinimumSize(QSize(200, 0));
        widget_25->setMaximumSize(QSize(200, 16777215));
        verticalLayout = new QVBoxLayout(widget_25);
        verticalLayout->setObjectName("verticalLayout");
        Time_edit = new QDateEdit(widget_25);
        Time_edit->setObjectName("Time_edit");
        Time_edit->setMinimumSize(QSize(0, 40));
        Time_edit->setDate(QDate(2022, 12, 1));

        verticalLayout->addWidget(Time_edit);

        btn_search = new QPushButton(widget_25);
        btn_search->setObjectName("btn_search");
        btn_search->setMinimumSize(QSize(0, 36));

        verticalLayout->addWidget(btn_search);


        horizontalLayout_5->addWidget(widget_25);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);


        gridLayout_24->addWidget(widget_24, 1, 0, 1, 1);

        widget_26 = new QWidget(page_6);
        widget_26->setObjectName("widget_26");
        horizontalLayout_6 = new QHBoxLayout(widget_26);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        shopView = new QTableView(widget_26);
        shopView->setObjectName("shopView");
        shopView->setMaximumSize(QSize(550, 16777215));

        horizontalLayout_6->addWidget(shopView);

        widget_27 = new QWidget(widget_26);
        widget_27->setObjectName("widget_27");
        verticalLayout_2 = new QVBoxLayout(widget_27);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btn_shopSearch = new QPushButton(widget_27);
        btn_shopSearch->setObjectName("btn_shopSearch");
        btn_shopSearch->setMinimumSize(QSize(0, 36));

        verticalLayout_2->addWidget(btn_shopSearch);

        btn_shop = new QPushButton(widget_27);
        btn_shop->setObjectName("btn_shop");
        btn_shop->setMinimumSize(QSize(0, 36));

        verticalLayout_2->addWidget(btn_shop);


        horizontalLayout_6->addWidget(widget_27);


        gridLayout_24->addWidget(widget_26, 2, 0, 1, 1);

        stackedWidget->addWidget(page_6);

        gridLayout_9->addWidget(stackedWidget, 1, 1, 1, 1);

        widget_4 = new QWidget(page_manager);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(16777215, 80));
        gridLayout_11 = new QGridLayout(widget_4);
        gridLayout_11->setObjectName("gridLayout_11");
        label = new QLabel(widget_4);
        label->setObjectName("label");
        label->setFont(font7);

        gridLayout_11->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        widget = new QWidget(widget_4);
        widget->setObjectName("widget");
        gridLayout_8 = new QGridLayout(widget);
        gridLayout_8->setObjectName("gridLayout_8");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(80, 16777215));

        gridLayout_8->addWidget(pushButton, 0, 4, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(45, 45));
        label_3->setMaximumSize(QSize(45, 45));
        label_3->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/naxida.jpg);"));

        gridLayout_8->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout_8->addWidget(label_2, 0, 2, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout_8->addWidget(pushButton_3, 0, 3, 1, 1);

        gridLayout_8->setColumnStretch(0, 1);
        gridLayout_8->setColumnStretch(1, 1);
        gridLayout_8->setColumnStretch(2, 1);

        gridLayout_11->addWidget(widget, 0, 2, 1, 1);


        gridLayout_9->addWidget(widget_4, 0, 0, 1, 2);

        listWidget = new QListWidget(page_manager);
        listWidget->setObjectName("listWidget");
        listWidget->setMaximumSize(QSize(125, 16777215));
        listWidget->setFont(font2);

        gridLayout_9->addWidget(listWidget, 1, 0, 1, 1);


        retranslateUi(page_manager);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(page_manager);
    } // setupUi

    void retranslateUi(QWidget *page_manager)
    {
        page_manager->setWindowTitle(QCoreApplication::translate("page_manager", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        label_4->setText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\344\273\267\346\240\274", nullptr));
        InputPrice->setPlaceholderText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245", nullptr));
        label_8->setText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\346\212\230\346\211\243", nullptr));
        InputDiscount->setPlaceholderText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245\345\260\217\346\225\260\357\274\201", nullptr));
        label_6->setText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        InputName->setText(QString());
        InputName->setPlaceholderText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245", nullptr));
        InputNo->setPlaceholderText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245", nullptr));
        label_7->setText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\347\274\226\345\217\267", nullptr));
        cancel->setText(QCoreApplication::translate("page_manager", "\345\217\226\346\266\210", nullptr));
        ok->setText(QCoreApplication::translate("page_manager", "\347\241\256\350\256\244", nullptr));
        NO->setText(QCoreApplication::translate("page_manager", "\345\220\246", nullptr));
        YES->setText(QCoreApplication::translate("page_manager", "\346\230\257", nullptr));
        label_9->setText(QCoreApplication::translate("page_manager", "\346\255\244\345\225\206\345\223\201\346\230\257\345\220\246\344\270\272\350\277\233\345\217\243", nullptr));
        label_10->setText(QCoreApplication::translate("page_manager", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        label_5->setText(QCoreApplication::translate("page_manager", "\346\203\263\350\246\201\345\210\240\351\231\244\347\232\204\345\225\206\345\223\201\357\274\232", nullptr));
        showInformation->setText(QCoreApplication::translate("page_manager", "\346\230\276\347\244\272\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        delete_delete->setText(QCoreApplication::translate("page_manager", "\345\210\240\351\231\244", nullptr));
        delete_cancel->setText(QCoreApplication::translate("page_manager", "\345\217\226\346\266\210", nullptr));
        label_11->setText(QCoreApplication::translate("page_manager", "\346\237\245\350\257\242\345\225\206\345\223\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("page_manager", "\346\237\245\350\257\242", nullptr));
        label_12->setText(QCoreApplication::translate("page_manager", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\347\274\226\345\217\267", nullptr));
        label_15->setText(QCoreApplication::translate("page_manager", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        label_14->setText(QCoreApplication::translate("page_manager", "\345\225\206\345\223\201\347\274\226\345\217\267", nullptr));
        label_13->setText(QCoreApplication::translate("page_manager", "\344\277\256\346\224\271\345\225\206\345\223\201\346\225\260\346\215\256", nullptr));
        label_18->setText(QCoreApplication::translate("page_manager", "\345\225\206\345\223\201\344\273\267\346\240\274", nullptr));
        label_16->setText(QCoreApplication::translate("page_manager", "\345\225\206\345\223\201\346\212\230\346\211\243", nullptr));
        import_Yes->setText(QCoreApplication::translate("page_manager", "\346\230\257", nullptr));
        import_No->setText(QCoreApplication::translate("page_manager", "\345\220\246", nullptr));
        label_17->setText(QCoreApplication::translate("page_manager", "\346\230\257\345\220\246\350\277\233\345\217\243", nullptr));
        btn_change->setText(QCoreApplication::translate("page_manager", "\344\277\256\346\224\271", nullptr));
        label_19->setText(QCoreApplication::translate("page_manager", "\350\256\242\345\215\225", nullptr));
        rdo_month->setText(QCoreApplication::translate("page_manager", "\346\234\210", nullptr));
        rdo_day->setText(QCoreApplication::translate("page_manager", "\346\227\245", nullptr));
        searchTime->setText(QCoreApplication::translate("page_manager", "\346\237\245\350\257\242\350\256\242\345\215\225", nullptr));
        searchALL->setText(QCoreApplication::translate("page_manager", "\346\237\245\350\257\242\346\211\200\346\234\211\350\256\242\345\215\225", nullptr));
        label_20->setText(QCoreApplication::translate("page_manager", "\351\224\200\345\224\256\346\203\205\345\206\265", nullptr));
        btn_search->setText(QCoreApplication::translate("page_manager", "\346\237\245\350\257\242", nullptr));
        btn_shopSearch->setText(QCoreApplication::translate("page_manager", "\346\214\207\345\256\232\345\225\206\345\223\201\346\237\245\350\257\242", nullptr));
        btn_shop->setText(QCoreApplication::translate("page_manager", "\345\225\206\345\223\201\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("page_manager", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("page_manager", "\351\200\200\345\207\272", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("page_manager", "\347\224\250\346\210\267\345\220\215\357\274\232admin", nullptr));
        pushButton_3->setText(QCoreApplication::translate("page_manager", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_manager: public Ui_page_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_MANAGER_H

/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Login
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_userName;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_Password;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QRadioButton *Rad_Mgr;
    QRadioButton *Rad_Cus;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_login;
    QPushButton *btn_register;

    void setupUi(QWidget *Page_Login)
    {
        if (Page_Login->objectName().isEmpty())
            Page_Login->setObjectName("Page_Login");
        Page_Login->resize(400, 250);
        Page_Login->setMinimumSize(QSize(400, 250));
        Page_Login->setMaximumSize(QSize(400, 250));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Login->setWindowIcon(icon);
        Page_Login->setLayoutDirection(Qt::LeftToRight);
        Page_Login->setStyleSheet(QString::fromUtf8(""));
        gridLayout_3 = new QGridLayout(Page_Login);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(Page_Login);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 60));
        label_3->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213")});
        font.setPointSize(24);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        widget_2 = new QWidget(Page_Login);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        le_userName = new QLineEdit(widget_2);
        le_userName->setObjectName("le_userName");
        le_userName->setMaxLength(200);
        le_userName->setEchoMode(QLineEdit::Normal);

        gridLayout_2->addWidget(le_userName, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        le_Password = new QLineEdit(widget_2);
        le_Password->setObjectName("le_Password");
        le_Password->setMaxLength(200);
        le_Password->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(le_Password, 1, 2, 1, 1);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setMaximumSize(QSize(500, 100));
        widget_3->setLayoutDirection(Qt::LeftToRight);
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        Rad_Mgr = new QRadioButton(widget_3);
        Rad_Mgr->setObjectName("Rad_Mgr");
        Rad_Mgr->setChecked(true);

        gridLayout_4->addWidget(Rad_Mgr, 0, 0, 1, 1);

        Rad_Cus = new QRadioButton(widget_3);
        Rad_Cus->setObjectName("Rad_Cus");

        gridLayout_4->addWidget(Rad_Cus, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget_3, 2, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 2, 3, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(Page_Login);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(35, 35));
        widget->setMaximumSize(QSize(16777215, 40));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(2, 0, 2, 0);
        btn_login = new QPushButton(widget);
        btn_login->setObjectName("btn_login");
        btn_login->setMinimumSize(QSize(0, 35));
        btn_login->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_login, 0, 0, 1, 1);

        btn_register = new QPushButton(widget);
        btn_register->setObjectName("btn_register");
        btn_register->setMinimumSize(QSize(0, 35));
        btn_register->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(btn_register, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(Page_Login);

        QMetaObject::connectSlotsByName(Page_Login);
    } // setupUi

    void retranslateUi(QWidget *Page_Login)
    {
        Page_Login->setWindowTitle(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_Login->setToolTip(QCoreApplication::translate("Page_Login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("Page_Login", "\344\276\277\345\210\251\345\272\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        le_userName->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Page_Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Page_Login", "\345\257\206\347\240\201", nullptr));
        le_Password->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245", nullptr));
        Rad_Mgr->setText(QCoreApplication::translate("Page_Login", "\347\256\241\347\220\206\345\221\230", nullptr));
        Rad_Cus->setText(QCoreApplication::translate("Page_Login", "\351\241\276\345\256\242", nullptr));
        btn_login->setText(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        btn_register->setText(QCoreApplication::translate("Page_Login", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Login: public Ui_Page_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H

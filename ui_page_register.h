/********************************************************************************
** Form generated from reading UI file 'page_register.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_REGISTER_H
#define UI_PAGE_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_register
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *UserPassword;
    QLineEdit *UserPassword2;
    QLineEdit *UserNum;
    QLabel *label;
    QLabel *label_3;
    QWidget *widget_5;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *page_register)
    {
        if (page_register->objectName().isEmpty())
            page_register->setObjectName("page_register");
        page_register->resize(400, 300);
        page_register->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(page_register);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(page_register);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(400, 45));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(20);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        widget = new QWidget(page_register);
        widget->setObjectName("widget");
        widget->setMaximumSize(QSize(1000000, 1000000));
        widget->setLayoutDirection(Qt::LeftToRight);
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        UserPassword = new QLineEdit(widget);
        UserPassword->setObjectName("UserPassword");
        UserPassword->setLayoutDirection(Qt::LeftToRight);
        UserPassword->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        UserPassword->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_3->addWidget(UserPassword, 1, 1, 1, 1);

        UserPassword2 = new QLineEdit(widget);
        UserPassword2->setObjectName("UserPassword2");
        UserPassword2->setLayoutDirection(Qt::LeftToRight);
        UserPassword2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        gridLayout_3->addWidget(UserPassword2, 2, 1, 1, 1);

        UserNum = new QLineEdit(widget);
        UserNum->setObjectName("UserNum");
        UserNum->setLayoutDirection(Qt::LeftToRight);

        gridLayout_3->addWidget(UserNum, 0, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        widget_5 = new QWidget(page_register);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(10000, 50));
        gridLayout = new QGridLayout(widget_5);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName("pushButton");
        pushButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget_5, 2, 0, 1, 1);


        retranslateUi(page_register);

        QMetaObject::connectSlotsByName(page_register);
    } // setupUi

    void retranslateUi(QWidget *page_register)
    {
        page_register->setWindowTitle(QCoreApplication::translate("page_register", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label_4->setText(QCoreApplication::translate("page_register", "\346\263\250\345\206\214\346\226\260\350\264\246\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("page_register", "\345\257\206\347\240\201", nullptr));
        UserPassword->setPlaceholderText(QCoreApplication::translate("page_register", "\350\257\267\350\276\223\345\205\245\350\256\276\347\275\256\345\257\206\347\240\201", nullptr));
        UserPassword2->setPlaceholderText(QCoreApplication::translate("page_register", "\350\257\267\347\241\256\350\256\244\350\276\223\345\205\245\347\232\204\345\257\206\347\240\201", nullptr));
        UserNum->setPlaceholderText(QCoreApplication::translate("page_register", "\350\257\267\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("page_register", "\346\211\213\346\234\272\345\217\267/\350\264\246\345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("page_register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        pushButton->setText(QCoreApplication::translate("page_register", "\346\263\250\345\206\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("page_register", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class page_register: public Ui_page_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_REGISTER_H

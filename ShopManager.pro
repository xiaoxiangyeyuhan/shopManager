QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    customer.cpp \
    database.cpp \
    main.cpp \
    mainwindow.cpp \
    manager.cpp \
    page_customer.cpp \
    page_login.cpp \
    page_manager.cpp \
    page_register.cpp \
    product.cpp \
    record.cpp \
    user.cpp

HEADERS += \
    customer.h \
    database.h \
    mainwindow.h \
    manager.h \
    page_customer.h \
    page_login.h \
    page_manager.h \
    page_register.h \
    product.h \
    record.h \
    user.h

FORMS += \
    mainwindow.ui \
    page_customer.ui \
    page_login.ui \
    page_manager.ui \
    page_register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES +=

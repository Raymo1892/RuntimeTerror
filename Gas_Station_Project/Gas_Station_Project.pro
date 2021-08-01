QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accounts.cpp \
    accountsstorage.cpp \
    homepagewindow.cpp \
    items.cpp \
    main.cpp \
    mainwindow.cpp \
    mysql.cpp \
    recoverpassword.cpp \
    registrationwindow.cpp

HEADERS += \
    accounts.h \
    accountsstorage.h \
    homepagewindow.h \
    items.h \
    mainwindow.h \
    mysql.h \
    recoverpassword.h \
    registrationwindow.h

FORMS += \
    homepagewindow.ui \
    mainwindow.ui \
    recoverpassword.ui \
    registrationwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

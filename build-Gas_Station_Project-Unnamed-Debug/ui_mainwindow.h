/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_Password;
    QPushButton *newUserButton;
    QPushButton *loginButton;
    QPushButton *forgotPasswordButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_logo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1250, 700);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 127, 145)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 170, 461, 371));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 36, 79);\n"
"border-color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 30, 121, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(0, 255, 255);"));
        lineEdit_UserName = new QLineEdit(groupBox);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));
        lineEdit_UserName->setGeometry(QRect(131, 113, 261, 41));
        lineEdit_UserName->setMinimumSize(QSize(201, 41));
        lineEdit_UserName->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"boarder:blue;\n"
"color:black"));
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(130, 170, 261, 41));
        lineEdit_Password->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        newUserButton = new QPushButton(groupBox);
        newUserButton->setObjectName(QString::fromUtf8("newUserButton"));
        newUserButton->setGeometry(QRect(150, 320, 221, 31));
        newUserButton->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(63, 36, 79)"));
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(150, 220, 221, 51));
        loginButton->setAutoFillBackground(false);
        loginButton->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(63, 36, 79)"));
        loginButton->setIconSize(QSize(20, 20));
        forgotPasswordButton = new QPushButton(groupBox);
        forgotPasswordButton->setObjectName(QString::fromUtf8("forgotPasswordButton"));
        forgotPasswordButton->setGeometry(QRect(150, 280, 221, 31));
        forgotPasswordButton->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(63, 36, 79)"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 110, 101, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(0, 255, 255);"));

        verticalLayout->addWidget(label_4);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 70, 441, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(63, 36, 79);\n"
"font: 87 24pt \"Segoe UI Black\";"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(980, 620, 271, 61));
        label_5->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setGeometry(QRect(680, 170, 531, 341));
        label_logo->setBaseSize(QSize(50, 50));
        label_logo->setStyleSheet(QString::fromUtf8(""));
        label_logo->setScaledContents(false);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">LOGIN</span></p></body></html>", nullptr));
        newUserButton->setText(QCoreApplication::translate("MainWindow", "New User", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("MainWindow", "Forgot Password ?", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Username</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Password</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">RTG Fuel Station</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Project Created By Runtime Terror Group", nullptr));
        label_logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

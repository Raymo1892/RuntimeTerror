/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QGroupBox *groupBox;
    QLabel *registrationLabel;
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLineEdit *lineEdit_FirstName;
    QLineEdit *lineEdit_LastName;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_Password;
    QLabel *lastNameLabel;
    QLabel *firstNameLabel;
    QPushButton *registerPushButton;
    QPushButton *cancelButton;
    QLabel *passwordLabel_2;
    QLineEdit *answer;
    QLabel *passwordLabel_3;

    void setupUi(QDialog *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName(QString::fromUtf8("RegistrationWindow"));
        RegistrationWindow->resize(1250, 700);
        RegistrationWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 127, 145)"));
        groupBox = new QGroupBox(RegistrationWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 0, 811, 721));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 36, 79)\n"
""));
        registrationLabel = new QLabel(groupBox);
        registrationLabel->setObjectName(QString::fromUtf8("registrationLabel"));
        registrationLabel->setGeometry(QRect(150, 30, 291, 51));
        registrationLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(63, 36, 79);\n"
"color: rgb(0, 255, 255);"));
        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(30, 260, 141, 31));
        usernameLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(63, 36, 79);\n"
"color: rgb(0, 255, 255);"));
        passwordLabel = new QLabel(groupBox);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(30, 319, 131, 41));
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(63, 36, 79);\n"
"color: rgb(0, 255, 255);"));
        lineEdit_FirstName = new QLineEdit(groupBox);
        lineEdit_FirstName->setObjectName(QString::fromUtf8("lineEdit_FirstName"));
        lineEdit_FirstName->setGeometry(QRect(180, 140, 201, 41));
        lineEdit_FirstName->setMinimumSize(QSize(201, 41));
        lineEdit_FirstName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_LastName = new QLineEdit(groupBox);
        lineEdit_LastName->setObjectName(QString::fromUtf8("lineEdit_LastName"));
        lineEdit_LastName->setGeometry(QRect(180, 200, 201, 41));
        lineEdit_LastName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_UserName = new QLineEdit(groupBox);
        lineEdit_UserName->setObjectName(QString::fromUtf8("lineEdit_UserName"));
        lineEdit_UserName->setGeometry(QRect(180, 260, 201, 41));
        lineEdit_UserName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Password = new QLineEdit(groupBox);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(180, 320, 201, 41));
        lineEdit_Password->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        lastNameLabel = new QLabel(groupBox);
        lastNameLabel->setObjectName(QString::fromUtf8("lastNameLabel"));
        lastNameLabel->setGeometry(QRect(30, 209, 121, 31));
        lastNameLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(63, 36, 79);\n"
"color: rgb(0, 255, 255);"));
        firstNameLabel = new QLabel(groupBox);
        firstNameLabel->setObjectName(QString::fromUtf8("firstNameLabel"));
        firstNameLabel->setGeometry(QRect(30, 149, 121, 31));
        firstNameLabel->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(63, 36, 79);\n"
"color: rgb(0, 255, 255);"));
        registerPushButton = new QPushButton(groupBox);
        registerPushButton->setObjectName(QString::fromUtf8("registerPushButton"));
        registerPushButton->setGeometry(QRect(180, 410, 201, 51));
        registerPushButton->setAutoFillBackground(false);
        registerPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        registerPushButton->setIconSize(QSize(20, 20));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(240, 490, 80, 25));
        cancelButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"color: rgb(63, 36, 79)"));
        passwordLabel_2 = new QLabel(groupBox);
        passwordLabel_2->setObjectName(QString::fromUtf8("passwordLabel_2"));
        passwordLabel_2->setGeometry(QRect(460, 130, 311, 41));
        passwordLabel_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(63, 36, 79);\n"
"color: rgb(0, 255, 255);"));
        answer = new QLineEdit(groupBox);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(460, 190, 201, 41));
        answer->setMinimumSize(QSize(201, 41));
        answer->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        passwordLabel_3 = new QLabel(groupBox);
        passwordLabel_3->setObjectName(QString::fromUtf8("passwordLabel_3"));
        passwordLabel_3->setGeometry(QRect(460, 90, 221, 41));
        passwordLabel_3->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(63, 36, 79);\n"
"color: rgb(0, 255, 255);"));

        retranslateUi(RegistrationWindow);

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QDialog *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "Dialog", nullptr));
        groupBox->setTitle(QString());
        registrationLabel->setText(QCoreApplication::translate("RegistrationWindow", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:400;\">Registration</span></p></body></html>", nullptr));
        usernameLabel->setText(QCoreApplication::translate("RegistrationWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Username</span></p></body></html>", nullptr));
        passwordLabel->setText(QCoreApplication::translate("RegistrationWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Password</span></p></body></html>", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("RegistrationWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Last Name</span></p></body></html>", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("RegistrationWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">First Name</span></p></body></html>", nullptr));
        registerPushButton->setText(QCoreApplication::translate("RegistrationWindow", "Register", nullptr));
        cancelButton->setText(QCoreApplication::translate("RegistrationWindow", "Cancel", nullptr));
        passwordLabel_2->setText(QCoreApplication::translate("RegistrationWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">What is your first pet name?</span></p></body></html>", nullptr));
        passwordLabel_3->setText(QCoreApplication::translate("RegistrationWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Security Question</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H

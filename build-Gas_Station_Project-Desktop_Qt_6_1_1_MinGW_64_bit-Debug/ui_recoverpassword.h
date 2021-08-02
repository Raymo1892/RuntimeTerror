/********************************************************************************
** Form generated from reading UI file 'recoverpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOVERPASSWORD_H
#define UI_RECOVERPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recoverPassword
{
public:
    QFrame *frame;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *reentepassword;
    QLineEdit *answer;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_7;

    void setupUi(QDialog *recoverPassword)
    {
        if (recoverPassword->objectName().isEmpty())
            recoverPassword->setObjectName(QString::fromUtf8("recoverPassword"));
        recoverPassword->resize(1402, 863);
        recoverPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 127, 145)\n"
""));
        frame = new QFrame(recoverPassword);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(180, 70, 1021, 671));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 36, 79);\n"
"border-color: rgb(0, 0, 0);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 36, 281, 71));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 471, 261, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(63, 36, 79)"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 540, 171, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 87 8pt \"Segoe UI Black\";\n"
"background-color: rgb(0, 255, 255);\n"
"color: rgb(63, 36, 79)"));
        username = new QLineEdit(frame);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(310, 140, 261, 41));
        username->setMinimumSize(QSize(201, 41));
        username->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"boarder:blue;\n"
"color:black"));
        password = new QLineEdit(frame);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(310, 220, 261, 41));
        password->setMinimumSize(QSize(201, 41));
        password->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"boarder:blue;\n"
"color:black"));
        password->setEchoMode(QLineEdit::Password);
        reentepassword = new QLineEdit(frame);
        reentepassword->setObjectName(QString::fromUtf8("reentepassword"));
        reentepassword->setGeometry(QRect(310, 290, 261, 41));
        reentepassword->setMinimumSize(QSize(201, 41));
        reentepassword->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"boarder:blue;\n"
"color:black"));
        reentepassword->setEchoMode(QLineEdit::Password);
        answer = new QLineEdit(frame);
        answer->setObjectName(QString::fromUtf8("answer"));
        answer->setGeometry(QRect(310, 370, 261, 41));
        answer->setMinimumSize(QSize(201, 41));
        answer->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"boarder:blue;\n"
"color:black"));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 140, 230, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_6);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_5);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 255);\n"
"font: 87 8pt \"Segoe UI Black\";"));

        verticalLayout->addWidget(label_7);


        retranslateUi(recoverPassword);

        QMetaObject::connectSlotsByName(recoverPassword);
    } // setupUi

    void retranslateUi(QDialog *recoverPassword)
    {
        recoverPassword->setWindowTitle(QCoreApplication::translate("recoverPassword", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("recoverPassword", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">Recover Password</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("recoverPassword", "Change Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("recoverPassword", "Cancel", nullptr));
        label_4->setText(QCoreApplication::translate("recoverPassword", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Username</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("recoverPassword", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">New Password</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("recoverPassword", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Reenter New Password</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("recoverPassword", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">What is your first pet name ?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recoverPassword: public Ui_recoverPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOVERPASSWORD_H

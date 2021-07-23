#include "registrationwindow.h"
#include "ui_registrationwindow.h"
#include <QString>
#include <QMessageBox>

RegistrationWindow::RegistrationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrationWindow)
{
    ui->setupUi(this);
}

RegistrationWindow::~RegistrationWindow()
{
    delete ui;
}

void RegistrationWindow::on_cancelButton_clicked()
{
    hide();
}


void RegistrationWindow::on_registerPushButton_clicked()
{
    QString firstName = ui->lineEdit_FirstName->text();
    QString lastName = ui->lineEdit_LastName->text();
    QString username = ui->lineEdit_UserName->text();
    QString password = ui->lineEdit_Password->text();
    QString email = ui->lineEdit_Email->text();

    //Store data in the database here
    QMessageBox::information(this, "Registration", "You entered: \n" + firstName + "\n" + lastName
                             + "\n" + username + "\n" + password + "\n" + email + "\n");
}


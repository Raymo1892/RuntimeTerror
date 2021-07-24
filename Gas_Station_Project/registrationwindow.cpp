#include "registrationwindow.h"
#include "ui_registrationwindow.h"
#include <QMessageBox>
#include <QPixmap>

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
    mysql db;

    //Chcek if connection is open
    if(db.connectDB())
    {
        QMessageBox::information(this, "Connection", "Database Connection Established");

        //storing text field values into the variable
        QString userName = ui ->lineEdit_UserName ->text();
        QString passWord = ui ->lineEdit_Password ->text();
        QString firstName = ui ->lineEdit_FirstName ->text();
        QString lastName = ui ->lineEdit_LastName ->text();
        QString email = ui ->lineEdit_Email ->text();

        //Write query to database
        QSqlQuery qry;
        qry.prepare("INSERT INTO employee (username, password, firstname, lastname, email)"
                    "VAlUES (:username, :password, :firstname, :lastname, :email)");
        //binding variable with vaues column
        qry.bindValue(":username", userName);
        qry.bindValue(":password", passWord);
        qry.bindValue(":firstname", firstName);
        qry.bindValue(":lastname", lastName);
        qry.bindValue(":email", email);

        if(qry.exec())
        {
            QMessageBox::information(this, "Inserted", "Data Inserted Successfully");

            //clearing the text field after successful insertion
            ui ->lineEdit_UserName->clear();
            ui ->lineEdit_Password ->clear();
            ui ->lineEdit_FirstName ->clear();
            ui ->lineEdit_LastName ->clear();
            ui ->lineEdit_Email ->clear();

        }
        else
        {
            QMessageBox::information(this, "Not Connected", "Data Insertion failed");
        }

    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }

    //hide();
    db.closeDB();
}

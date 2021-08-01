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

void RegistrationWindow::clear_text_field()
{
    //clearing the text field after successful insertion
    ui ->lineEdit_UserName->clear();
    ui ->lineEdit_Password ->clear();
    ui ->lineEdit_FirstName ->clear();
    ui ->lineEdit_LastName ->clear();
}

void RegistrationWindow::on_registerPushButton_clicked()
{
    mysql db;

    //Chcek if connection is open
    if(db.connectDB())
    {
        //QMessageBox::information(this, "Connection", "Database Connection Established");

        //storing text field values into the variable
        QString userName = ui ->lineEdit_UserName ->text();
        QString passWord = ui ->lineEdit_Password ->text();
        QString firstName = ui ->lineEdit_FirstName ->text();
        QString lastName = ui ->lineEdit_LastName ->text();
        if(userName == "" || passWord == "" || firstName == "" || lastName == "")
        {
           QMessageBox::information(this, "Required Field Empty", "One or More field are empty Try Again");
        }
        else
        {
            //Write query to database
            QSqlQuery qry;
            qry.prepare("INSERT INTO USERS (username, password, firstname, lastname, privilege, sales)"
                        "VAlUES (:username, :password, :firstname, :lastname, :privilege, :sales)");
            //binding variable with values column
            qry.bindValue(":username", userName);
            qry.bindValue(":password", passWord);
            qry.bindValue(":firstname", firstName);
            qry.bindValue(":lastname", lastName);
            qry.bindValue(":privilege", 0);
            qry.bindValue(":sales", 0);

            if(qry.exec())
            {
                QMessageBox::information(this, "Inserted", "Data Inserted Successfully");

                clear_text_field();
            }
            else
            {
                QMessageBox::information(this, "Not Connected", "Data Insertion failed");
            }
        }


    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }

    //hide();
    db.closeDB();
}

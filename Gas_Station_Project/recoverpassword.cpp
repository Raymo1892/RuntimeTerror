#include "recoverpassword.h"
#include "ui_recoverpassword.h"
#include <mysql.h>

recoverPassword::recoverPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recoverPassword)
{
    ui->setupUi(this);
}

recoverPassword::~recoverPassword()
{
    delete ui;
}

void recoverPassword::on_pushButton_2_clicked()
{
    close();
}


void recoverPassword::on_pushButton_clicked()
{
    mysql db;
    QString username = ui->username->text();
    QString password = ui->password->text();
    QString reenterpassword = ui->reentepassword->text();
    QString answer = ui->answer->text();
    //Check if answer match when changing password.


    if(db.connectDB())
    {
        QSqlQuery qry1, qry2;
        qry2.prepare(QString("SELECT * FROM USERS WHERE username = :username AND passwordRecover = :passwordRecover"));
        qry2.bindValue(":username", username);
        qry2.bindValue(":passwordRecover", answer);
        if(!qry2.exec())
        {
            QMessageBox::warning(this, "Query Failed", "Query Failed to Execute ");
        }
        else
        {
            while(qry2.next())
            {
                QString usernameFromDB = qry2.value(0).toString();
                QString answerFromDB = qry2.value(6).toString();

                if(usernameFromDB == username && answerFromDB == answer)
                {
                    QMessageBox::information(this, "Security Answer", "Security Answer Match.");
                    //Updating password
                    qry1.prepare("UPDATE USERS SET password = :password WHERE username = :username");
                    //binding variable with values column
                    qry1.bindValue(":username", username);
                    qry1.bindValue(":password", password);
                    if(!qry1.exec())
                    {
                        QMessageBox::warning(this, "Failed", "Update Failed to Execute ");
                    }
                    else
                    {
                        QMessageBox::information(this, "Change Password", "Password Updated");
                        //Clear field after enter the data
                        ui->answer->clear();
                        ui->username->clear();
                        ui->password->clear();
                        ui->reentepassword->clear();
                    }

                }
                else
                {
                    QMessageBox::information(this, "Security Answer", "Security Answer Do Not Match Try Again.");
                }
             }

        }










    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();
}


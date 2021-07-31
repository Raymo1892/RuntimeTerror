#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include "accountsstorage.h"
#include "homepagewindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{



    ui->setupUi(this);
    QPixmap pixel(":/resources/resources/storelogo.png");
    int width = ui->label_logo->width();
    int height = ui->label_logo->height();
    ui->label_logo->setPixmap(pixel.scaled(width, height, Qt::KeepAspectRatio));


}

MainWindow::~MainWindow()
{
    delete ui;
}


// When the "login button" is clicked from main window
void MainWindow::on_loginButton_clicked()
{
           mysql database;
           bool login_flag = false;

           //load stored accounts
           //accounts.loadAccounts();

            //uncomment this to use the database
            //Chcek if connection is open
            if(database.connectDB())
            {
                //QMessageBox::information(this, "Connection", "Database connected successfully");


                //Show the homepage window only if DB is connected
                QString username = ui->lineEdit_UserName ->text();
                QString password = ui->lineEdit_Password ->text();

                QSqlQuery query;
                query.prepare(QString("SELECT * FROM USERS WHERE username = :username AND password = :password"));

                query.bindValue(":username", username);
                query.bindValue(":password", password);

                if(!query.exec())
                {
                    QMessageBox::warning(this, "Failed", "Query Failed to Execute");
                }
                 else
                {
                    while(query.next())
                    {
                        QString usernameFromDB = query.value(0).toString();
                        QString passwordFromDB = query.value(1).toString();

                        if(usernameFromDB == username && passwordFromDB == password)
                        {
                            QMessageBox::information(this, "Login", "Successful Login.");
                                login_flag = true;
                        }
                     }
                 }
              }else
                {
                     QMessageBox::information(this, "Connection", "Database Failed to Connected");
                 }

                //display Homepage board after logging in with correct login.
                //Use modal approach to not kill the first window when creating new
                //Below used is not a modal where it does hide the first window*/

            if(login_flag)
              {
                    hide(); //Hides the first window
                    //Calling main dashboard/homepage window with menu and toolbar
                    hWindow = new HomepageWindow(this);
                    hWindow->show();
              }
            else
            {
                QMessageBox::information(this, "Login", "Incorrect username or password, Try again");
            }
          database.closeDB();

         /* login_flag = true;
           if (login_flag)
           {
               hide();
               hWindow = new HomepageWindow(this);
               hWindow->show();
           }*/


}


// When the "forgot password" button is clicked from the home page
void MainWindow::on_forgotPasswordButton_clicked()
{
    QMessageBox::information(this, "Forgot Password ?", " Please wait for resetting password!!");
}


// When the "new user" button is clicked from the home page
void MainWindow::on_newUserButton_clicked()
{
    //hide();    -- you can uncomment this to hide the window before opening new one

    regisWindow = new RegistrationWindow(this); // creating registration window object
    regisWindow->show(); // this shows the window
}


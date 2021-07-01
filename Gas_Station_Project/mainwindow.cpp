#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
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
    bool login_flag = false;
    QString username = ui->lineEdit_UserName ->text();
    QString password = ui->lineEdit_Password ->text();

    if(username == "admin" && password == "admin")
    {
        QMessageBox::information(this, "Login", "Successful Login Hurray.");
            login_flag = true;

    }
    else
    {
        QMessageBox::warning(this, "Login", "Incorrect Username or Password. Try harder");
    }


    //display Homepage board after logging in with correct login.
    /* Use modal approach to not kill the first window when creating new
    Below used is not a modal where it does hide the first window*/
    if(login_flag)
    {
        hide(); //Hides the first window
        homepage = new Homepage(this);
        homepage->show();
    }


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


#include "homepagewindow.h"
#include "ui_homepagewindow.h"
#include "QMessageBox"



HomepageWindow::HomepageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomepageWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

HomepageWindow::~HomepageWindow()
{
    delete ui;
}


void HomepageWindow::on_homeButton_clicked()
{
    //This is display the home screen widget when pressed.
    ui->stackedWidget->setCurrentIndex(0);
}


void HomepageWindow::on_accountButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void HomepageWindow::on_inventoryButton_clicked()
{

       ui->stackedWidget->setCurrentIndex(2);
}



void HomepageWindow::on_auditButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void HomepageWindow::on_settingButton_clicked()
{
     QMessageBox::information(this, "Message", " Work in Progress!!");
}

void HomepageWindow::on_logOutButton_clicked()
{
    QMessageBox::information(this, "Message", " Logging out....");
    close();
}

void HomepageWindow::on_returnButton_3_clicked()
{
    //This is display the home screen widget when pressed.
    ui->stackedWidget->setCurrentIndex(0);
}


void HomepageWindow::on_returnButton_clicked()
{
    //This is display the home screen widget when pressed.
    ui->stackedWidget->setCurrentIndex(0);
}


void HomepageWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Message", "Currently unavailable feature!!");
}


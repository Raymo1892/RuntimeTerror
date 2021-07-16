#include "homepagewindow.h"
#include "ui_homepagewindow.h"
#include "QMessageBox"
#include <QStyleFactory>
#include <QString>

QString cartString;
QString totalString;

double cartTotal = 0.0;
double unleadedPrice = 22.75;
double premiumPrice = 25.75;
double dieselPrice = 30.75;
double grillItemPrice = 1.99;
double chipsPrice = 1.99;
double fountainDrinkPrice = .99;
double coffeePrice = .99;
double bottledBevPrice = 1.79;
double candyPrice = .99;


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
     //QMessageBox::information(this, "Message", " Work in Progress!!");
     ui->stackedWidget->setCurrentIndex(4);
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


void HomepageWindow::on_helpButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void HomepageWindow::on_unleadedButton_clicked()
{
    cartString += "\nUnleaded 10 Gallons - $22.75";
    cartTotal += unleadedPrice;
    ui->cartDisplay->setText(cartString); // this shows the item name / price in the cart display

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString); // this shows the total cart amount in the cart display
}


void HomepageWindow::on_premiumButton_clicked()
{
    cartString += "\nPremium 10 Gallons - $25.75";
    cartTotal += premiumPrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_dieselButton_clicked()
{
    cartString += "\nDiesel 10 Gallons - $30.75";
    cartTotal += dieselPrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_grillItemButton_clicked()
{
    cartString += "\nCoffee - $0.99";
    cartTotal += grillItemPrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_candyButton_clicked()
{
    cartString += "\nSingle Candy - $0.99";
    cartTotal += candyPrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_chipsButton_clicked()
{
    cartString += "\nSingle Chips - $1.99";
    cartTotal += chipsPrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_coffeeButton_clicked()
{
    cartString += "\nSingle Chips - $1.99";
    cartTotal += coffeePrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_fountainDrinkButton_clicked()
{
    cartString += "\nFountain Drink - $0.99";
    cartTotal += fountainDrinkPrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_bottledBevButton_clicked()
{
    cartString += "\nBottled Beverage - $1.79";
    cartTotal += bottledBevPrice;
    ui->cartDisplay->setText(cartString);

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);
}

void HomepageWindow::on_clearCartButton_clicked()
{
    cartString = "";
    cartTotal = 0.0;

    totalString = QString::number(cartTotal);
    ui->cartDisplay->setText(cartString);
    ui->totalBoxDisplay->setText("$" + totalString);
}

void HomepageWindow::on_inventoryButton_page_clicked()
{
    QMessageBox::information(this, "Notice", " Please wait for feature!!");
}


void HomepageWindow::on_viewAuditButton_clicked()
{
    QMessageBox::information(this, "Notice", " Please wait for feature!!");
}


void HomepageWindow::on_pushButton_ChangeEmployeePassword_clicked()
{
    //QString username = ui->usernameLineEdit->text();
    //QString password = ui->newPassLineEdit->text();

    //bool change = false;

    /*
     if vectors are used just replace what slot the password is in with the new password...

     if (username == (vector[i][0])) <----- username in data base || 0 = username, 1 = password
     {
        vector[i][1] = password;
        change = true;
        break;
     }
     else
     {
        change = false;
     }

     if (change == true)
     {
        QMesssageBox::information(this, "Notice", "Employee Password Updated");
     }
     else
     {
        QMesssageBox::information(this, "Notice", "Employee Does Not Exist");
     }

    */
}





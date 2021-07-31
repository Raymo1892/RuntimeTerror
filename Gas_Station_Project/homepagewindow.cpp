#include "homepagewindow.h"
#include "mainwindow.h"
#include "ui_homepagewindow.h"
#include <accountsstorage.h>
#include "accounts.h"
#include "QMessageBox"
#include <QStyleFactory>
#include <QString>
#include <items.h>
#include <accounts.h>
#include <QVector>

QString cartString;
QString totalString;
double cartTotal = 0.0;
QVector<Items> itemsVector;
Items coffee(1, "Coffee", .99, true, "drinks", 100);
Items bottledBev(2, "Bottled Beverage", 1.79, true, "drinks", 100);
Items fountainDrink(3, "Fountain Drink", .99, true, "drinks", 100);
Items chips(4, "Chips", 1.99, true, "food", 100);
Items candy(5, "Candy", .99, true, "food", 100);
Items grillItem(6, "Grill Item", 1.99, true, "food", 100);
Items unleaded(7, "Unleaded Gas (Gallons)", 2.79, true, "gas", 10000);
Items premium(8, "Premium Gas (Gallons)", 3.09, true, "gas", 10000);
Items diesel(9, "Diesel Fuel (Gallons)", 3.29, true, "gas", 10000);

using namespace std;


HomepageWindow::HomepageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomepageWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    itemsVector.push_back(coffee);
    itemsVector.push_back(bottledBev);
    itemsVector.push_back(fountainDrink);
    itemsVector.push_back(chips);
    itemsVector.push_back(candy);
    itemsVector.push_back(grillItem);
    itemsVector.push_back(unleaded);
    itemsVector.push_back(premium);
    itemsVector.push_back(diesel);
}

HomepageWindow::~HomepageWindow()
{
    delete ui;
}

//added after refactoring, just simplifies the code
//this replaces the setCurrentIndex line in every button in the stacked widget
//added by Jorge
//can be removed later
void HomepageWindow::changeCurrentIndex(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}


void HomepageWindow::on_homeButton_clicked()
{
    //This is display the home screen widget when pressed.
    ui->stackedWidget->setCurrentIndex(0);
}


void HomepageWindow::on_accountButton_clicked()
{
    changeCurrentIndex(1);

}

void HomepageWindow::on_ChangePasswordButton_clicked()
{
    changeCurrentIndex(2);

}

//ADD USER
void HomepageWindow::on_addUserButton_clicked()
{
    changeCurrentIndex(3);
}

void HomepageWindow::on_removeUserButton_clicked()
{
    changeCurrentIndex(4);

}

void HomepageWindow::on_inventoryButton_clicked()
{
    changeCurrentIndex(5);

}



void HomepageWindow::on_auditButton_clicked()
{
    changeCurrentIndex(7);

}


void HomepageWindow::on_settingButton_clicked()
{
    QMessageBox::information(this, "Message", " Work in Progress!!");
    changeCurrentIndex(8);

}

void HomepageWindow::on_helpButton_clicked()
{
    changeCurrentIndex(9);

}


void HomepageWindow::on_returnAccountsButton_clicked()
{
    changeCurrentIndex(1);

}

void HomepageWindow::on_returnAccountsButton1_clicked()
{
    changeCurrentIndex(1);

}

void HomepageWindow::on_returnAccountsButton2_clicked()
{
    changeCurrentIndex(1);

}

void HomepageWindow::on_logOutButton_clicked()
{
    //program terminating, store the accounts
    accounts.storeAccounts();
    accounts.cleanup();

    QMessageBox::information(this, "Message", " Logging out....");
    close();
}

void HomepageWindow::on_returnFromInventoryButton_clicked()
{
    //This is display the home screen widget when pressed.
    changeCurrentIndex(0);

}


void HomepageWindow::on_returnFromAuditButton_clicked()
{
    //This is display the home screen widget when pressed.
    changeCurrentIndex(0);

}


void HomepageWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this, "Message", "Currently unavailable feature!!");
}


void HomepageWindow::on_clearCartButton_clicked()
{
    cartString = "";
    cartTotal = 0.0;

    totalString = QString::number(cartTotal);
    ui->cartDisplay->setText(cartString);
    ui->totalBoxDisplay->setText("$" + totalString);
}


void HomepageWindow::on_viewAuditButton_clicked()
{
    ui->viewAuditScreen->setText("Insert Audit information here...");

}


void HomepageWindow::on_pushButton_ChangeEmployeePassword_clicked()
{
    QString username = ui->changePass_Username_LineEdit->text();
    QString password = ui->changePass_Password_LineEdit->text();

    //Store data in the database here
    QMessageBox::information(this, "Change Password", "You entered: \n" + username + "\n" + password + "\n");

}

//to add a user
void HomepageWindow::on_saveUserButton_clicked()
{
    string firstname = ui->addUserLineEditFirstName->text().toStdString();
    string lastname = ui->addUserLineEditLastName->text().toStdString();
    string username = ui->addUserLineEditUsername->text().toStdString();
    string password = ui->addUserLineEditPassword->text().toStdString();
    int privilege = ui->addUserLineEditPrivilege->text().toInt();
    //sales defaults to zero because the new account has not made sales yet

    //check if username exists
    if (accounts.usernameExists((username)) == false)
    {
        //add user
        accounts.addAccount(username, password, firstname, lastname, privilege);
    }
    else
        QMessageBox::information(this, "Unable to add account", "An account with that username already exists.\n Please try a different username.");

    //else, tell user what's going in with a qmessagebox
}


void HomepageWindow::on_deleteUserButton_clicked()
{
    QString username = ui->removeUserNameLineEdit->text();
    QString password = ui->removeUserPassLineEdit->text();

    //Store data in the database here
    QMessageBox::information(this, "Delete User", "You entered: \n" + username + "\n" + password + "\n");
}


void HomepageWindow::on_Tableview_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void HomepageWindow::on_Tableview_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void HomepageWindow::on_addToCartButton_clicked()
{
    QString itemID = ui->makeSaleItemIDLineEdit->text();
    QString quantity = ui->makeSaleQuantityLineEdit->text();

    //QMessageBox::information(this, "Add to Cart", "You entered: \n" + itemID + "\n" + quantity + "\n");




    for(int i = 0; i < itemsVector.size(); i++)
    {
        if(itemsVector[i].id == itemID.toInt())
        {
            double itemTotal = quantity.toInt() * itemsVector[i].price;
            ui->cartDisplay->setText(ui->cartDisplay->text() + "\n" + quantity + "X " + itemsVector[i].name + " - " + QString::number(itemTotal));
            cartTotal += itemTotal;

            totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
            ui->totalBoxDisplay->setText("$" + totalString);
        }
    }



}


void HomepageWindow::on_makeSaleHelpButton_clicked()
{
    ui->helpScreen->setWordWrap(true);
    ui->helpScreen->setText("1. Enter item ID from menu into item ID box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "2. Enter quantity for item into quanity box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "3. Click Add to Cart button\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "4. Click Submit Sale button if satisfied or Clear Cart if not\n");

}


void HomepageWindow::on_changePasswordHelpButton_clicked()
{
    ui->helpScreen->setWordWrap(true);
    ui->helpScreen->setText("1. Enter username of account you wish to change (Management Privilege Required)\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "2. Enter the new password for the account\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "3. Click Change Employee Password button to save changes\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "4. Click Return to Accounts Home button to return\n");
}


void HomepageWindow::on_addUserHelpButton_clicked()
{
    ui->helpScreen->setWordWrap(true);
    ui->helpScreen->setText("1. Enter first name into first name box (Management Privilege Required)\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "2. Enter last name into last name box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "3. Enter username into username box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "4. Enter password into password box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "5. Enter privilege into privilege box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "6. Click Save User button to save account\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "7. Click Return to Accounts Home button to return\n");
}


void HomepageWindow::on_removeUserHelpButton_clicked()
{
    ui->helpScreen->setWordWrap(true);
    ui->helpScreen->setText("1. Enter username into username box (Management Privilege Required)\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "2. Enter password into password box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "3. Click Delete User Account button to remove account\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "4. Click Return to Accounts Home button to return\n");
}


void HomepageWindow::on_inventoryHelpButton_clicked()
{
    ui->helpScreen->setWordWrap(true);
    ui->helpScreen->setText("1. Inventory -- Work in Progress!\n");

}


void HomepageWindow::on_auditHelpButton_clicked()
{
    ui->helpScreen->setWordWrap(true);
    ui->helpScreen->setText("1. Audit -- Work in Progress!\n");

}


void HomepageWindow::on_AddItem_clicked()
{

}


void HomepageWindow::on_addItemButtonInventory_clicked()
{
    QString itemID = ui->inventoryIDLineEdit->text();
    QString itemName = ui->inventoryNameLineEdit->text();
    QString price = ui->inventoryPriceLineEdit->text();
    QString category = ui->inventoryCategoryLineEdit->text();
    QString quantity = ui->inventoryQuantityLineEdit->text();

    bool itemMatchFound = false;
    int i = 0;

    for(i = 0; i < itemsVector.size(); i++)
    {
        if(itemsVector[i].id == itemID.toInt())
        {
           QMessageBox::information(this, "Add Item", "Item already found in database, please try again.");
           itemMatchFound = true;
           break;
        }
    }

    if(itemMatchFound != true)
    {
        Items tempObj(itemID.toInt(), itemName, price.toDouble(), true, category, quantity.toInt());
        itemsVector.push_back(tempObj);
        QMessageBox::information(this, "Add Item", "Item successfully added.");
    }
}


void HomepageWindow::on_removeItemButton_clicked()
{
    QString itemID = ui->inventoryIDLineEdit->text();
    QString itemName = ui->inventoryNameLineEdit->text();
    QString price = ui->inventoryPriceLineEdit->text();
    QString category = ui->inventoryCategoryLineEdit->text();
    QString quantity = ui->inventoryQuantityLineEdit->text();

    bool itemMatchFound = false;


    for(int i = 0; i < itemsVector.size(); i++)
    {
        if(itemsVector[i].id == itemID.toInt())
        {
           itemMatchFound = true;
           itemsVector.remove(i);
           QMessageBox::information(this, "Remove Item", "Item successfully deleted.");
           break;
        }
    }

    if(itemMatchFound != true)
    {

        QMessageBox::information(this, "Remove Item", "No matching Item ID found. Please try again.");

    }
}


void HomepageWindow::on_updateInventoryButton_clicked()
{
    QString itemID = ui->inventoryIDLineEdit->text();
    QString itemName = ui->inventoryNameLineEdit->text();
    QString price = ui->inventoryPriceLineEdit->text();
    QString category = ui->inventoryCategoryLineEdit->text();
    QString quantity = ui->inventoryQuantityLineEdit->text();

    bool itemMatchFound = false;


    for(int i = 0; i < itemsVector.size(); i++)
    {
        if(itemsVector[i].id == itemID.toInt())
        {
           itemMatchFound = true;



        }
        if(itemMatchFound == true)
        {
            itemsVector[i].id = itemID.toInt();
            itemsVector[i].name = itemName;
            itemsVector[i].price = price.toDouble();
            itemsVector[i].category = category;
            itemsVector[i].quantity = quantity.toInt();
            QMessageBox::information(this, "Update Item", "Item successfully updated.");
            break;
        }
    }

    if(itemMatchFound != true)
    {
        QMessageBox::information(this, "Update Item", "No matching Item ID found. Please try again.");
    }
}


void HomepageWindow::on_clearFieldsButtonInventory_clicked()
{
    ui->inventoryIDLineEdit->clear();
    ui->inventoryNameLineEdit->clear();
    ui->inventoryPriceLineEdit->clear();
    ui->inventoryQuantityLineEdit->clear();
    ui->inventoryCategoryLineEdit->clear();
}


void HomepageWindow::on_tableViewButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void HomepageWindow::on_returnFromInventoryButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


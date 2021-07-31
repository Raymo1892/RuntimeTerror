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
#include <mysql.h>

QString cartString;
QString totalString;
double cartTotal = 0.0;
mysql db;
int idFromDB;
QString nameFromDB;
double priceFromDB;
bool inStockFromDB;
QString categoryFromDB;
int idNumber;

QVector<Items> itemsVector;
Items item1(0, "", 0, false, "", 0);
Items item2(0, "", 0, false, "", 0);
Items item3(0, "", 0, false, "", 0);
Items item4(0, "", 0, false, "", 0);
Items item5(0, "", 0, false, "", 0);
Items item6(0, "", 0, false, "", 0);
Items item7(0, "", 0, false, "", 0);
Items item8(0, "", 0, false, "", 0);
Items item9(0, "", 0, false, "", 0);

using namespace std;


HomepageWindow::HomepageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomepageWindow)
{
    if(db.connectDB())
    {
        QSqlQuery qry;
        //Read from database
        for(idNumber = 1; idNumber < 10; idNumber++){
            qry.prepare(QString("SELECT * FROM INVENTORY WHERE itemid = :idNumber"));
            //qry.prepare(QString("SELECT * FROM USERS WHERE username = :username AND password = :password"));
            //binding variable with values column
            qry.bindValue(":idNumber", idNumber);

            if(!qry.exec())
            {
                QMessageBox::warning(this, "Failed", "Query Failed to Execute ");

            }
            else
            {
                QMessageBox::information(this, "Query", qry.lastQuery());
                while(qry.next())
                {
                      idFromDB = qry.value(0).toInt();
                      nameFromDB = qry.value(1).toString();
                      priceFromDB = qry.value(2).toDouble();
                      inStockFromDB = qry.value(3).toBool();
                      categoryFromDB = qry.value(4).toString();
                }

            }
            switch(idNumber){
                        case 1:
                            item1.setID(idFromDB);
                            item1.setName(nameFromDB);
                            item1.setPrice(priceFromDB / 100);
                            item1.setStock(inStockFromDB);
                            item1.setCategory(categoryFromDB);
                            break;
                        case 2:
                            item2.setID(idFromDB);
                            item2.setName(nameFromDB);
                            item2.setPrice(priceFromDB / 100);
                            item2.setStock(inStockFromDB);
                            item2.setCategory(categoryFromDB);
                            break;
                        case 3:
                            item3.setID(idFromDB);
                            item3.setName(nameFromDB);
                            item3.setPrice(priceFromDB / 100);
                            item3.setStock(inStockFromDB);
                            item3.setCategory(categoryFromDB);
                            break;
                        case 4:
                            item4.setID(idFromDB);
                            item4.setName(nameFromDB);
                            item4.setPrice(priceFromDB / 100);
                            item4.setStock(inStockFromDB);
                            item4.setCategory(categoryFromDB);
                            break;
                        case 5:
                            item5.setID(idFromDB);
                            item5.setName(nameFromDB);
                            item5.setPrice(priceFromDB / 100);
                            item5.setStock(inStockFromDB);
                            item5.setCategory(categoryFromDB);
                            break;
                        case 6:
                            item6.setID(idFromDB);
                            item6.setName(nameFromDB);
                            item6.setPrice(priceFromDB / 100);
                            item6.setStock(inStockFromDB);
                            item6.setCategory(categoryFromDB);
                            break;
                        case 7:
                            item7.setID(idFromDB);
                            item7.setName(nameFromDB);
                            item7.setPrice(priceFromDB / 100);
                            item7.setStock(inStockFromDB);
                            item7.setCategory(categoryFromDB);
                            break;
                        case 8:
                            item8.setID(idFromDB);
                            item8.setName(nameFromDB);
                            item8.setPrice(priceFromDB / 100);
                            item8.setStock(inStockFromDB);
                            item8.setCategory(categoryFromDB);
                            break;
                        case 9:
                            item9.setID(idFromDB);
                            item9.setName(nameFromDB);
                            item9.setPrice(priceFromDB / 100);
                            item9.setStock(inStockFromDB);
                            item9.setCategory(categoryFromDB);
                            break;
            }

        }

    }
        else
        {
            QMessageBox::information(this, "Not Connected", "Database is not Connected");
        }
        db.closeDB();

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    itemsVector.push_back(item1);
    itemsVector.push_back(item2);
    itemsVector.push_back(item3);
    itemsVector.push_back(item4);
    itemsVector.push_back(item5);
    itemsVector.push_back(item6);
    itemsVector.push_back(item7);
    itemsVector.push_back(item8);
    itemsVector.push_back(item9);
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
    /*//program terminating, store the accounts
    accounts.storeAccounts();
    accounts.cleanup();*/

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
    /*
    //check if username exists
    if (accounts.usernameExists((username)) == false)
    {
        //add user
        accounts.addAccount(username, password, firstname, lastname, privilege);
    }
    else*/
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


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
//int idFromDB;
//QString nameFromDB;
//double priceFromDB;
//bool inStockFromDB;
//QString categoryFromDB;
//int idNumber;

using namespace std;


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
    if(db.connectDB())
    {
        QSqlQuery qry;
        qry.prepare("UPDATE USERS SET password = :password WHERE username = :username");
        //binding variable with values column
        qry.bindValue(":username", username);
        qry.bindValue(":password", password);
        if(!qry.exec()){
            QMessageBox::warning(this, "Failed", "Update Failed to Execute ");
        }
        else
        {
            QMessageBox::information(this, "Change Password", "You entered: \n" + username + "\n" + password + "\n");
        }

    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();

}

//to add a user
void HomepageWindow::on_saveUserButton_clicked()
{

    if(db.connectDB())
    {
        //storing text field values into the variable
        QString username = ui->addUserLineEditUsername->text();;
        QString password = ui->addUserLineEditPassword->text();
        QString firstName = ui->addUserLineEditFirstName->text();
        QString lastName = ui->addUserLineEditLastName->text();
        QString privilege = ui->addUserLineEditPrivilege->text();


        //Write query to database
        QSqlQuery qry;
        qry.prepare("INSERT INTO USERS (username, password, firstname, lastname, privilege, sales)"
                    "VAlUES (:username, :password, :firstname, :lastname, :privilege, :sales)");
        //binding variable with values column
        qry.bindValue(":username", username);
        qry.bindValue(":password", password);
        qry.bindValue(":firstname", firstName);
        qry.bindValue(":lastname", lastName);
        qry.bindValue(":privilege", privilege.toInt());
        qry.bindValue(":sales", 0);

        if(!qry.exec())
        {
            QMessageBox::information(this, "Not Connected", "Data Insertion failed");

        }
        else
        {
            QMessageBox::information(this, "Inserted", "Data Inserted Successfully");

        }
    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }

    //hide();
    db.closeDB();
}




void HomepageWindow::on_deleteUserButton_clicked()
{
    QString username = ui->removeUserNameLineEdit->text();
    QString password = ui->removeUserPassLineEdit->text();

    //Store data in the database here
    if(db.connectDB())
    {
        QSqlQuery qry;
        qry.prepare("DELETE FROM USERS WHERE username = :username AND password = :password");
        //binding variable with values column
        qry.bindValue(":username", username);
        qry.bindValue(":password", password);
        if(!qry.exec()){
            QMessageBox::warning(this, "Failed", "Update Failed to Execute ");
        }
        else
        {
            QMessageBox::information(this, "Delete User", "You entered: \n" + username + "\n" + password + "\n");
        }

    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();


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
    double itemPrice = 0;
    QString itemName = "";


    if(db.connectDB())
    {
        QSqlQuery qry;
        //Read from database
        qry.prepare(QString("SELECT * FROM INVENTORY WHERE itemid = :itemid"));
        //binding variable with values column
        qry.bindValue(":itemid", itemID);

        if(!qry.exec())
        {
            QMessageBox::warning(this, "Failed", "Query Failed to Execute ");

        }
        else
        {
            while(qry.next())
            {
                itemName = qry.value(1).toString();
                itemPrice = qry.value(2).toDouble() / 100;
            }

        }
    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();

    double itemTotal = quantity.toDouble() * itemPrice;
    ui->cartDisplay->setText(ui->cartDisplay->text() + "\n" + quantity + "X " + itemName + " - " + QString::number(itemTotal));
    cartTotal += itemTotal;

    totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
    ui->totalBoxDisplay->setText("$" + totalString);


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

    if(db.connectDB())
        {
            //Write query to database
            QSqlQuery qry;
            qry.prepare("INSERT INTO INVENTORY VAlUES (:itemid, :itemname, :price, :instock, :quantity, :category)");
            //binding variable with values column
            qry.bindValue(":itemid", itemID.toInt());
            qry.bindValue(":itemname", itemName);
            qry.bindValue(":price", price.toDouble()*100);
            if(quantity.toInt() > 0)
                qry.bindValue(":instock", true);
            else
                qry.bindValue(":instock", false);
            qry.bindValue(":quantity", quantity.toInt());
            qry.bindValue(":category", category);

            if(!qry.exec())
            {
                QMessageBox::information(this, "Error", "Item Not Added");

            }
            else
            {
                QMessageBox::information(this, "Add Item", "Item added to Inventory");

            }
        }
        else
        {
            QMessageBox::information(this, "Not Connected", "Database is not Connected");
        }

        db.closeDB();
}



void HomepageWindow::on_removeItemButton_clicked()
{
    QString itemID = ui->inventoryIDLineEdit->text();

    if(db.connectDB())
    {
       QSqlQuery qry;
       qry.prepare("DELETE FROM INVENTORY WHERE itemid = :itemid");
       //binding variable with values column
       qry.bindValue(":itemid", itemID);
       if(!qry.exec()){
           QMessageBox::warning(this, "Failed", "Delete Failed to Execute ");
       }
       else
       {
           QMessageBox::information(this, "Deleted", "Item removed from Inventory");
       }

    }
    else
    {
       QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();
}




void HomepageWindow::on_updateInventoryButton_clicked()
{
    QString itemID = ui->inventoryIDLineEdit->text();
    QString itemName = ui->inventoryNameLineEdit->text();
    QString price = ui->inventoryPriceLineEdit->text();
    QString category = ui->inventoryCategoryLineEdit->text();
    QString quantity = ui->inventoryQuantityLineEdit->text();

    if(db.connectDB())
    {
        QSqlQuery qry;
        qry.prepare("UPDATE INVENTORY SET itemname = :itemname, price = :price, instock = :instock, quantity = :quantity, category = :category WHERE itemid = :itemid");
        //binding variable with values column
        qry.bindValue(":itemid", itemID.toInt());
        qry.bindValue(":itemname", itemName);
        qry.bindValue(":price", price.toDouble()*100);
        qry.bindValue(":quantity", quantity.toInt());
        qry.bindValue(":category", category);
        if(quantity.toInt() > 0) qry.bindValue(":instock", true);
        else qry.bindValue(":instock", false);
        if(!qry.exec()){
            QMessageBox::warning(this, "Failed", "Update Failed to Execute ");
        }
        else
        {
            QMessageBox::information(this, "Update", "Inventory updated");
        }

    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();
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


#include "homepagewindow.h"
#include "mainwindow.h"
#include "ui_homepagewindow.h"
#include "QMessageBox"
#include <QStyleFactory>
#include <QString>
#include <items.h>
#include <QVector>
#include <mysql.h>


QString cartString;
QString totalString;
double cartTotal = 0.0;
mysql db;
QVector<Items> cart;
QVector<int> quantityLeft;
Items *addToCart;
using namespace std;


HomepageWindow::HomepageWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomepageWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);

    // Update the inventory list for the make sale page
    QString itemid;
    QString itemname;
    double itemprice;
    ui->itemMenuLabel->setText("<html><head/><body><p><span style=\" color:#00ffff;\">Item Menu:</p><p></p></body></html> ");
    if(db.connectDB())
    {
        QSqlQuery qry;
        //Read from database
        qry.prepare(QString("SELECT * FROM INVENTORY"));
        if(!qry.exec())
        {
            QMessageBox::warning(this, "Failed", "Query Failed to Execute ");
        }
        else
        {
            while(qry.next())
            {
                itemid = qry.value(0).toString();
                itemname = qry.value(1).toString();
                itemprice = qry.value(2).toDouble()/100;
                ui->itemMenuLabel->setText(ui->itemMenuLabel->text() + "<br><span style=\" color:#00ffff;\">" + itemid + ". ");
                ui->itemMenuLabel->setText(ui->itemMenuLabel->text() + itemname + " ($" + QString::number(itemprice) + ")" );

            }
        }
    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();


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

//This is display the home screen widget when pressed.
void HomepageWindow::on_homeButton_clicked()
{
    // Update the inventory list for the make sale page
    QString itemid;
    QString itemname;
    double itemprice;
    ui->itemMenuLabel->setText("<html><head/><body><p><span style=\" color:#00ffff;\">Item Menu:</p><p></p></body></html> ");
    if(db.connectDB())
    {
        QSqlQuery qry;
        //Read from database
        qry.prepare(QString("SELECT * FROM INVENTORY"));
        if(!qry.exec())
        {
            QMessageBox::warning(this, "Failed", "Query Failed to Execute ");
        }
        else
        {
            while(qry.next())
            {
                itemid = qry.value(0).toString();
                itemname = qry.value(1).toString();
                itemprice = qry.value(2).toDouble()/100;
                ui->itemMenuLabel->setText(ui->itemMenuLabel->text() + "<br><span style=\" color:#00ffff;\">" + itemid + ". ");
                //ui->itemMenuLabel->setText(ui->itemMenuLabel->text()  + itemid + ". ");
                ui->itemMenuLabel->setText(ui->itemMenuLabel->text() + itemname + " ($" + QString::number(itemprice) + ")" );

            }
        }
    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();
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
    cart.clear();
}


void HomepageWindow::on_viewAuditButton_clicked()
{
    ui->viewAuditScreen->setText("Most Recent Sales\n");
    int increment = 0;
    if(db.connectDB())
    {
        QSqlQuery qry;
        //Read from database
        qry.prepare(QString("SELECT * FROM SALES ORDER BY salesid DESC"));
        if(!qry.exec())
        {
            QMessageBox::warning(this, "Failed", "Query Failed to Execute ");
        }
        else
        {
            while(qry.next() && increment < 10)
            {
                ui->viewAuditScreen->setText(ui->viewAuditScreen->text() + qry.value(0).toString() + ". "+ "$");
                ui->viewAuditScreen->setText(ui->viewAuditScreen->text() + QString::number(qry.value(1).toDouble()/100) + " - " );
                ui->viewAuditScreen->setText(ui->viewAuditScreen->text() + qry.value(2).toString() + " items sold by " + qry.value(23).toString() + "\n" );
                increment++;

            }
        }
    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();


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

    //ui->stackedWidget->setCurrentIndex(0);
}

void HomepageWindow::on_editModeButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}


void HomepageWindow::on_addToCartButton_clicked()
{
    QString itemID = ui->makeSaleItemIDLineEdit->text();
    QString quantity = ui->makeSaleQuantityLineEdit->text();
    addToCart = new Items;
    int stock = 0;
    addToCart->setQuantity(quantity.toInt());
    if(quantity.toInt() >= 0)
    {
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
                    addToCart->setStock(qry.value(3).toBool());
                    stock = qry.value(4).toInt();
                    if(qry.value(3).toBool() && qry.value(4).toInt() >= quantity.toInt())
                    {
                        //creating item to add to cart
                        addToCart->setID(qry.value(0).toInt());
                        addToCart->setName(qry.value(1).toString());
                        addToCart->setPrice(qry.value(2).toDouble() / 100);
                        addToCart->setCategory(qry.value(5).toString());

                        //add item to cart
                        cart.push_back(*addToCart);

                        //printing item information to cart display
                        double itemTotal = quantity.toDouble() * addToCart->getPrice();
                        ui->cartDisplay->setText(ui->cartDisplay->text() + "\n" + quantity + "x " + addToCart->getName() + " - $" + QString::number(itemTotal));
                        cartTotal += itemTotal;

                        totalString = QString::number(cartTotal); // this converts the cartTotal variable into a string to be displayed
                        ui->totalBoxDisplay->setText("$" + totalString);
                    }
                    if(!(addToCart->getStock()))
                    {
                        QMessageBox::information(this, "Cannot add to cart", "Item not in stock");
                        break;
                    }
                    if(quantity.toInt() > stock)
                    {
                        QMessageBox::information(this, "Cannot add to cart", "Insufficient quantity in stock");
                    }
                }
            }
        }
        else
        {
            QMessageBox::information(this, "Not Connected", "Database is not Connected");
        }

    }
    db.closeDB();
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
    ui->helpScreen->setText("1. Enter item ID in item ID box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "2. Enter item name into name box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "3. Enter price into price box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "4. Enter category into category box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "5. Enter quantity into quantity box\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "6. Select Add Item / Remove Item / Update Item\n");
    ui->helpScreen->setText(ui->helpScreen->text() + "7. Alternatively, select Table View (No info required)\n");




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
        qry.prepare("UPDATE INVENTORY SET itemname = :itemname, price = :price, instock = :instock, "
                    "quantity = :quantity, category = :category WHERE itemid = :itemid");
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


void HomepageWindow::on_inventoryListViewButton_clicked()
{
    ui->viewInventoryScreen->clear();
    ui->stackedWidget->setCurrentIndex(6);
    // Update the inventory list for the make sale page
    QString itemid;
    QString itemname;
    double itemprice;
    QString itemquantity;

    if(db.connectDB())
    {
        QSqlQuery qry;
        //Read from database
        qry.prepare(QString("SELECT * FROM INVENTORY"));
        if(!qry.exec())
        {
            QMessageBox::warning(this, "Failed", "Query Failed to Execute ");
        }
        else
        {
            while(qry.next())
            {
                itemid = qry.value(0).toString();
                itemname = qry.value(1).toString();
                itemprice = qry.value(2).toDouble()/100;
                itemquantity = qry.value(4).toString();
                ui->viewInventoryScreen->setText(ui->viewInventoryScreen->text() + itemid + ". ");

                ui->viewInventoryScreen->setText(ui->viewInventoryScreen->text() + itemname + " ($" + QString::number(itemprice) + ")" );
                ui->viewInventoryScreen->setText(ui->viewInventoryScreen->text() + " -- Quantity Remaining: " + itemquantity + "\n");

            }
        }
    }
    else
    {
        QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();
}


void HomepageWindow::on_returnFromInventoryButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void HomepageWindow::on_submitSaleButton_clicked()
{
    int totalSale = 0;
    int itemssold = 0;
    if(db.connectDB())
    {
        QSqlQuery qry;
        for(int i = 0; i < cart.size(); i++)
        {
            totalSale += (cart[i].getPrice()*100 * cart[i].getQuantity());
            itemssold += cart[i].getQuantity();
            qry.prepare("SELECT * FROM INVENTORY WHERE itemid = :itemid");
            qry.bindValue(":itemid", cart[i].getID());
            if(!qry.exec()){
                QMessageBox::warning(this, "Error", "Query failed");
            }
            else
            {
                while(qry.next())
                {
                    quantityLeft.push_back(qry.value(4).toInt() - cart[i].getQuantity());

                }

            }

        }
        for(int i = 0; i < cart.size(); i++)
        {

            qry.prepare("UPDATE INVENTORY SET quantity = :quantity WHERE itemid = :itemid");
            qry.bindValue(":itemid", cart[i].getID());
            qry.bindValue(":quantity", quantityLeft[i]);
            if(!qry.exec()){
                QMessageBox::warning(this, "Error", "Update failed");
            }
            else
            {
                // QMessageBox::information(this, "Success", QString::number(quantityLeft[i]) + " " + cart[i].getName() + " remaining");

            }
        }
        qry.prepare("INSERT INTO SALES (totalprice, itemssold, itemid1, itemq1, itemid2, itemq2, itemid3, itemq3,"
                    " itemid4, itemq4, itemid5, itemq5, itemid6, itemq6, itemid7, itemq7, itemid8, itemq8,"
                    " itemid9, itemq9, itemid10, itemq10, salesperson)"
                    "VALUES(:totalprice, :itemssold, :itemid1, :itemq1, :itemid2, :itemq2, :itemid3, :itemq3,"
                    " :itemid4, :itemq4, :itemid5, :itemq5, :itemid6, :itemq6, :itemid7, :itemq7, :itemid8, :itemq8,"
                    " :itemid9, :itemq9, :itemid10, :itemq10, :salesperson)");
        qry.bindValue(":totalprice", totalSale);
        qry.bindValue(":itemssold", itemssold);
        for(int i = 1; i <= cart.size(); i++)
        {
            QString itemno = ":itemid";
            QString itemq = ":itemq";
            qry.bindValue(itemno.append(QString::number(i)), cart[i-1].getID());
            qry.bindValue(itemq.append(QString::number(i)), cart[i-1].getQuantity());

        }
        qry.bindValue(":salesperson", "admin");
        if(!qry.exec()){
            QMessageBox::warning(this, "Error", "Sale not recorded");
        }



    }
    else
    {
       QMessageBox::information(this, "Not Connected", "Database is not Connected");
    }
    db.closeDB();
    cartString = "";
    cartTotal = 0.0;

    totalString = QString::number(cartTotal);
    ui->cartDisplay->setText(cartString);
    ui->totalBoxDisplay->setText("$" + totalString);
    cart.clear();
    quantityLeft.clear();
}



//Function to close the application
void HomepageWindow::on_ExitButton_clicked()
{
    close();
}


void HomepageWindow::on_logoutButton_clicked()
{
    QMessageBox::information(this, "Logging Out", "Working on the feature");
}


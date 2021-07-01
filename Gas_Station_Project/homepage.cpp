#include "homepage.h"
#include "ui_homepage.h"
#include "makesale.h"
#include <QMessageBox>


Homepage::Homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Homepage)
{
    ui->setupUi(this);
}

Homepage::~Homepage()
{
    delete ui;
}



// When the "make sale" button is clicked from home page
void Homepage::on_makeSaleButton_clicked()
{
    //hide();    -- remove this to hide the window when opening new one
    makeSale = new MakeSale(this);
    makeSale->show();
}


// When the "view inventory" button is clicked from home page
void Homepage::on_viewInventoryButton_clicked()
{
    //hide();    -- remove this to hide the window when opening new one
    viewInventory = new ViewInventory(this);
    viewInventory->show();
}

// When the "daily audit" button is clicked from home page
void Homepage::on_dailyAuditButton_clicked()
{
    //hide();    -- remove this to hide the window when opening new one
    dailyAudit = new DailyAudit(this);
    dailyAudit->show();
}


// When the "logout" button is clicked from home page
void Homepage::on_logOutButton_clicked()
{
    QMessageBox::information(this, "Message", " Work in Progress!!");
}


#include "viewinventory.h"
#include "ui_viewinventory.h"
#include <QMessageBox>

ViewInventory::ViewInventory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewInventory)
{
    ui->setupUi(this);
}

ViewInventory::~ViewInventory()
{
    delete ui;
}


// When the "view inventory" button is clicked from the view inventory page
void ViewInventory::on_inventoryButton_clicked()
{
    QMessageBox::information(this, "Message", " Work in progress!!");
}


// When the "return to home" button is clicked from the view inventory page
void ViewInventory::on_returnButton_clicked()
{
    hide();
}


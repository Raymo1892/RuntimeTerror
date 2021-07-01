#include "makesale.h"
#include "ui_makesale.h"
#include "homepage.h"
#include <QMessageBox>


MakeSale::MakeSale(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MakeSale)
{
    ui->setupUi(this);
}

MakeSale::~MakeSale()
{
    delete ui;
}


// When the "return to home" button is clicked from make sale page
void MakeSale::on_returnButton_clicked()
{
    hide();
}


void MakeSale::on_logSaleButton_clicked()
{
    QMessageBox::information(this, "Message", " Work in progress!!");
}


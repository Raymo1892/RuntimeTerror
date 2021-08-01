#include "recoverpassword.h"
#include "ui_recoverpassword.h"

recoverPassword::recoverPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recoverPassword)
{
    ui->setupUi(this);
}

recoverPassword::~recoverPassword()
{
    delete ui;
}

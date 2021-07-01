#include "dailyaudit.h"
#include "ui_dailyaudit.h"
#include <QMessageBox>

DailyAudit::DailyAudit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DailyAudit)
{
    ui->setupUi(this);
}

DailyAudit::~DailyAudit()
{
    delete ui;
}


// When the "view audit" button is clicked from daily audit page
void DailyAudit::on_viewAuditButton_clicked()
{
    QMessageBox::information(this, "Message", " Work in progress!!");
}


// When the "return to home" button is clicked from daily audit page
void DailyAudit::on_returnButton_clicked()
{
    hide();
}


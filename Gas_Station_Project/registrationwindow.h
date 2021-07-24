#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QDialog>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QPluginLoader>
#include <QVariant>

#include <mysql.h>

namespace Ui {
class RegistrationWindow;
}

class RegistrationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationWindow(QWidget *parent = nullptr);
    ~RegistrationWindow();

private slots:
    void on_cancelButton_clicked();

    void on_registerPushButton_clicked();

private:
    Ui::RegistrationWindow *ui;
};

#endif // REGISTRATIONWINDOW_H

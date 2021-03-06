#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <registrationwindow.h>
#include "homepagewindow.h"
#include <accountsstorage.h>
#include <recoverpassword.h>
#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QPluginLoader>
#include <QVariant>

#include <mysql.h>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:


    void on_forgotPasswordButton_clicked();

    void on_newUserButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::MainWindow *ui;
    recoverPassword *rp;
    RegistrationWindow *regisWindow;
    HomepageWindow *hWindow;



    QString returnUsername;

};



#endif // MAINWINDOW_H

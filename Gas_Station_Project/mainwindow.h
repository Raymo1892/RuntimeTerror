#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <registrationwindow.h>
#include "homepagewindow.h"
#include <accountsstorage.h>
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
    RegistrationWindow *regisWindow;
    HomepageWindow *hWindow;
    QString user;
};

//load stored accounts
extern accountsStorage accounts;

#endif // MAINWINDOW_H

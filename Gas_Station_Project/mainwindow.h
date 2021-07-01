#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <registrationwindow.h>
#include <homepage.h>

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
    Homepage *homepage;
};
#endif // MAINWINDOW_H

#ifndef HOMEPAGEWINDOW_H
#define HOMEPAGEWINDOW_H

#include <QMainWindow>

namespace Ui {
class HomepageWindow;
}

class HomepageWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomepageWindow(QWidget *parent = nullptr);
    ~HomepageWindow();

private slots:





    void on_homeButton_clicked();

    void on_accountButton_clicked();

    void on_logOutButton_clicked();

    void on_inventoryButton_clicked();

    void on_auditButton_clicked();

    void on_settingButton_clicked();

    void on_returnButton_3_clicked();

    void on_returnButton_clicked();

    void on_pushButton_3_clicked();

    void on_helpButton_clicked();

private:
    Ui::HomepageWindow *ui;

};

#endif // HOMEPAGEWINDOW_H

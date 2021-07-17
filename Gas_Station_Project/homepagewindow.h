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

    void on_returnFromInventoryButton_clicked();

    void on_returnFromAuditButton_clicked();

    void on_pushButton_3_clicked();

    void on_helpButton_clicked();

    void on_unleadedButton_clicked();

    void on_premiumButton_clicked();

    void on_dieselButton_clicked();

    void on_grillItemButton_clicked();

    void on_candyButton_clicked();

    void on_chipsButton_clicked();

    void on_coffeeButton_clicked();

    void on_fountainDrinkButton_clicked();

    void on_bottledBevButton_clicked();

    void on_viewAuditButton_clicked();

    void on_pushButton_ChangeEmployeePassword_clicked();

    void on_clearCartButton_clicked();

    void on_ChangePasswordButton_clicked();

    void on_addUserButton_clicked();

    void on_removeUserButton_clicked();

    void on_returnAccountsButton_clicked();

    void on_returnAccountsButton1_clicked();

    void on_returnAccountsButton2_clicked();

private:
    Ui::HomepageWindow *ui;

};

#endif // HOMEPAGEWINDOW_H

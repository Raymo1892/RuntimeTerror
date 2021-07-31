#ifndef HOMEPAGEWINDOW_H
#define HOMEPAGEWINDOW_H

#include <QMainWindow>
#include "accountsstorage.h"
#include "accounts.h"

using namespace std;

//load stored accounts
extern accountsStorage accounts;

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

    void on_viewAuditButton_clicked();

    void on_pushButton_ChangeEmployeePassword_clicked();

    void on_clearCartButton_clicked();

    void on_ChangePasswordButton_clicked();

    void on_addUserButton_clicked();

    void on_removeUserButton_clicked();

    void on_returnAccountsButton_clicked();

    void on_returnAccountsButton1_clicked();

    void on_returnAccountsButton2_clicked();

    void on_saveUserButton_clicked();

    void on_deleteUserButton_clicked();

    void changeCurrentIndex(int index);

    void on_Tableview_clicked();

    void on_addToCartButton_clicked();

    void on_makeSaleHelpButton_clicked();

    void on_changePasswordHelpButton_clicked();

    void on_addUserHelpButton_clicked();

    void on_removeUserHelpButton_clicked();

    void on_inventoryHelpButton_clicked();

    void on_auditHelpButton_clicked();

    void on_Tableview_2_clicked();

    void on_AddItem_clicked();

    void on_addItemButtonInventory_clicked();

    void on_removeItemButton_clicked();

    void on_updateInventoryButton_clicked();

    void on_clearFieldsButtonInventory_clicked();

    void on_tableViewButton_clicked();

    void on_returnFromInventoryButton_2_clicked();

private:
    Ui::HomepageWindow *ui;

};

#endif // HOMEPAGEWINDOW_H

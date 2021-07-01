#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>
#include "makesale.h"
#include "viewinventory.h"
#include "dailyaudit.h"

namespace Ui {
class Homepage;
}

class Homepage : public QDialog
{
    Q_OBJECT

public:
    explicit Homepage(QWidget *parent = nullptr);
    ~Homepage();

private slots:


    void on_makeSaleButton_clicked();

    void on_viewInventoryButton_clicked();

    void on_dailyAuditButton_clicked();

    void on_logOutButton_clicked();

private:
    Ui::Homepage *ui;
    MakeSale *makeSale;
    ViewInventory *viewInventory;
    DailyAudit *dailyAudit;
};

#endif // HOMEPAGE_H

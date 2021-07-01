#ifndef VIEWINVENTORY_H
#define VIEWINVENTORY_H

#include <QDialog>

namespace Ui {
class ViewInventory;
}

class ViewInventory : public QDialog
{
    Q_OBJECT

public:
    explicit ViewInventory(QWidget *parent = nullptr);
    ~ViewInventory();

private slots:
    void on_inventoryButton_clicked();

    void on_returnButton_clicked();

private:
    Ui::ViewInventory *ui;
};

#endif // VIEWINVENTORY_H

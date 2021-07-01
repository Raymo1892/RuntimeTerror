#ifndef MAKESALE_H
#define MAKESALE_H

#include <QDialog>


namespace Ui {
class MakeSale;
}

class MakeSale : public QDialog
{
    Q_OBJECT

public:
    explicit MakeSale(QWidget *parent = nullptr);
    ~MakeSale();

private slots:
    void on_returnButton_clicked();

    void on_logSaleButton_clicked();

private:
    Ui::MakeSale *ui;

};

#endif // MAKESALE_H

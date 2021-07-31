#ifndef ITEMS_H
#define ITEMS_H
#include <QVector>
#include <QString>


class Items
{
public:
    Items();
    Items(int tempID, QString tempName, double tempPrice, bool tempStock, QString tempCategory, int tempQuantity);
    void setID(int tempID);
    int getID();
    void setName(QString tempName);
    QString getName();
    void setPrice(double tempPrice);
    double getPrice();
    void setStock(bool tempStock);
    bool getStock();
    void setCategory(QString tempCategory);
    QString getCategory();
    void setQuantity(int tempQuantity);
    int getQuantity();

public:
    int id;
    QString name;
    double price;
    bool stock;
    QString category;
    int quantity;
};

#endif // ITEMS_H

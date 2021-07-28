#include "items.h"

Items::Items()
{
    int id = 0;
    QString name = " ";
    double price = 0;
    bool stock = 0;
    QString category = " ";
}
Items::Items(int tempID, QString tempName, double tempPrice, bool tempStock, QString tempCategory)
{
    id = tempID;
    name = tempName;
    price = tempPrice;
    stock = tempStock;
    category = tempCategory;
}
void Items::setID(int tempID)
{
    id = tempID;
}
int Items::getID()
{
    return id;
}
void Items::setName(QString tempName)
{
    name = tempName;
}
QString Items::getName()
{
    return name;
}
void Items::setPrice(double tempPrice)
{
    price = tempPrice;
}
double Items::getPrice()
{
    return price;
}
void Items::setStock(bool tempStock)
{
    stock = tempStock;
}
bool Items::getStock()
{
    return stock;
}
void Items::setCategory(QString tempCategory)
{
    category = tempCategory;
}
QString Items::getCategory()
{
    return category;
}

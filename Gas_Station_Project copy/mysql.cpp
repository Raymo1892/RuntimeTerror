#include "mysql.h"

mysql::mysql()
{

}

bool mysql::connectDB()
{
    QString hostname = "awsdatabase.cxyigmfet2a5.us-east-2.rds.amazonaws.com";
    QString username = "admin";
    QString password = "adminuser";
    QString aws = "Account";

    //Opening Database here
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostname);
    db.setUserName(username);
    db.setPassword(password);
   //db.setPort(3306);
    db.setDatabaseName(aws);

    //Chcek if connection is open
    if(db.open())
    {
        return true;
    }
    else
        return false;
}
void mysql::closeDB()
{
    db.close();
}

void mysql::runQuery()
{


}
QSqlDatabase mysql::getDB()
{
    return db;
}

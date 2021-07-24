#include "mysql.h"

mysql::mysql()
{

}

bool mysql::connectDB()
{
    //Opening Database here
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("user");

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

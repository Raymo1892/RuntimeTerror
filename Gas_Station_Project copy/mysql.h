#ifndef MYSQL_H
#define MYSQL_H
#include <QMessageBox>
#include <QPixmap>

#include <QSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QPluginLoader>
#include <QVariant>


class mysql
{

private:
    QSqlDatabase db;

public:
    mysql();

    bool connectDB();
    QSqlDatabase getDB();
    void runQuery();
    void closeDB();
};

#endif // MYSQL_H

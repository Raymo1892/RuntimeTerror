#include "mainwindow.h"
#include "homepagewindow.h"
#include "accounts.h"
#include "accountsstorage.h"
#include <QStyleFactory>
#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    static QString user;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

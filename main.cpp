#include "mainwindow.h"
#include <QApplication>
#include <src/Login/login.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    // Login w;
    w.show();
    return a.exec();
}

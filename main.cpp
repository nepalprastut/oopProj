#include <QApplication>
#include "mainwindow.h"
#include <src/Login/login.h>
#include <src/Register/register.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.showMaximized();
    // w.show();
    return a.exec();
}

#include <QApplication>
#include "mainwindow.h"
#include <src/Login/login.h>
#include <register.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // w.showMaximized();
    w.show();
    return a.exec();
}

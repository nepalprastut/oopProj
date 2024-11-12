#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "src/Login/login.h"
#include "register.h"
#include <QMainWindow>
#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow//,public QDialog
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




private slots:
    void on_login_clicked();
    void on_signup_clicked();

  //  void on_pushButton_close_clicked();

private:
    Ui::MainWindow *ui;
    Login *login;
    Register *register1;
};
#endif // MAINWINDOW_H

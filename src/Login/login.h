#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<QMessageBox>
#include<QDialog>


QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE


class Login : public QMainWindow {
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
  //  void on_pushButton_login_clicked();
    void on_pushButton_close_clicked();

private:
    Ui::Login *ui;
};




#endif

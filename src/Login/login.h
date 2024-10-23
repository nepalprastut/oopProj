#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "ui_login.h"
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

private:
    Ui::Login *ui;
};

#endif

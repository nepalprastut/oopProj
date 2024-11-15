#ifndef REGISTER_H
#define REGISTER_H

#include <QMainWindow>
#include<QMessageBox>

namespace Ui {
class Register;
}

class Register : public QMainWindow
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_signup_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H

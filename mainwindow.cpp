#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QBoxLayout>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),ui(new Ui::MainWindow),login(new Login(this)),register1(new Register(this))
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
//     delete login;
//     delete register1;
//

}
void MainWindow::on_login_clicked()
{
    // hide();
    // login = new Login(this);
    // login->show();
   // setWindowModality();

   login->setWindowModality(Qt::ApplicationModal);  // Make it modal
   login->show();

}

void MainWindow::on_signup_clicked()
{
   // hide();
    // register1 = new Register(this);
    // register1->show();
    register1->setModal(true);
     register1->exec();


}




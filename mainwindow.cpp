#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QBoxLayout>
#include<QApplication>
#include<QScreen>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),ui(new Ui::MainWindow),login(new Login(this)),register1(new Register(this))
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    connect(ui->pushButton_close, &QPushButton::clicked, this, &MainWindow::close);

    setAttribute(Qt::WA_TranslucentBackground,true);
    // QScreen *screen = QGuiApplication::primaryScreen();
    // QRect screenGeometry = screen->geometry();
    // int screenWidth = screenGeometry.width();
    // int screenHeight = screenGeometry.height();
   // resize(screenWidth * 1, screenHeight * 1);

    // QScreen *screen = QGuiApplication::primaryScreen();
    // QRect screenGeometry = screen->geometry();

    // // Resize window to 80% of the screen size directly
    // resize(screenGeometry.width() * 1, screenGeometry.height() * 1);

    //  QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
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




// void MainWindow::on_pushButton_close_clicked()
// {
//     close();
// }


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QByteArray>
#include <QPixmap>
#include <src/Login/login.h>
#include <src/Register/register.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_check_clicked();
    void readData();
    void finishReading();
    void setUserImage();
    void sendRequest(int);
    void triggerNextRequest();

    void on_lg_clicked();

    void on_rg_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *netManager;
    QNetworkReply *netReply;
    QByteArray dataBuffer;
    QPixmap *img;
    Login *loginWindow;
    Register *registerWindow;
    Database *db;
};
#endif // MAINWINDOW_H

































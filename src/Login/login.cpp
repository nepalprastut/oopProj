#include "login.h"
#include "ui_login.h"

Login::Login(Database *dbObj, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login),
    db(dbObj)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}




void Login::on_loginBtn_clicked()
{
    QString username = ui->username->text();
    QString password = ui->passwd->text();

    if(username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM Users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {    // checking errors related to the database
        if (query.next()) {      // depending upon what this method returns, a message is displayed
            QMessageBox::information(this, "Login Successful", "Welcome, " + username + "!");
            close();  // close the login window after successful login
            // Optionally, transition to the main application or perform other actions
        } else {
            QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
        }
    } else {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
    }
}


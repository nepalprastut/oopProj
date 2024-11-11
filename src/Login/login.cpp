#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Login) {
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground,true);
    QList<QLineEdit *> mandatoryFields = {
        ui->lineEdit_password,    // Access by their object name from Qt Designer
        ui->lineEdit_username
    };
    connect(ui->pushButton_login, &QPushButton::clicked, this, [mandatoryFields, this]() {
        bool allFilled = true;

        // Iterate through mandatory fields and validate them
        for (QLineEdit *field : mandatoryFields) {
            if (field->text().trimmed().isEmpty()) {  // Check if field is empty
                //field->setStyleSheet("QLineEdit { border: 2px solid red; }");
                allFilled = false;
            } else {
                field->setStyleSheet("QLineEdit  {border-bottom:2px solid rgba(105,118,132,255);}");

                field->setStyleSheet("QLineEdit {border:none;}");

                // field->setStyleSheet("QLineEdit  {color:rgba(255,255,255,230);}");
                field->setStyleSheet("QLineEdit  {padding-bottom:7px;}");
                field->setStyleSheet("QLineEdit  {font-size:13px;}");
                field->setStyleSheet("QLineEdit  {color:black;}");
                field->update();
                    // Reset border to default

            }
        }

        if (!allFilled) {
            QMessageBox::warning(this, "Validation Error",
                                 "Incomplete submission");
            return;
        }
       // else{this->close();
       //     ui->close();
       // }
        QString UserName = ui->lineEdit_username->text();
        QString Password = ui->lineEdit_password->text();

        //check the username and password through the database
        //test
        if(UserName == "prasaman"&& Password=="123")
        {
            QMessageBox::information(this,"Prasaman","login successful");
            close();
           // ui->close();


        }
        else
        {
            QMessageBox::warning(this,"Movie Recommendation System","enter valid username or password");
        }

    });
}

Login::~Login() {
    delete ui;
}



// void Login::on_pushButton_login_clicked()
// {
//     QString UserName = ui->lineEdit_username->text();
//     QString Password = ui->lineEdit_password->text();

//     //check the username and password through the database
//     //test
//     if(UserName == "prasaman"&& Password=="123")
//     {
//         QMessageBox::information(this,"Prasaman","login successful");

//     }
//     else
//     {
//         QMessageBox::warning(this,"Movie Recommendation System","enter valid username or password");
//     }
// }


void Login::on_pushButton_close_clicked()
{
    close();
}


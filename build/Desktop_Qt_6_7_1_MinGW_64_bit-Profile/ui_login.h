/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_3;
    QPushButton *pushButton_close;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(800, 600);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(210, 320, 241, 41));
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:grey;\n"
"font-size:15px;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:#4CAF50;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed{\n"
"margin-left:1%px;\n"
"\n"
"}\n"
""));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(210, 180, 241, 40));
        lineEdit_username->setMinimumSize(QSize(200, 40));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_username->setReadOnly(false);
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(210, 240, 241, 40));
        lineEdit_password->setMinimumSize(QSize(200, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 100, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;"));
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(440, 60, 41, 41));
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton:Hover\n"
"{\n"
"text-align:centre;\n"
"border:2px solid black;\n"
"background-color:rgb(241,92,34);\n"
"}\n"
"QPushButton:Pressed\n"
"{\n"
"margin-left:1px;\n"
"}\n"
"QPushButton{\n"
"background-color:transparent;\n"
"border-radius:15px;\n"
"font-size:20px;\n"
"}"));
        Login->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "MainWindow", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "L o g  I n", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Login", "User Name", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Login", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "LOG IN", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Login", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

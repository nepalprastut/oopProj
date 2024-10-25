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
    QWidget *widget;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_close;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(800, 600);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 10, 341, 381));
        widget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 20, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;"));
        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(50, 90, 241, 40));
        lineEdit_username->setMinimumSize(QSize(200, 40));
        QFont font;
        font.setUnderline(false);
        lineEdit_username->setFont(font);
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_username->setReadOnly(false);
        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(50, 170, 241, 40));
        lineEdit_password->setMinimumSize(QSize(200, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(50, 260, 241, 41));
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
        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(300, 0, 41, 41));
        QFont font1;
        font1.setBold(true);
        pushButton_close->setFont(font1);
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
"background-color:white;\n"
"border:0px;\n"
"font-size:20px;\n"
"color:black;\n"
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
        label_3->setText(QCoreApplication::translate("Login", "LOG IN", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Login", "User Name", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Login", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "L o g  I n", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Login", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

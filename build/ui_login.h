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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(1280, 769);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/login.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-color:grey;"));

        horizontalLayout->addWidget(widget_3);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 244, 248);"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border: 2px solid rgba(255, 255, 255, .2);\n"
"\n"
"box_shadow: 0 0 10px rgba(0, 0, 0, .2);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;"));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");
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

        verticalLayout->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMinimumSize(QSize(200, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEdit_password);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_4);

        pushButton_login = new QPushButton(widget);
        pushButton_login->setObjectName("pushButton_login");
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

        verticalLayout->addWidget(pushButton_login);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_3);


        gridLayout->addWidget(widget, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout->addWidget(widget_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        Login->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Movie Recommendation System", nullptr));
        lineEdit->setText(QCoreApplication::translate("Login", "L O G  I N", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Login", "User Name", nullptr));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("Login", "Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "L o g  I n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

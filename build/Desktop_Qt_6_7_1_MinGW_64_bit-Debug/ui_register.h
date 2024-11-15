/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include<QtWidgets/QMainWindow>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QStatusBar *statusbar;
    QWidget *widget;
    QPushButton *pushButton_signup;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_crpassword;
    QLineEdit *lineEdit_crusername;
    QPushButton *pushButton_close;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(1280, 769);
        Register->setMinimumSize(QSize(0, 0));
        widget = new QWidget(Register);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1082, 769));
        widget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;\n"
""));
        pushButton_signup = new QPushButton(widget);
        pushButton_signup->setObjectName("pushButton_signup");
        pushButton_signup->setGeometry(QRect(80, 250, 131, 31));
        pushButton_signup->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 10, 211, 41));
        QFont font;
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("font-size:17px;\n"
"color:black;\n"
""));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit->setReadOnly(true);
        lineEdit_crpassword = new QLineEdit(widget);
        lineEdit_crpassword->setObjectName("lineEdit_crpassword");
        lineEdit_crpassword->setGeometry(QRect(40, 190, 231, 40));
        lineEdit_crpassword->setMinimumSize(QSize(200, 40));
        lineEdit_crpassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_crpassword->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_crpassword->setReadOnly(false);
        lineEdit_crusername = new QLineEdit(widget);
        lineEdit_crusername->setObjectName("lineEdit_crusername");
        lineEdit_crusername->setGeometry(QRect(40, 100, 231, 40));
        lineEdit_crusername->setMinimumSize(QSize(200, 40));
        lineEdit_crusername->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_crusername->setReadOnly(false);
        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(230, 0, 41, 41));
        pushButton_close->setFont(font);
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
"\n"
"font-size:20px;\n"
"color:black;\n"
"}"));
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(40, 70, 221, 31));
        QFont font1;
        font1.setBold(false);
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:15px;"));
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(40, 160, 221, 31));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:15px;"));
        lineEdit_3->setReadOnly(true);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "MainWindow", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("Register", "S i g n  U p", nullptr));
        lineEdit->setText(QCoreApplication::translate("Register", "S I G N   I N", nullptr));
        lineEdit_crpassword->setText(QString());
        lineEdit_crpassword->setPlaceholderText(QCoreApplication::translate("Register", "Password", nullptr));
        lineEdit_crusername->setText(QString());
        lineEdit_crusername->setPlaceholderText(QCoreApplication::translate("Register", "Username", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Register", "X", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Register", "Create your username", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Register", "Create your password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H

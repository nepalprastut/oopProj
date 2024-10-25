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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QLineEdit *lineEdit_firstname;
    QPushButton *pushButton_signup;
    QPushButton *pushButton_regclose;
    QLineEdit *lineEdit_middlename;
    QLineEdit *lineEdit_lastname;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_crpassword;
    QLineEdit *lineEdit_crusername;
    QLineEdit *lineEdit_conpassword;
    QWidget *widget_2;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QRadioButton *radioButton_other;
    QPushButton *pushButton_close;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(521, 573);
        widget = new QWidget(Register);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 10, 301, 541));
        widget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;\n"
""));
        lineEdit_firstname = new QLineEdit(widget);
        lineEdit_firstname->setObjectName("lineEdit_firstname");
        lineEdit_firstname->setGeometry(QRect(30, 60, 231, 40));
        lineEdit_firstname->setMinimumSize(QSize(200, 40));
        lineEdit_firstname->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_firstname->setReadOnly(false);
        pushButton_signup = new QPushButton(widget);
        pushButton_signup->setObjectName("pushButton_signup");
        pushButton_signup->setGeometry(QRect(90, 500, 131, 31));
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
        pushButton_regclose = new QPushButton(widget);
        pushButton_regclose->setObjectName("pushButton_regclose");
        pushButton_regclose->setGeometry(QRect(380, 0, 41, 41));
        QFont font;
        font.setBold(true);
        pushButton_regclose->setFont(font);
        pushButton_regclose->setStyleSheet(QString::fromUtf8("QPushButton:Hover\n"
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
"color:black;\n"
"}"));
        lineEdit_middlename = new QLineEdit(widget);
        lineEdit_middlename->setObjectName("lineEdit_middlename");
        lineEdit_middlename->setGeometry(QRect(30, 110, 241, 40));
        lineEdit_middlename->setMinimumSize(QSize(200, 40));
        lineEdit_middlename->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_middlename->setReadOnly(false);
        lineEdit_lastname = new QLineEdit(widget);
        lineEdit_lastname->setObjectName("lineEdit_lastname");
        lineEdit_lastname->setGeometry(QRect(30, 160, 241, 40));
        lineEdit_lastname->setMinimumSize(QSize(200, 40));
        lineEdit_lastname->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_lastname->setReadOnly(false);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 20, 211, 31));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("font-size:11px;\n"
"color:black;\n"
""));
        lineEdit->setReadOnly(true);
        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(30, 210, 241, 40));
        lineEdit_email->setMinimumSize(QSize(200, 40));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"padding-bottom:7px;\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_email->setReadOnly(false);
        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 260, 231, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:11px;\n"
""));
        lineEdit_2->setReadOnly(true);
        lineEdit_crpassword = new QLineEdit(widget);
        lineEdit_crpassword->setObjectName("lineEdit_crpassword");
        lineEdit_crpassword->setGeometry(QRect(40, 390, 231, 40));
        lineEdit_crpassword->setMinimumSize(QSize(200, 40));
        lineEdit_crpassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_crpassword->setEchoMode(QLineEdit::Password);
        lineEdit_crpassword->setReadOnly(false);
        lineEdit_crusername = new QLineEdit(widget);
        lineEdit_crusername->setObjectName("lineEdit_crusername");
        lineEdit_crusername->setGeometry(QRect(40, 340, 231, 40));
        lineEdit_crusername->setMinimumSize(QSize(200, 40));
        lineEdit_crusername->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_crusername->setReadOnly(false);
        lineEdit_conpassword = new QLineEdit(widget);
        lineEdit_conpassword->setObjectName("lineEdit_conpassword");
        lineEdit_conpassword->setGeometry(QRect(40, 440, 231, 40));
        lineEdit_conpassword->setMinimumSize(QSize(200, 40));
        lineEdit_conpassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:13px;\n"
"color:black;"));
        lineEdit_conpassword->setEchoMode(QLineEdit::Password);
        lineEdit_conpassword->setReadOnly(false);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 290, 301, 31));
        radioButton_male = new QRadioButton(widget_2);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(30, 10, 69, 18));
        radioButton_male->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:13px;\n"
""));
        radioButton_female = new QRadioButton(widget_2);
        radioButton_female->setObjectName("radioButton_female");
        radioButton_female->setGeometry(QRect(120, 10, 69, 18));
        radioButton_female->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:13px;\n"
""));
        radioButton_other = new QRadioButton(widget_2);
        radioButton_other->setObjectName("radioButton_other");
        radioButton_other->setGeometry(QRect(210, 10, 69, 18));
        radioButton_other->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:13px;"));
        pushButton_close = new QPushButton(widget);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(260, 0, 41, 41));
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

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        lineEdit_firstname->setText(QString());
        lineEdit_firstname->setPlaceholderText(QCoreApplication::translate("Register", "First Name", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("Register", "S i g n  U p", nullptr));
        pushButton_regclose->setText(QCoreApplication::translate("Register", "X", nullptr));
        lineEdit_middlename->setText(QString());
        lineEdit_middlename->setPlaceholderText(QCoreApplication::translate("Register", "Middle Name(optional)", nullptr));
        lineEdit_lastname->setText(QString());
        lineEdit_lastname->setPlaceholderText(QCoreApplication::translate("Register", "Last Name", nullptr));
        lineEdit->setText(QCoreApplication::translate("Register", "Please enter the required information", nullptr));
        lineEdit_email->setText(QString());
        lineEdit_email->setPlaceholderText(QCoreApplication::translate("Register", "Email", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Register", "Select your gender", nullptr));
        lineEdit_crpassword->setText(QString());
        lineEdit_crpassword->setPlaceholderText(QCoreApplication::translate("Register", "create your password", nullptr));
        lineEdit_crusername->setText(QString());
        lineEdit_crusername->setPlaceholderText(QCoreApplication::translate("Register", "Create your username", nullptr));
        lineEdit_conpassword->setText(QString());
        lineEdit_conpassword->setPlaceholderText(QCoreApplication::translate("Register", "confirm password", nullptr));
        radioButton_male->setText(QCoreApplication::translate("Register", "Male", nullptr));
        radioButton_female->setText(QCoreApplication::translate("Register", "Female", nullptr));
        radioButton_other->setText(QCoreApplication::translate("Register", "Other", nullptr));
        pushButton_close->setText(QCoreApplication::translate("Register", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H

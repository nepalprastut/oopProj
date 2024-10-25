/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QPushButton *login;
    QPushButton *signup;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 1000);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Navbar Styling */\n"
"#navbar_2 {\n"
"    background-color: #2c3e50;  /* Dark background */\n"
"    padding: 10px;  /* Add some padding */\n"
"}\n"
"\n"
"QLabel#heading {\n"
"    color: #ecf0f1;  /* Light color for the title text */\n"
"    font-size: 24px;\n"
"    font-weight: bold;\n"
"    margin-left: 20px;  /* Padding to move title from left */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #3498db;  /* Light blue background for buttons */\n"
"    color: #fff;  /* White text */\n"
"    border: none;\n"
"    padding: 8px 15px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;  /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1f6393;  /* Even darker blue when pressed */\n"
"}\n"
"\n"
"QPushButton#signup {\n"
"    margin-left: 10px;  /* Space between Login and Register */\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(-120, -200, 1000, 1000));
        widget->setStyleSheet(QString::fromUtf8(""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(120, 210, 1920, 71));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: purple;"));
        login = new QPushButton(widget_2);
        login->setObjectName("login");
        login->setGeometry(QRect(620, 20, 80, 31));
        login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:blue;\n"
"font-size:11px;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:green;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"margin-left:1px;\n"
"}"));
        signup = new QPushButton(widget_2);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(720, 20, 80, 31));
        signup->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color:blue;\n"
"font-size:11px;\n"
"border-radius:15px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color:green;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"margin-left:1px;\n"
"}"));
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(320, 20, 161, 31));
        QFont font;
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:15;\n"
"font-size:13px;\n"
""));
        lineEdit_2 = new QLineEdit(widget_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(0, 0, 161, 71));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(true);
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:purple;\n"
"\n"
"font-size:30px;\n"
"font:italic;\n"
"border:0px;"));
        lineEdit_2->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
        signup->setText(QCoreApplication::translate("MainWindow", "sign up", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "PROJECT", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

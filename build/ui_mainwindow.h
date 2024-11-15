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
    QPushButton *signup;
    QPushButton *login;
    QWidget *widget_2;
    QWidget *widget_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1279, 769);
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
        widget->setGeometry(QRect(0, 0, 1281, 71));
        widget->setStyleSheet(QString::fromUtf8("background-color:purple;\n"
""));
        signup = new QPushButton(widget);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(1170, 20, 101, 31));
        signup->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-weight:bold;\n"
"border-radius:15px;\n"
"background-color:blue;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:green;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"margin-left:1px;\n"
"}"));
        login = new QPushButton(widget);
        login->setObjectName("login");
        login->setGeometry(QRect(1060, 20, 91, 31));
        login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-weight:bold;\n"
"border-radius:15px;\n"
"background-color:blue;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"background-color:green;\n"
"}\n"
"\n"
"QPushButton:Pressed\n"
"{\n"
"margin-left:1px;\n"
"}"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 0, 311, 71));
        widget_2->setStyleSheet(QString::fromUtf8("image: url(:/icons/film.png);"));
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 70, 1281, 681));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setStyleSheet(QString::fromUtf8("background-color:#FAF9F6;\n"
"\n"
"border-image: url(:/icons/bg.jpg);\n"
"background-repeat:no-repeat;\n"
"background-position:center;"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Movie Recommendation System", nullptr));
        signup->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

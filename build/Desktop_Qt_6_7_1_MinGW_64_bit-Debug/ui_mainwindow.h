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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *signup;
    QPushButton *login;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1132, 1000);
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
        widget->setGeometry(QRect(0, 0, 1132, 71));
        widget->setStyleSheet(QString::fromUtf8("background-color:purple;\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 211, 71));
        label->setStyleSheet(QString::fromUtf8("font: italic;\n"
"font-size:13px;\n"
"font-weight:bold;"));
        label->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(350, 20, 181, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("font-size:11px;\n"
"font-weight:bold;\n"
"padding-left:7px;\n"
"color:grey;\n"
"background-color:white;\n"
"border-radius:15px;\n"
""));
        signup = new QPushButton(widget);
        signup->setObjectName("signup");
        signup->setGeometry(QRect(1040, 20, 80, 31));
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
        login->setGeometry(QRect(940, 20, 80, 31));
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
        label->setText(QCoreApplication::translate("MainWindow", "Movie Recommendation System", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        signup->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

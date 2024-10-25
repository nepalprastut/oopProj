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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(370, 50, 341, 341));
        frame->setStyleSheet(QString::fromUtf8("background-color:white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(30, 10, 113, 20));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(30, 40, 113, 20));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 70, 113, 20));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(30, 100, 113, 20));
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(30, 170, 58, 18));
        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(120, 170, 58, 18));
        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(210, 170, 61, 20));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 300, 80, 18));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 0, 80, 18));
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(30, 140, 113, 20));
        lineEdit_5->setReadOnly(true);
        lineEdit_6 = new QLineEdit(frame);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(30, 200, 113, 20));
        lineEdit_7 = new QLineEdit(frame);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(30, 230, 113, 20));
        lineEdit_7->setEchoMode(QLineEdit::Password);
        lineEdit_8 = new QLineEdit(frame);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(30, 260, 113, 20));
        lineEdit_8->setEchoMode(QLineEdit::Password);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "Middle Name", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "male", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "female", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "other", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "Select your gender", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "create your username", nullptr));
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("MainWindow", "create your password", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("MainWindow", "confirm password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H

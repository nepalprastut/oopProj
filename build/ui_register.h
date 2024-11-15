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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_crusername;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_crpassword;
    QPushButton *pushButton_signup;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(1280, 769);
        centralwidget = new QWidget(Register);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/signup.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center;\n"
"background-color:grey;"));

        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(243, 244, 248);"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setAutoFillBackground(false);
        widget_3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border:0px;\n"
""));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(widget_3);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("font-size:17px;\n"
"color:black;\n"
""));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget_3);
        lineEdit_2->setObjectName("lineEdit_2");
        QFont font1;
        font1.setBold(false);
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:15px;"));
        lineEdit_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_email = new QLineEdit(widget_3);
        lineEdit_email->setObjectName("lineEdit_email");
        sizePolicy1.setHeightForWidth(lineEdit_email->sizePolicy().hasHeightForWidth());
        lineEdit_email->setSizePolicy(sizePolicy1);
        lineEdit_email->setMinimumSize(QSize(200, 40));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_email->setReadOnly(false);

        verticalLayout->addWidget(lineEdit_email);

        lineEdit_3 = new QLineEdit(widget_3);
        lineEdit_3->setObjectName("lineEdit_3");
        sizePolicy1.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy1);
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:15px;"));
        lineEdit_3->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_crusername = new QLineEdit(widget_3);
        lineEdit_crusername->setObjectName("lineEdit_crusername");
        sizePolicy1.setHeightForWidth(lineEdit_crusername->sizePolicy().hasHeightForWidth());
        lineEdit_crusername->setSizePolicy(sizePolicy1);
        lineEdit_crusername->setMinimumSize(QSize(200, 40));
        lineEdit_crusername->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_crusername->setReadOnly(false);

        verticalLayout->addWidget(lineEdit_crusername);

        lineEdit_4 = new QLineEdit(widget_3);
        lineEdit_4->setObjectName("lineEdit_4");
        sizePolicy1.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy1);
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("color:black;\n"
"font-size:15px;"));
        lineEdit_4->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_crpassword = new QLineEdit(widget_3);
        lineEdit_crpassword->setObjectName("lineEdit_crpassword");
        sizePolicy1.setHeightForWidth(lineEdit_crpassword->sizePolicy().hasHeightForWidth());
        lineEdit_crpassword->setSizePolicy(sizePolicy1);
        lineEdit_crpassword->setMinimumSize(QSize(200, 40));
        lineEdit_crpassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,255);\n"
"color:rgba(255,255,255,230);\n"
"font-size:20px;\n"
"color:black;"));
        lineEdit_crpassword->setEchoMode(QLineEdit::EchoMode::Password);
        lineEdit_crpassword->setReadOnly(false);

        verticalLayout->addWidget(lineEdit_crpassword);

        pushButton_signup = new QPushButton(widget_3);
        pushButton_signup->setObjectName("pushButton_signup");
        sizePolicy1.setHeightForWidth(pushButton_signup->sizePolicy().hasHeightForWidth());
        pushButton_signup->setSizePolicy(sizePolicy1);
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

        verticalLayout->addWidget(pushButton_signup);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout->addWidget(widget_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        Register->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Register);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 17));
        Register->setMenuBar(menubar);
        statusbar = new QStatusBar(Register);
        statusbar->setObjectName("statusbar");
        Register->setStatusBar(statusbar);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Movie Recommendation System", nullptr));
        lineEdit->setText(QCoreApplication::translate("Register", "S I G N   U P", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Register", "Enter your Email", nullptr));
        lineEdit_email->setText(QString());
        lineEdit_email->setPlaceholderText(QCoreApplication::translate("Register", "Email", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Register", "Create your username", nullptr));
        lineEdit_crusername->setText(QString());
        lineEdit_crusername->setPlaceholderText(QCoreApplication::translate("Register", "Username", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("Register", "Create your password", nullptr));
        lineEdit_crpassword->setText(QString());
        lineEdit_crpassword->setPlaceholderText(QCoreApplication::translate("Register", "Password", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("Register", "S i g n  U p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H

/********************************************************************************
** Form generated from reading UI file 'logininfopage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININFOPAGE_H
#define UI_LOGININFOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInfoPage
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *bLogin;
    QLabel *labelPassword;
    QLabel *labelUsername;
    QLineEdit *lineEusername;
    QLineEdit *lineEpassword;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginInfoPage)
    {
        if (LoginInfoPage->objectName().isEmpty())
            LoginInfoPage->setObjectName(QString::fromUtf8("LoginInfoPage"));
        LoginInfoPage->resize(877, 633);
        centralwidget = new QWidget(LoginInfoPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 881, 621));
        groupBox->setAutoFillBackground(false);
        bLogin = new QPushButton(groupBox);
        bLogin->setObjectName(QString::fromUtf8("bLogin"));
        bLogin->setGeometry(QRect(270, 360, 141, 61));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        bLogin->setFont(font);
        labelPassword = new QLabel(groupBox);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(150, 240, 131, 71));
        QFont font1;
        font1.setPointSize(20);
        labelPassword->setFont(font1);
        labelUsername = new QLabel(groupBox);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        labelUsername->setGeometry(QRect(150, 160, 131, 71));
        labelUsername->setFont(font1);
        lineEusername = new QLineEdit(groupBox);
        lineEusername->setObjectName(QString::fromUtf8("lineEusername"));
        lineEusername->setGeometry(QRect(370, 170, 371, 51));
        QFont font2;
        font2.setPointSize(15);
        lineEusername->setFont(font2);
        lineEpassword = new QLineEdit(groupBox);
        lineEpassword->setObjectName(QString::fromUtf8("lineEpassword"));
        lineEpassword->setGeometry(QRect(370, 250, 371, 51));
        lineEpassword->setFont(font2);
        lineEpassword->setEchoMode(QLineEdit::Password);
        LoginInfoPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginInfoPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 877, 22));
        LoginInfoPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginInfoPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginInfoPage->setStatusBar(statusbar);

        retranslateUi(LoginInfoPage);

        QMetaObject::connectSlotsByName(LoginInfoPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginInfoPage)
    {
        LoginInfoPage->setWindowTitle(QCoreApplication::translate("LoginInfoPage", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        bLogin->setText(QCoreApplication::translate("LoginInfoPage", "Login", nullptr));
        labelPassword->setText(QCoreApplication::translate("LoginInfoPage", "Password", nullptr));
        labelUsername->setText(QCoreApplication::translate("LoginInfoPage", "Username", nullptr));
        lineEusername->setText(QCoreApplication::translate("LoginInfoPage", "ramesh.vishnoi@gmail.com", nullptr));
        lineEpassword->setText(QCoreApplication::translate("LoginInfoPage", "Welcome@1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginInfoPage: public Ui_LoginInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININFOPAGE_H

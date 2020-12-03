/********************************************************************************
** Form generated from reading UI file 'LoginWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonLogin;
    QHBoxLayout *horizontalLayout;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelErrorEnter;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonBack;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(260, 180);
        LoginWindow->setMinimumSize(QSize(260, 180));
        LoginWindow->setMaximumSize(QSize(260, 180));
        gridLayout = new QGridLayout(LoginWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonLogin = new QPushButton(LoginWindow);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setMinimumSize(QSize(100, 25));
        pushButtonLogin->setMaximumSize(QSize(10000, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButtonLogin->setFont(font);

        gridLayout->addWidget(pushButtonLogin, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelLogin = new QLabel(LoginWindow);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));
        labelLogin->setFont(font);

        horizontalLayout->addWidget(labelLogin);

        lineEditLogin = new QLineEdit(LoginWindow);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setMinimumSize(QSize(160, 20));
        lineEditLogin->setMaximumSize(QSize(160, 20));

        horizontalLayout->addWidget(lineEditLogin);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(73, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        labelErrorEnter = new QLabel(LoginWindow);
        labelErrorEnter->setObjectName(QString::fromUtf8("labelErrorEnter"));
        labelErrorEnter->setMinimumSize(QSize(160, 20));
        labelErrorEnter->setMaximumSize(QSize(160, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Terminal"));
        font1.setPointSize(12);
        labelErrorEnter->setFont(font1);

        gridLayout->addWidget(labelErrorEnter, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPassword = new QLabel(LoginWindow);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setFont(font);

        horizontalLayout_2->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(LoginWindow);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setMinimumSize(QSize(160, 20));
        lineEditPassword->setMaximumSize(QSize(160, 20));

        horizontalLayout_2->addWidget(lineEditPassword);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        pushButtonBack = new QPushButton(LoginWindow);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setMinimumSize(QSize(75, 25));
        pushButtonBack->setMaximumSize(QSize(10000, 25));
        pushButtonBack->setFont(font);

        gridLayout->addWidget(pushButtonBack, 4, 0, 1, 2);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "4Service", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("LoginWindow", "\320\222\321\205\320\276\320\264", nullptr));
        labelLogin->setText(QCoreApplication::translate("LoginWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        labelErrorEnter->setText(QString());
        labelPassword->setText(QCoreApplication::translate("LoginWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("LoginWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

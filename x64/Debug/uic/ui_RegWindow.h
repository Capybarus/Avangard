/********************************************************************************
** Form generated from reading UI file 'RegWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGWINDOW_H
#define UI_REGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonRegistration;

    void setupUi(QWidget *RegWindow)
    {
        if (RegWindow->objectName().isEmpty())
            RegWindow->setObjectName(QString::fromUtf8("RegWindow"));
        RegWindow->resize(170, 110);
        RegWindow->setMaximumSize(QSize(170, 110));
        gridLayout = new QGridLayout(RegWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonLogin = new QPushButton(RegWindow);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setMaximumSize(QSize(130, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButtonLogin->setFont(font);

        gridLayout->addWidget(pushButtonLogin, 1, 0, 1, 1);

        pushButtonRegistration = new QPushButton(RegWindow);
        pushButtonRegistration->setObjectName(QString::fromUtf8("pushButtonRegistration"));
        pushButtonRegistration->setMinimumSize(QSize(130, 30));
        pushButtonRegistration->setMaximumSize(QSize(130, 30));
        pushButtonRegistration->setFont(font);
        pushButtonRegistration->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButtonRegistration, 0, 0, 1, 1);


        retranslateUi(RegWindow);

        QMetaObject::connectSlotsByName(RegWindow);
    } // setupUi

    void retranslateUi(QWidget *RegWindow)
    {
        RegWindow->setWindowTitle(QCoreApplication::translate("RegWindow", "Avangard", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("RegWindow", "\320\222\321\205\320\276\320\264", nullptr));
        pushButtonRegistration->setText(QCoreApplication::translate("RegWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegWindow: public Ui_RegWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGWINDOW_H

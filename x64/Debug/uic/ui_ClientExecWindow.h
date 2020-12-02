/********************************************************************************
** Form generated from reading UI file 'ClientExecWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTEXECWINDOW_H
#define UI_CLIENTEXECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientExecWindow
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButtonClient;
    QPushButton *pushButtonExecutor;
    QPushButton *pushButtonBack;

    void setupUi(QWidget *ClientExecWindow)
    {
        if (ClientExecWindow->objectName().isEmpty())
            ClientExecWindow->setObjectName(QString::fromUtf8("ClientExecWindow"));
        ClientExecWindow->resize(250, 200);
        ClientExecWindow->setMinimumSize(QSize(250, 200));
        ClientExecWindow->setMaximumSize(QSize(250, 200));
        groupBox = new QGroupBox(ClientExecWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(15, 15, 220, 170));
        pushButtonClient = new QPushButton(groupBox);
        pushButtonClient->setObjectName(QString::fromUtf8("pushButtonClient"));
        pushButtonClient->setGeometry(QRect(15, 100, 190, 45));
        pushButtonClient->setMinimumSize(QSize(190, 45));
        pushButtonClient->setMaximumSize(QSize(190, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButtonClient->setFont(font);
        pushButtonExecutor = new QPushButton(groupBox);
        pushButtonExecutor->setObjectName(QString::fromUtf8("pushButtonExecutor"));
        pushButtonExecutor->setGeometry(QRect(15, 20, 190, 45));
        pushButtonExecutor->setMinimumSize(QSize(190, 45));
        pushButtonExecutor->setMaximumSize(QSize(190, 45));
        pushButtonExecutor->setFont(font);
        pushButtonBack = new QPushButton(ClientExecWindow);
        pushButtonBack->setObjectName(QString::fromUtf8("pushButtonBack"));
        pushButtonBack->setGeometry(QRect(10, 170, 50, 20));
        pushButtonBack->setMinimumSize(QSize(50, 20));
        pushButtonBack->setMaximumSize(QSize(50, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("System"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonBack->setFont(font1);

        retranslateUi(ClientExecWindow);

        QMetaObject::connectSlotsByName(ClientExecWindow);
    } // setupUi

    void retranslateUi(QWidget *ClientExecWindow)
    {
        ClientExecWindow->setWindowTitle(QCoreApplication::translate("ClientExecWindow", "4Service", nullptr));
        groupBox->setTitle(QString());
        pushButtonClient->setText(QCoreApplication::translate("ClientExecWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217 \320\272\320\260\320\272\n"
"\320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
        pushButtonExecutor->setText(QCoreApplication::translate("ClientExecWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217 \320\272\320\260\320\272\n"
"\320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("ClientExecWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientExecWindow: public Ui_ClientExecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTEXECWINDOW_H

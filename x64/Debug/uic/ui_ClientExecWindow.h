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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientExecWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonExecutor;
    QPushButton *pushButtonClient;

    void setupUi(QWidget *ClientExecWindow)
    {
        if (ClientExecWindow->objectName().isEmpty())
            ClientExecWindow->setObjectName(QString::fromUtf8("ClientExecWindow"));
        ClientExecWindow->resize(250, 200);
        ClientExecWindow->setMinimumSize(QSize(250, 200));
        ClientExecWindow->setMaximumSize(QSize(250, 200));
        gridLayout = new QGridLayout(ClientExecWindow);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonExecutor = new QPushButton(ClientExecWindow);
        pushButtonExecutor->setObjectName(QString::fromUtf8("pushButtonExecutor"));
        pushButtonExecutor->setMinimumSize(QSize(190, 45));
        pushButtonExecutor->setMaximumSize(QSize(190, 45));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        pushButtonExecutor->setFont(font);

        gridLayout->addWidget(pushButtonExecutor, 0, 0, 1, 1);

        pushButtonClient = new QPushButton(ClientExecWindow);
        pushButtonClient->setObjectName(QString::fromUtf8("pushButtonClient"));
        pushButtonClient->setMinimumSize(QSize(190, 45));
        pushButtonClient->setMaximumSize(QSize(190, 45));
        pushButtonClient->setFont(font);

        gridLayout->addWidget(pushButtonClient, 1, 0, 1, 1);


        retranslateUi(ClientExecWindow);

        QMetaObject::connectSlotsByName(ClientExecWindow);
    } // setupUi

    void retranslateUi(QWidget *ClientExecWindow)
    {
        ClientExecWindow->setWindowTitle(QCoreApplication::translate("ClientExecWindow", "4Service", nullptr));
        pushButtonExecutor->setText(QCoreApplication::translate("ClientExecWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217 \320\272\320\260\320\272\n"
"\320\270\321\201\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214", nullptr));
        pushButtonClient->setText(QCoreApplication::translate("ClientExecWindow", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217 \320\272\320\260\320\272\n"
"\320\267\320\260\320\272\320\260\320\267\321\207\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientExecWindow: public Ui_ClientExecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTEXECWINDOW_H

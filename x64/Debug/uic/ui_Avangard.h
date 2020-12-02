/********************************************************************************
** Form generated from reading UI file 'Avangard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVANGARD_H
#define UI_AVANGARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AvangardClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AvangardClass)
    {
        if (AvangardClass->objectName().isEmpty())
            AvangardClass->setObjectName(QString::fromUtf8("AvangardClass"));
        AvangardClass->resize(600, 400);
        centralWidget = new QWidget(AvangardClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        AvangardClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AvangardClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        AvangardClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AvangardClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AvangardClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AvangardClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AvangardClass->setStatusBar(statusBar);

        retranslateUi(AvangardClass);

        QMetaObject::connectSlotsByName(AvangardClass);
    } // setupUi

    void retranslateUi(QMainWindow *AvangardClass)
    {
        AvangardClass->setWindowTitle(QCoreApplication::translate("AvangardClass", "4Service", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AvangardClass: public Ui_AvangardClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVANGARD_H

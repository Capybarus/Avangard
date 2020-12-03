/********************************************************************************
** Form generated from reading UI file 'CreateAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAccount
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBoxBaseInfo;
    QGridLayout *gridLayout;
    QLabel *labelFirstName;
    QLabel *labelBirthDate;
    QLabel *labelLastName;
    QLineEdit *lineEditFirstName;
    QLineEdit *lineEditLastName;
    QLineEdit *lineEditBirthDate;
    QGroupBox *groupBoxExtraInfo;
    QGridLayout *gridLayout_2;
    QLabel *labelNameCompany;
    QLineEdit *lineEditNameCompany;
    QLabel *labelAdress;
    QLineEdit *lineEditAdress;
    QLabel *labelLineBuisness;
    QLineEdit *lineEditLineBuisness;
    QLabel *labelAboutCompany;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEditAboutCompany;
    QGroupBox *groupBoxLogPass;
    QGridLayout *gridLayout_3;
    QLabel *labelLogin;
    QLineEdit *lineEditLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QLabel *labelPasswordAgain;
    QLineEdit *lineEditCheckPassword;
    QLabel *label_11;
    QPushButton *pushButtonRegistration;

    void setupUi(QWidget *CreateAccount)
    {
        if (CreateAccount->objectName().isEmpty())
            CreateAccount->setObjectName(QString::fromUtf8("CreateAccount"));
        CreateAccount->resize(418, 460);
        CreateAccount->setMaximumSize(QSize(418, 460));
        gridLayout_4 = new QGridLayout(CreateAccount);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBoxBaseInfo = new QGroupBox(CreateAccount);
        groupBoxBaseInfo->setObjectName(QString::fromUtf8("groupBoxBaseInfo"));
        gridLayout = new QGridLayout(groupBoxBaseInfo);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelFirstName = new QLabel(groupBoxBaseInfo);
        labelFirstName->setObjectName(QString::fromUtf8("labelFirstName"));
        QFont font;
        font.setFamily(QString::fromUtf8("System"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        labelFirstName->setFont(font);

        gridLayout->addWidget(labelFirstName, 0, 0, 1, 1);

        labelBirthDate = new QLabel(groupBoxBaseInfo);
        labelBirthDate->setObjectName(QString::fromUtf8("labelBirthDate"));
        labelBirthDate->setFont(font);

        gridLayout->addWidget(labelBirthDate, 3, 0, 1, 1);

        labelLastName = new QLabel(groupBoxBaseInfo);
        labelLastName->setObjectName(QString::fromUtf8("labelLastName"));
        labelLastName->setFont(font);

        gridLayout->addWidget(labelLastName, 2, 0, 1, 1);

        lineEditFirstName = new QLineEdit(groupBoxBaseInfo);
        lineEditFirstName->setObjectName(QString::fromUtf8("lineEditFirstName"));

        gridLayout->addWidget(lineEditFirstName, 0, 1, 1, 1);

        lineEditLastName = new QLineEdit(groupBoxBaseInfo);
        lineEditLastName->setObjectName(QString::fromUtf8("lineEditLastName"));

        gridLayout->addWidget(lineEditLastName, 2, 1, 1, 1);

        lineEditBirthDate = new QLineEdit(groupBoxBaseInfo);
        lineEditBirthDate->setObjectName(QString::fromUtf8("lineEditBirthDate"));

        gridLayout->addWidget(lineEditBirthDate, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxBaseInfo, 0, 0, 1, 1);

        groupBoxExtraInfo = new QGroupBox(CreateAccount);
        groupBoxExtraInfo->setObjectName(QString::fromUtf8("groupBoxExtraInfo"));
        gridLayout_2 = new QGridLayout(groupBoxExtraInfo);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelNameCompany = new QLabel(groupBoxExtraInfo);
        labelNameCompany->setObjectName(QString::fromUtf8("labelNameCompany"));
        labelNameCompany->setFont(font);

        gridLayout_2->addWidget(labelNameCompany, 0, 0, 1, 1);

        lineEditNameCompany = new QLineEdit(groupBoxExtraInfo);
        lineEditNameCompany->setObjectName(QString::fromUtf8("lineEditNameCompany"));

        gridLayout_2->addWidget(lineEditNameCompany, 0, 1, 1, 1);

        labelAdress = new QLabel(groupBoxExtraInfo);
        labelAdress->setObjectName(QString::fromUtf8("labelAdress"));
        labelAdress->setFont(font);

        gridLayout_2->addWidget(labelAdress, 1, 0, 1, 1);

        lineEditAdress = new QLineEdit(groupBoxExtraInfo);
        lineEditAdress->setObjectName(QString::fromUtf8("lineEditAdress"));

        gridLayout_2->addWidget(lineEditAdress, 1, 1, 1, 1);

        labelLineBuisness = new QLabel(groupBoxExtraInfo);
        labelLineBuisness->setObjectName(QString::fromUtf8("labelLineBuisness"));
        labelLineBuisness->setFont(font);

        gridLayout_2->addWidget(labelLineBuisness, 2, 0, 1, 1);

        lineEditLineBuisness = new QLineEdit(groupBoxExtraInfo);
        lineEditLineBuisness->setObjectName(QString::fromUtf8("lineEditLineBuisness"));

        gridLayout_2->addWidget(lineEditLineBuisness, 2, 1, 1, 1);

        labelAboutCompany = new QLabel(groupBoxExtraInfo);
        labelAboutCompany->setObjectName(QString::fromUtf8("labelAboutCompany"));
        labelAboutCompany->setFont(font);

        gridLayout_2->addWidget(labelAboutCompany, 3, 0, 1, 1);

        scrollArea = new QScrollArea(groupBoxExtraInfo);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 216, 98));
        textEditAboutCompany = new QTextEdit(scrollAreaWidgetContents);
        textEditAboutCompany->setObjectName(QString::fromUtf8("textEditAboutCompany"));
        textEditAboutCompany->setGeometry(QRect(0, 0, 221, 101));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxExtraInfo, 1, 0, 1, 1);

        groupBoxLogPass = new QGroupBox(CreateAccount);
        groupBoxLogPass->setObjectName(QString::fromUtf8("groupBoxLogPass"));
        gridLayout_3 = new QGridLayout(groupBoxLogPass);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        labelLogin = new QLabel(groupBoxLogPass);
        labelLogin->setObjectName(QString::fromUtf8("labelLogin"));
        labelLogin->setFont(font);

        gridLayout_3->addWidget(labelLogin, 0, 0, 1, 1);

        lineEditLogin = new QLineEdit(groupBoxLogPass);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        gridLayout_3->addWidget(lineEditLogin, 0, 1, 1, 1);

        labelPassword = new QLabel(groupBoxLogPass);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setFont(font);

        gridLayout_3->addWidget(labelPassword, 1, 0, 1, 1);

        lineEditPassword = new QLineEdit(groupBoxLogPass);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));

        gridLayout_3->addWidget(lineEditPassword, 1, 1, 1, 1);

        labelPasswordAgain = new QLabel(groupBoxLogPass);
        labelPasswordAgain->setObjectName(QString::fromUtf8("labelPasswordAgain"));
        labelPasswordAgain->setFont(font);

        gridLayout_3->addWidget(labelPasswordAgain, 2, 0, 1, 1);

        lineEditCheckPassword = new QLineEdit(groupBoxLogPass);
        lineEditCheckPassword->setObjectName(QString::fromUtf8("lineEditCheckPassword"));

        gridLayout_3->addWidget(lineEditCheckPassword, 2, 1, 1, 1);

        label_11 = new QLabel(groupBoxLogPass);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Terminal"));
        font1.setPointSize(12);
        label_11->setFont(font1);

        gridLayout_3->addWidget(label_11, 3, 1, 1, 1);


        gridLayout_4->addWidget(groupBoxLogPass, 2, 0, 1, 1);

        pushButtonRegistration = new QPushButton(CreateAccount);
        pushButtonRegistration->setObjectName(QString::fromUtf8("pushButtonRegistration"));
        pushButtonRegistration->setFont(font);

        gridLayout_4->addWidget(pushButtonRegistration, 3, 0, 1, 1);


        retranslateUi(CreateAccount);

        QMetaObject::connectSlotsByName(CreateAccount);
    } // setupUi

    void retranslateUi(QWidget *CreateAccount)
    {
        CreateAccount->setWindowTitle(QCoreApplication::translate("CreateAccount", "4Service", nullptr));
        groupBoxBaseInfo->setTitle(QString());
        labelFirstName->setText(QCoreApplication::translate("CreateAccount", "\320\230\320\274\321\217", nullptr));
        labelBirthDate->setText(QCoreApplication::translate("CreateAccount", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        labelLastName->setText(QCoreApplication::translate("CreateAccount", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        groupBoxExtraInfo->setTitle(QString());
        labelNameCompany->setText(QCoreApplication::translate("CreateAccount", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        labelAdress->setText(QCoreApplication::translate("CreateAccount", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        labelLineBuisness->setText(QCoreApplication::translate("CreateAccount", "\320\241\321\204\320\265\321\200\320\260 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
        labelAboutCompany->setText(QCoreApplication::translate("CreateAccount", "\320\236\320\261 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270", nullptr));
        groupBoxLogPass->setTitle(QString());
        labelLogin->setText(QCoreApplication::translate("CreateAccount", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        labelPassword->setText(QCoreApplication::translate("CreateAccount", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        labelPasswordAgain->setText(QCoreApplication::translate("CreateAccount", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_11->setText(QString());
        pushButtonRegistration->setText(QCoreApplication::translate("CreateAccount", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAccount: public Ui_CreateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H

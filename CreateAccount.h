#pragma once

#include <QWidget>
#include "ui_CreateAccount.h"

class CreateAccount : public QWidget
{
	Q_OBJECT

public:
	CreateAccount(QWidget *parent = Q_NULLPTR);
	~CreateAccount();
	void setPersonInfo();

private:
	Ui::CreateAccount ui;
};

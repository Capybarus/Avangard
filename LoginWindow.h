#pragma once

#include <QWidget>
#include "ui_LoginWindow.h"

class LoginWindow : public QWidget
{
	Q_OBJECT

public:
	LoginWindow(QWidget *parent = Q_NULLPTR);
	~LoginWindow();
	
	void propertiesElements();
	void setLogPass();			//Для окна регистрации (перенести)
	bool checkingLogin();		//Для окна регистрации (перенести)
private slots:
	void enterToProfile();
	void returnToBack();

private:

	QString Login;
	QString Password;

	Ui::LoginWindow ui;
};

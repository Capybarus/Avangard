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
	void setLogPass();			//��� ���� ����������� (���������)
	bool checkingLogin();		//��� ���� ����������� (���������)
private slots:
	void enterToProfile();
	void returnToBack();

private:

	QString Login;
	QString Password;

	Ui::LoginWindow ui;
};

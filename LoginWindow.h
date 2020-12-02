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
private slots:
	void enterToProfile();
	void returnToBack();

private:
	Ui::LoginWindow ui;
};

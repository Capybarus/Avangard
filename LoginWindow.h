#pragma once

#include <QWidget>
#include "ui_LoginWindow.h"

class LoginWindow : public QWidget
{
	Q_OBJECT

public:
	LoginWindow(QWidget *parent = Q_NULLPTR);
	~LoginWindow();

private:
	Ui::LoginWindow ui;
};

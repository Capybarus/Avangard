#pragma once

#include <QWidget>
#include "ui_RegWindow.h"

class RegWindow : public QWidget
{
	Q_OBJECT

public:
	RegWindow(QWidget *parent = Q_NULLPTR);
	~RegWindow();

private slots:
	void openRegistration();
	void openLogin();

private:
	Ui::RegWindow ui;
};

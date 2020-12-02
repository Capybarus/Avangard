#pragma once

#include <QWidget>
#include "ui_Profile.h"

class Profile : public QWidget
{
	Q_OBJECT

public:
	Profile(QWidget *parent = Q_NULLPTR);
	~Profile();

private:
	Ui::Profile ui;
};

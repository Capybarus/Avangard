#pragma once

#include <QWidget>
#include "ui_ClientExecWindow.h"

class ClientExecWindow : public QWidget
{
	Q_OBJECT

public:
	ClientExecWindow(QWidget *parent = Q_NULLPTR);
	~ClientExecWindow();

private:
	Ui::ClientExecWindow ui;
};

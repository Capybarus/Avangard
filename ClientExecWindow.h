#pragma once

#include <QWidget>
#include "ui_ClientExecWindow.h"

class ClientExecWindow : public QWidget
{
	Q_OBJECT

public:
	ClientExecWindow(QWidget *parent = Q_NULLPTR);
	~ClientExecWindow();
	void fillReg();

private slots:
	void returnToBack();
	void regAsExecutor();
	void regAsClient();
	

private:

	bool Executor;
	Ui::ClientExecWindow ui;
};

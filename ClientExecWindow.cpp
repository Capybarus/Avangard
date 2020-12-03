#include "ClientExecWindow.h"
#include "RegWindow.h"
#include "CreateAccount.h"

ClientExecWindow::ClientExecWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButtonBack, SIGNAL(clicked()), SLOT(returnToBack()));						//конект для возврата
	connect(ui.pushButtonClient, SIGNAL(clicked()), SLOT(regAsClient()));						//конект для регистрации как клиент
	connect(ui.pushButtonExecutor, SIGNAL(clicked()), SLOT(regAsExecutor()));					//конект для регистрации как исполнитель
}

ClientExecWindow::~ClientExecWindow()
{
}

void ClientExecWindow::returnToBack() {				
	RegWindow* reg_window = new RegWindow();
	reg_window->show();
	this->close();
}

void ClientExecWindow::regAsExecutor() {
	Executor = true;
	fillReg();
}

void ClientExecWindow::regAsClient() {
	Executor = false;
	fillReg();
}

void ClientExecWindow::fillReg() {
	CreateAccount *acc = new CreateAccount();
	acc->show();
	this->close();
}
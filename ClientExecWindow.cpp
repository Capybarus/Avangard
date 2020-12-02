#include "ClientExecWindow.h"
#include "RegWindow.h"

ClientExecWindow::ClientExecWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButtonBack, SIGNAL(clicked()), SLOT(returnToBack()));		//конект для возврата
	connect(ui.pushButtonClient, SIGNAL(clicked()), SLOT());					//конект для регистрации как клиент
	connect(ui.pushButtonExecutor, SIGNAL(clicked()), SLOT());					//конект для регистрации как исполнитель
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
	
}

void ClientExecWindow::regAsClient() {
	
}


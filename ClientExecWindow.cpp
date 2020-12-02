#include "ClientExecWindow.h"
#include "RegWindow.h"

ClientExecWindow::ClientExecWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButtonBack, SIGNAL(clicked()), SLOT(returnToBack()));
}

ClientExecWindow::~ClientExecWindow()
{
}

void ClientExecWindow::returnToBack() {
	RegWindow* reg_window = new RegWindow();
	reg_window->show();
	this->close();
}
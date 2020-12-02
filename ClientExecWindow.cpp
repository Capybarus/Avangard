#include "ClientExecWindow.h"
#include "RegWindow.h"

ClientExecWindow::ClientExecWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButtonBack, SIGNAL(clicked()), SLOT(returnToBack()));		//������ ��� ��������
	connect(ui.pushButtonClient, SIGNAL(clicked()), SLOT());					//������ ��� ����������� ��� ������
	connect(ui.pushButtonExecutor, SIGNAL(clicked()), SLOT());					//������ ��� ����������� ��� �����������
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


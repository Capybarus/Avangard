#include "RegWindow.h"
#include "ClientExecWindow.h"
#include "qmessagebox.h"

RegWindow::RegWindow(QWidget *parent) //Окно выбора регистрация или вход
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.pushButtonRegistration, SIGNAL(clicked()), SLOT(openRegistration()));
	connect(ui.pushButtonLogin, SIGNAL(clicked()), SLOT(openLogin()));
}

RegWindow::~RegWindow()
{

}

void RegWindow::openRegistration() {
	ClientExecWindow* new_window = new ClientExecWindow();
	new_window -> show();
	this -> close();
}

void RegWindow::openLogin() {
	
}

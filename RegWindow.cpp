#include "RegWindow.h"
#include "ClientExecWindow.h"
#include "LoginWindow.h"
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
	ClientExecWindow* reg_window = new ClientExecWindow();
	reg_window->show();
	this->close();
}

void RegWindow::openLogin() {
	LoginWindow* login_window = new LoginWindow();
	login_window->show();
	this->close();
}

#include "RegWindow.h"
#include "ClientExecWindow.h"
#include "LoginWindow.h"
#include "qmessagebox.h"

RegWindow::RegWindow(QWidget *parent) //Окно выбора регистрация или вход
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.pushButtonRegistration, SIGNAL(clicked()), SLOT(openRegistration()));		//конект для регистрации
	connect(ui.pushButtonLogin, SIGNAL(clicked()), SLOT(openLogin()));						//конект для входа
}

RegWindow::~RegWindow()
{

}

void RegWindow::openRegistration() {														//открыть окно регистрации
	ClientExecWindow* reg_window = new ClientExecWindow();
	reg_window->show();
	this->close();
}

void RegWindow::openLogin() {																//открыть окно авторизации
	LoginWindow* login_window = new LoginWindow();
	login_window->show();
	this->close();
}

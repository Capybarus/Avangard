#include "LoginWindow.h"
#include "Profile.h"
#include "RegWindow.h"

LoginWindow::LoginWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButtonLogin, SIGNAL(clicked()), SLOT(enterToProfile()));		//������ ��� ������ �����
	connect(ui.pushButtonBack, SIGNAL(clicked()), SLOT(returnToBack()));		//������ ��� ������ ��������

	propertiesElements();
}

LoginWindow::~LoginWindow()
{
}

void LoginWindow::propertiesElements() {										//�������� ��������� �� �����
	ui.lineEditPassword->setEchoMode(QLineEdit::Password);

	ui.labelErrorLogin->setStyleSheet("color: rgb(255, 0, 0)");
	ui.labelErrorPassword->setStyleSheet("color: rgb(255, 0, 0)");
}

void LoginWindow::enterToProfile() {											//���� � �������
	Profile* profile = new Profile();
	profile->show();
	this->close();
}

void LoginWindow::returnToBack() {												//������� �����
	RegWindow* reg_window = new RegWindow();
	reg_window->show();
	this->close();
}
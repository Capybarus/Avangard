#include "LoginWindow.h"
#include "Profile.h"
#include "RegWindow.h"
#include "qmessagebox.h"

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

	ui.labelErrorEnter->setStyleSheet("color: rgb(255, 0, 0)");
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

bool LoginWindow::checkingLogin() {												//��� ���� ����������� (���������)
	QString login_temp = ui.lineEditLogin->text();
	if (login_temp.count("@") == 1 && login_temp.split("@")[1].split(".").size() == 2) {
		return true;
	}
	QMessageBox::warning(this, "������", "�������� ������ ������.");
	return false;
}

void LoginWindow::setLogPass() {												//��� ���� ����������� (���������)
	
}
#include "LoginWindow.h"
#include "Profile.h"
#include "RegWindow.h"
#include "qmessagebox.h"

LoginWindow::LoginWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButtonLogin, SIGNAL(clicked()), SLOT(enterToProfile()));		//конект для кнопки входа
	connect(ui.pushButtonBack, SIGNAL(clicked()), SLOT(returnToBack()));		//конект для кнопки возврата

	propertiesElements();
}

LoginWindow::~LoginWindow()
{
}

void LoginWindow::propertiesElements() {										//свойства элементов на форме
	ui.lineEditPassword->setEchoMode(QLineEdit::Password);

	ui.labelErrorEnter->setStyleSheet("color: rgb(255, 0, 0)");
}

void LoginWindow::enterToProfile() {											//вход в профиль
	Profile* profile = new Profile();
	profile->show();
	this->close();
}

void LoginWindow::returnToBack() {												//возврат назад
	RegWindow* reg_window = new RegWindow();
	reg_window->show();
	this->close();
}

bool LoginWindow::checkingLogin() {												//Для окна регистрации (перенести)
	QString login_temp = ui.lineEditLogin->text();
	if (login_temp.count("@") == 1 && login_temp.split("@")[1].split(".").size() == 2) {
		return true;
	}
	QMessageBox::warning(this, "Ошибка", "Неверный формат логина.");
	return false;
}

void LoginWindow::setLogPass() {												//Для окна регистрации (перенести)
	
}
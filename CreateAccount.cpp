#include "CreateAccount.h"
#include "Person.h"

CreateAccount::CreateAccount(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

CreateAccount::~CreateAccount()
{
}

void CreateAccount::setPersonInfo() {
	PersonExecutor executor;

	executor.First_Name = ui.lineEditFirstName->text();
	executor.Last_Name = ui.lineEditLastName->text();
	executor.Age = ui.lineEditBirthDate->text().toInt();
	
	executor.Name_Company = ui.lineEditNameCompany->text();
	executor.Line_Business = ui.lineEditLineBuisness->text();
	executor.About_Company = ui.textEditAboutCompany->toPlainText();
}



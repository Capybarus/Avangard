#pragma once

#include "qstring.h"
#include "qhash.h"
#include "qstringlist.h"

class Person {										//класс человека
	QString First_Name;								
	QString Last_Name;								
	
	int Age;			

	QHash<QString, QString> Log_And_Pass;			
	QStringList Adress;
};

class PersonClient : Person {						//класс клиента
	
};

class PersonExecutor : Person {						//класс исполнитель
	QString Name_Company;
	QString Line_Business;

	QString About_Company;
};
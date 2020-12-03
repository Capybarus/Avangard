#pragma once

#include "qstring.h"
#include "qhash.h"
#include "qstringlist.h"


class Person {										//класс человека
public:
	QString First_Name;								
	QString Last_Name;								
	
	int Age;			
private:
	QHash<QString, QString> Log_And_Pass;			
	QStringList Adress;
};

class PersonClient : public Person {						//класс клиента
public:
	QString status;
};

class PersonExecutor : public Person {						//класс исполнитель
public:
	QString Name_Company;
	QString Line_Business;

	QString About_Company;
};
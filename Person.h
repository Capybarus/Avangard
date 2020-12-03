#pragma once

#include "qstring.h"
#include "qhash.h"
#include "qstringlist.h"


class Person {										//����� ��������
public:
	QString First_Name;								
	QString Last_Name;								
	
	int Age;			
private:
	QHash<QString, QString> Log_And_Pass;			
	QStringList Adress;
};

class PersonClient : public Person {						//����� �������
public:
	QString status;
};

class PersonExecutor : public Person {						//����� �����������
public:
	QString Name_Company;
	QString Line_Business;

	QString About_Company;
};
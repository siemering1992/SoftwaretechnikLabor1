#pragma once
#include <iostream>
#include "defs.h"

class Person
{
protected:
	string _name;
	string _surname;
	Date _dob;


public:

	void setName(string);
	string name();
	void setSurname(string);
	string surname();
	int setDob(unsigned int, MONTH, int);
	Date dob();

	Person();
	Person(string name, string surname, Date);

};



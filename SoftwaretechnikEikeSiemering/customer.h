
#pragma once
#include <iostream>
#include "defs.h"
#include "person.h"

class Customer : public Person
{
private:
	Address _address;
	unsigned int _id;

public:

	void setAddress(string, unsigned int, string, string, string);
	Address address();
	void setId(unsigned int);
	unsigned int id();


};

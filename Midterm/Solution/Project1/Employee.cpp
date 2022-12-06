#include "Employee.h"
#include <iostream>
using namespace std;
namespace sdds
{
	void Employee::toString()
	{
		cout << "Name: " << name << ", Age: " << age << endl;
	}

	void Employee::SetName(char* name)
	{
		delete this->name;
		this->name = new char[strlen(name) + 1] {};
		std::strcpy(this->name, name);
	}

	void Employee::SetAge(int age)
	{
		this->age = age;
	}

	char* Employee::GetName()
	{
		return name;
	}

	int Employee::GetAge()
	{
		return age;
	}
}

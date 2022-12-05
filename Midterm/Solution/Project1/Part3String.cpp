#include <iostream>
#include<string>
using namespace std;
class Employee
{
	string name{};
	int age{};
public:
	void toString();
	void SetName(string name);
	void SetAge(int age);
	string GetName();
	int GetAge();

private:

};

void Employee::toString()
{
	cout << "Name:" << name << ", Age: " << age;
}

void Employee::SetName(string name)
{
	this->name = name;
}

void Employee::SetAge(int age)
{
	this->age = age;
}

string Employee::GetName()
{
	return name;
}

int Employee::GetAge()
{
	return age;
}

Employee* resize(Employee* arr, int* size) {
	Employee* newEmplyees = new Employee[*size];
	for (int i = 0; i < *size - 1; i++)
	{
		newEmplyees[i].SetAge(arr[i].GetAge());
		newEmplyees[i].SetName(arr[i].GetName());
	}

	//delete[] arr;
	arr = newEmplyees;
	//delete[] newEmplyees;
	newEmplyees = nullptr;
	return arr;
}

void display(Employee* arr, int size) {
	for (int i = 0; i < size; i++)
	{
		Employee eployee = *(arr + i);
		eployee.toString();
		cout << endl;
	}
}
int main() {
	Employee* employees = new Employee[1];

	char Moreemployee;
	int correction{};
	int size = 1;
	while (true)
	{
		cout << "Enter Employee Name: ";
		//char* nameptr=nullptr;
		string name;
		cin >> name;
		//int length = sizeof(name) / sizeof(char);
		//nameptr = new char[length];

		cout << "Enter Employee Age: ";
		int age;
		cin >> age;
		if (age < 0)
		{
			age = 0;
			cout << "Invalid Age Entered.Setting it to 0" << endl;
			correction++;
		}
		Employee employee;
		employee.SetName(name);
		employee.SetAge(age);

		employees[size - 1] = employee;
		cout << "Do you want to enter more employee information or not?";
		cin >> Moreemployee;

		if (Moreemployee != 'y' && Moreemployee != 'Y')
		{
			break;
		}
		size++;
		employees = resize(employees, &size);

	}
	display(employees, size);

	cout << "Total Records found: " << size << endl;
	cout << correction << " correction made to input data " << size;

	delete[] employees;
	employees = nullptr;

	system("pause");
	return 0;
}
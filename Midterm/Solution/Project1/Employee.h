#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
namespace sdds
{
	class Employee
	{
		char* name{};
		int age{};
	public:
		void toString();
		void SetName(char* name);
		void SetAge(int age);
		char* GetName();
		int GetAge();
	};
}
#endif // !SDDS_EMPLOYEE_H_



#include <iostream>
#ifndef SDDS_NAME_H_
#define SDDS_NAME_H_
namespace sdds {
	class Name
	{
	char* m_name{};
	public:
	Name(const char* name = nullptr);
	Name(Name& name);
	Name& operator=(const Name& RO);

	operator const char*()const;
	operator int()const;
	~Name();
	//Name(const Name& R);
	//Name& operator=(const Name& R);
	std::ostream& display(std::ostream& coutref = std::cout)const;
	std::istream& read(std::istream& cinref = std::cin);
	};

	std::ostream& operator<<(std::ostream& left, const Name& right);
	std::istream& operator>>(std::istream& left, Name& right);
}
#endif // !SDDS_NAME_H_



#ifndef SDDS_NAME_H_
#define SDDS_NAME_H_
#include<iostream>
namespace sdds{
	class Name
	{
		char* m_name{};
	protected:
		const char* GetName()const;
	public:
		Name(const char* name = nullptr);
		Name(const Name& RO);
		Name& operator=(const Name& RO);
		virtual ~Name();
		std::ostream& Display(std::ostream& coutref=std::cout)const;
		std::istream& read(std::istream& cinref=std::cin);
	};
	std::ostream& operator<<(std::ostream& left,const Name& name);
	std::istream& operator<<(std::istream& left,Name& name);
}
#endif // !SDDS_NAME_H_

//#include <iostream>
//#include "Animal.h"
//#include "Utils.h"
//namespace sdds {
//	bool debug = false;
//	Animal::Animal(const char* name)
//	{
//		Setname(name);
//		if (debug) std::cout << "creating " << m_name << " The animal" << std::endl;
//	}
//
//	Animal::Animal(const Animal& RO)
//	{
//		if (debug) std::cout << "copying " << m_name << " The animal" << std::endl;
//		Setname(RO.Getname());
//	}
//	Animal& Animal::operator=(const Animal& RO)
//	{
//		if (this != &RO)
//		{
//			if (RO.Getname())
//			{
//				Setname(RO.Getname());
//			}
//		}
//
//		return *this;
//	}
//	const char* Animal::Getname() const
//	{
//		return m_name;
//	}
//	void Animal::Setname(const char* name)
//	{
//			strcpy(m_name, name);
//	}
//	void Animal::act()
//	{
//		std::cout << "Act like animal" << std::endl;
//	}
//	void Animal::move()
//	{
//		std::cout << "Move like animal" << std::endl;
//	}
	//void Animal::sound()
	//{
	//	std::cout << "Sound like animal" << std::endl;
	//}
	//Animal::~Animal()
	//{
	//	if (debug) std::cout << "removing "<<m_name<<" The animal" << std::endl;
	//}
//}
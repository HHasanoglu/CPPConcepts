#include "Cat.h"
#include <iostream>
namespace sdds
{
	Cat::Cat(const char* name, int numberOfLives) :Animal(name)
	{
		SetNumberofLives(numberOfLives);
	}

	Cat::Cat(const Cat& RO)
	{
		SetNumberofLives(RO.GetNumberofLives());
	}
	Cat& Cat::operator=(const Cat& RO)
	{
		if (this != &RO)
		{
		SetNumberofLives(RO.GetNumberofLives());
		}

		return *this;
	}
	void Cat::SetNumberofLives(int number)
	{
		m_numberOfLives = number;
	}
	int Cat::GetNumberofLives() const
	{
		return m_numberOfLives;
	}
	void Cat::act()
	{
		std::cout << "Act like cat" << std::endl;
	}
	void Cat::move()
	{
		std::cout << "move like cat" << std::endl;
	}
	void Cat::sound()
	{
		std::cout << "sound like cat" << std::endl;
	}
	void Cat::play()
	{
		std::cout << "play like cat" << std::endl;
	}
	Cat::~Cat()
	{
	}
}
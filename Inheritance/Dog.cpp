#include <iostream>
#include "Dog.h"
namespace sdds {

Dog::Dog(const char* name):Animal(name)
{
}

void Dog::act()
{
	std::cout << "act like dog " << Getname() << std::endl;
}

void Dog::move()
{
	std::cout << "Move like dog " << Getname() <<std::endl;
}

void Dog::sound()
{
	std::cout << "Sound like dog " << Getname() << std::endl;
}

Dog::~Dog()
{
}

}
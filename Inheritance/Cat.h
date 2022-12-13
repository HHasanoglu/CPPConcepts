#include "Animal.h"
#ifndef SDDS_CAT_H_
#define SDDS_CAT_H_
namespace sdds {
	class Cat :public Animal
	{
		int m_numberOfLives{};

	public:
		Cat(const char* name="Garfield", int numberOfLives=9);
		Cat(const Cat& RO);
		Cat& operator=(const Cat& RO);
		void SetNumberofLives(int number);
		int GetNumberofLives()const;
		void act();
		void move();
		void sound();
		void play();
		~Cat();

	};
}
#endif // !SDDS_CAT_H_


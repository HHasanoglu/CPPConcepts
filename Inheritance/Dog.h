#include "Animal.h"
#ifndef SDDS_DOG_H_
#define SDDS_DOG_H_
namespace sdds {
	class Dog :public Animal{
	public:
		Dog(const char* name = "Milo");
		virtual void act();
		virtual void move();
		virtual void sound();
		virtual ~Dog();

		//// Inherited via Animal
		//virtual void sound() override;
	};

}
#endif // !SDDS_DOG_H_


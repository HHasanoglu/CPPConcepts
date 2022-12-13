#include <iostream>
#include "Animal.h"
#include "main.h"
#include "Cat.h"
#include "Dog.h"
using namespace sdds;
using namespace std;

void showAnimal(Animal& animal) {

	cout << animal.Getname()<<endl;
}

int main() {
	//debug = true;
	//Animal A = "Buffy";
	//Animal B;
	//B = A;
	//A.act();
	//A.move();
	//A.sound();
	//showAnimal(A);

	Cat cat("gorbeh", 2);
	cat.act();
	cat.move();
	cat.sound();
	cat.play();

	//Animal& catref = cat;
	//catref.act();
	//catref.move();
	//catref.sound();

	//Cat* catptr = new Cat("gorbeh", 2);
	//catptr->act();
	//catptr->move();
	//catptr->sound();

 //   Animal* catbaseptr= new Cat("gorbeh", 2);
	//catbaseptr->act();
	//catbaseptr->move();
	//catbaseptr->sound();

	//Animal* catref1 = catptr;
	//catref1->act();
	//catref1->move();
	//catref1->sound();


	//delete catptr;
	//delete catbaseptr;

	//Abstract Class
	//Animal animal("Bird");
	//animal.act();
	//animal.move();
	//animal.sound();


	//Dog dog;

	//Animal* animal[4] = { new Cat("Jack"),new Dog("Snowy"),new Cat("jill"),&dog };

	//for (int i = 0; i < 4; i++)
	//{
	//	animal[i]->sound();
	//}

	//for (int i = 0; i < 3; delete animal[i++]);






	return 0;
}
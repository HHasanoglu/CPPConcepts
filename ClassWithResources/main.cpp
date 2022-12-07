#include<iostream>
#include "Name.h"
#include "FullName.h"
using namespace sdds;
int main() {

	//Name name = "Hamid";
	//name.Display();

	//Name name;
	//name.read();
	//name.Display();

	//FullName fn ("Hamid","Hassanzada");
	//fn.Display();

	FullName fn;
	fn.read();
	fn.Display();

	return 0;
}
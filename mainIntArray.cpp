#include <iostream>
#include"IntArray.h"
#include "mainIntArray.h"
using namespace sdds;
void display(const IntArray IA) {

	for (unsigned i = 0; i < IA.size(); i++)
	{
		std::cout << IA.element(i) << std::endl;
	}
}
int main() {

	//IntArray I(5);

	//IntArray J = I;
	//IntArray k;
	//k = I;

	IntArray I(5);
	for (unsigned int i = 0; i < I.size(); i++)
	{
		I.element(i) = (i + 1) * 10;
	}
	IntArray IA;
	IA = I;
	for (unsigned i = 0; i < IA.size(); i++)
	{
		std::cout << IA.element(i) << std::endl;
	}
	//display(I);

	return 0;
}
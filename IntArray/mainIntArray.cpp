#include <iostream>
#include"IntArray.h"
#include "mainIntArray.h"
using namespace std;
using namespace sdds;
//void display(const IntArray IA) {
//
//	for (unsigned i = 0; i < IA.size(); i++)
//	{
//		std::cout << IA.element(i) << std::endl;
//	}
//}
void display(const IntArray& IA) {

	for (unsigned i = 0; i < IA.size(); i++)
	{
		for (unsigned i = 0; i < IA.size(); i++)
		{
			//std::cout << IA.element(i) << std::endl;
			i&& cout << ", ";
			cout << IA[i];
		}
		cout << endl;
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
		I[i] = (i + 1) * 10;
	}
	display(I);
	I.Resize(8);
	display(I);

	return 0;
}
#include<iostream>
#include "IntArray.h"
using namespace std;
using namespace sdds;
template<typename T>
void display(const DynArray<T>& IA) {

	for (unsigned i = 0; i < IA.size(); i++)
	{
		//std::cout << IA.element(i) << std::endl;
		i&& cout << ", ";
		cout << IA[i];
	}
	cout << endl;
}

int main() {


	//IntArray I(5);

	//IntArray J = I;
	//IntArray k;
	//k = I;


	//IntArray I(5);
	//for (unsigned int i = 0; i < 30; i++)
	//{
	//	I[i] = (i + 1) * 10;
	//}
	//display(I);
	//I.Resize(8);
	//display(I);
	//I.Resize(3);
	//display(I);

	double a[10] = { 1.2,2.3,3.4,4.3,5.6,6.9,7.7,8.6,9.3,10.23 };
	DynArray<double> I(5);
	I = a;
	display(I);
	I.set(a, 10);
	//I.Resize(10);
	//I = a;
	display(I);


	return 0;
}
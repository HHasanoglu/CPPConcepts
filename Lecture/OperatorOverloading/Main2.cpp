#include<iostream>
#include "Length.h"
using namespace std;
int main() {

	//Length ruler1(10);
	//cout << ruler1.getValue();

	//Length ruler2(20);
	//cout << ruler2.getValue();


	//if (ruler1>=ruler2)
	//{
	//	cout << "Two Objects are not equal";
	//}
	//else
	//{
	//	cout << "Two Objects are equal";
	//}

//--------------------------------------------------------------------

	//Length ruler1(10);
	//Length ruler2(20);

	//cout << ruler1+ruler2;
	//cout << ruler1-ruler2;
	//cout << ruler1*ruler2;
	//cout << ruler1/ruler2;


	//--------------------------------------------------------------------


	//Length ruler1(10);
	//Length ruler2=10;


	//cout << ruler1+ ruler2;
	//cout << ruler1+ 25;


	//--------------------------------------------------------------------Insertion


	//Length ruler1(10);
	//Length ruler2(20);

	//cout << ruler1 << " " << ruler2;
	//cout << 10<<" "<<20;



	//--------------------------------------------------------------------Extraction

	//Length ruler1(10);
	//cin >> ruler1;


	//--------------------------------------------------------------------Extra

	Length ruler1(20);
	Length ruler2(10);
	Length Ruler3 = ruler1 + ruler2;
	ruler1 += ruler2;
	int length = static_cast<int>( ruler1);
	cout << length;


	//----------------------------------------Rule of Three-----------------------------------





	return 0;
}
#include<iostream>
#include "IntegerArray.h"

using namespace std;
void print(const IntegerArray& array) {
	cout << array;
}
int main() {

	IntegerArray numbers1(5);
	numbers1.GenerateNumbers();

	IntegerArray numbers2(numbers1); //Copy Constructor

	//cout<<numbers1.length();
	cout << numbers1;
	cout << numbers2;

	IntegerArray numbers3(3); 
	cout << numbers3;

	//numbers3 = numbers1;             //Copy Assignment
	//cout << numbers3;

	int x = 8 + 2;
	numbers3 = numbers1 + numbers2;
	cout << numbers3;

	print(numbers1);

	return 0;
}
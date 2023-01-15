#include<iostream>
#include "IntArray.h"
using namespace std;
int main() {

	IntArray numbers(5);
	for (int i = 0; i < numbers.length(); i++)
	{
		numbers[i] = 3*i;
	}
	cout << numbers;

	//Copy Constructor
	//IntArray numbers2(numbers);
	IntArray numbers2=numbers;
	cout << numbers2;

	//Copy Assignment
	IntArray numbers3(3);
	cout << numbers3;
	numbers3 = numbers;
	cout << numbers;

	//Rvalue To Copy Assignment

	numbers3 = numbers + numbers2;

	//Rvalue using Move Constructor

	cout << numbers3;

	return 0;
}
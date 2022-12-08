#include<iostream>
#include "Name.h"
using namespace sdds;
using namespace std;
template<typename T>
void SortArray(T* array, int size) {

	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (array[j]>array[j+1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}

}
template<typename T>
void swap(T& a, T& b) {
	int temp = a;
	a = b;
	b = temp;
}
template<typename T>
void Display(T* array,int size) {
	for (int i = 0; i < size; i++)
	{
		i && cout << ", ";
		cout << array[i];
	}
	cout << endl;
}


int main() {
	int array[5] = { 25, 19, 94, 84, 36 };
	Display(array,5);
	SortArray(array, 5);
	Display(array,5);


	double doubleArray[5] = { 22.3, 19.63,94.25, 84.45, 36.89};
	Display(doubleArray, 5);
	SortArray(doubleArray, 5);
	Display(doubleArray, 5);


	Name nameArray[6] = { "Mahdi","Hamid","Ali","AliMohmmad","Nawid","Ehsan"};
	Display(nameArray, 6);
	SortArray(nameArray, 6);
	Display(nameArray, 6);



	return 0;
}
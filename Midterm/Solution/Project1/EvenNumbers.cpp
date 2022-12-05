#include <iostream>
using namespace std;
int EVEN_SIZE = 0;
void display(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void isEven(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i]%2==0)/*missing condition*/
		{
			EVEN_SIZE++;
		}
	}
	int* evenNumbers = new int[EVEN_SIZE] {0};
	// missing line of code for creating heap memory
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenNumbers[j] = arr[i];
			// missing line of code to enter elements from original
			// array to array of even numbers.
			j++;
		}
	}
	cout << "\nArray of Even numbers..." << endl;
	display(evenNumbers, EVEN_SIZE);
}

int main()
{
	int size, number;
	cout << "Enter the number of elements to store in an array: ";
	cin >> size;
	int* ptr = new int[size] { 0 };
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a number to store in array: ";
		cin >> number;
		ptr[i] = number;//missing line of code to enter element to array
	} 
	isEven(ptr, size);

	return 0;
}
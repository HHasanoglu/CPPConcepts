#include <iostream>
using namespace std;
int main()
{
	int number{};
	int* ptrSum = new int(0);
	// missing line of code
	while (true)
	{
		cout << "Enter a number (-1 to quit): ";
		cin >> number;
		if (number==-1)// missing if condition
		{
			break;
		} 
		*ptrSum += number;// missing line for calculating sum from heap
	}
	cout << "Sum in heap: " << *ptrSum << endl;
	cout << "Address of Sum in heap: " << ptrSum << endl;
	delete ptrSum;// deallocating the sum variable in heap
	ptrSum = nullptr;// fixing the dangling pointer

	return 0;
}
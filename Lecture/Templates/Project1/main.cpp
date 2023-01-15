#include<iostream>

using namespace std;

template<typename T>
T GetSum(T* numbers,int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + numbers[i];
	}
	return sum;
}

//double GetSum(double* numbers, int size)
//{
//	double sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum = sum + numbers[i];
//	}
//	return sum;
//}

int main() {

	int numbers[5] = { 1,2,3,4,5 };
	auto totalInt = GetSum(numbers,5);

	double numbers2[5] = { 1.2, 2.3, 3.25, 4.025, 5.12 };
	auto totaldouble = GetSum(numbers2, 5);

	cout << totalInt<<endl;
	cout << totaldouble<<endl;

	return 0;
}
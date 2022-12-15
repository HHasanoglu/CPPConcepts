#include <iostream>
using namespace std;

class Cars
{
	int* numbers{ nullptr };
public:
	Cars();
	~Cars();
};

Cars::Cars()
{
	cout << "class is initialized";
	numbers = new int[5];

	for (int i = 0; i < 5; i++)
	{
		numbers[i] = i * 10;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << endl;
	}

}

Cars::~Cars()
{
	cout << "Class is finalized";
	delete[] numbers;
}

int main() {

	//int size{};
	//cin >> size;

	////int numbers[]{size};

	//int* numbers{ nullptr };
	//numbers = new int[size];

	//for (int i = 0; i < size; i++)
	//{
	//	numbers[i] = i * 10;
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	cout << numbers[i] << endl;
	//}

	//delete[] numbers;
	//numbers = nullptr;

	//cin >> size;

	//numbers = new int[size];

	//for (int i = 0; i < size; i++)
	//{
	//	numbers[i] = i * 10;
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	cout << numbers[i] << endl;
	//}

	Cars araba;






}
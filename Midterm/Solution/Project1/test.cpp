//#include<iostream>
//using namespace std;
//int* resize(int* arr, int* size) {
//	int* newNumbers = new int[*size+1] {};
//	for (int i = 0; i < *size; i++)
//	{
//		newNumbers[i]=arr[i];
//	}
//	//delete[]arr;
//	arr = newNumbers;
//	delete[] newNumbers;
//	newNumbers = nullptr;
//	return arr;
//}
//
//void display(int* arr, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i]<< endl;
//	}
//}
//
//
//
//
//int main() {
//		char answer;
//		int* numbers=new int[0];
//		int size = 0;
//		int correction = 0;
//	do
//	{
//		cout << "Enter a number: ";
//		int num;
//		cin >> num;
//		if (num < 0)
//		{
//			num = 0;
//			cout << "Invalid Entry.Age is set to 0";
//			correction++;
//		}
//
//		cout << "Do you want to enter another number: "<<endl;
//		cin >> answer;
//		numbers[size]=num;
//		size++;
//		resize(numbers, &size);
//	} while (answer=='y'|| answer=='Y');
//	display(numbers, size);
//
//	cout << "Total Records found: " << size << endl;
//	cout << correction << " correction made to input data " << size;
//
//	return 0;
//}
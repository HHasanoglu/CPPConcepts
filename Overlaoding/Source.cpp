#include<iostream>
using namespace std;



int AddValue(int number1, int number2) {


	int total = number1 + number2;

	return total;
}

int AddValue(int number1, int number2, int number3) {


	int total = number1 + number2 + number3;

	return total;
}

double AddValue(double number1, double  number2) {


	double total = number1 + number2;

	return total;
}

double AddValue(double number1, double number2, double number3) {


	double total = number1 + number2 + number3;

	return total;
}




void Introduce(string name = "hamid", string surname = "", int Age = 20) {

	cout << name << endl;
	cout << Age << endl;
}

void Introduce(string name) {

	cout << name << endl;
	cout << 20 << endl;
}

void Introduce(int Age) {

	cout << "Ali" << endl;
	cout << Age << endl;
}

void Introduce() {

	cout << "Ali" << endl;
	cout << 32 << endl;
}


int main() {


	//int x = 5;
	//int y = 6;
	//int z = 8;

	//int sum2=AddValue(x, y);
	//int sum3=AddValue(x, y,z);


	//cout << sum2<<endl;
	//cout << sum3<<endl;

	//double x = 5.3;
	//double y = 6.6;
	//double z = 8.7;

	//double sumdouble2 = AddValue(x, y);
	//double sumdouble3 = AddValue(x, y, z);


	//cout << sumdouble2 << endl;
	//cout << sumdouble3 << endl;



	//string name = "Hamid";
	//int Age = 25;
	//Introduce(name,"aslan");
	//Introduce(name);
	//Introduce();


	int number[5];

	for (int index = 0; index < 5; index++)
	{
		cout << number[index];
	}




	//int number[5]{};













	return 0;
}
#include <iostream>
#include<string>
#include "Car.h"

using namespace std;
using namespace Germany;

int main(){

	Car car1("Ford", 1000, 200, 4);
	double tax = car1.getTax();
	cout << tax;
	Car car2("Nissan",500,150,2);
	Car car3("Tesla",1500,250,2);

	return 0;
}


#ifndef _GERMANY_CAR_H_
#define _GERMANY_CAR_H_
#include <string>
using namespace std;

namespace Germany {

class Car
{
private:
	double tax;
	void evaluateTax();

public:
	Car(string Name, double Price, int speed, int numberOfDoors);

	double getTax();

	string name;
	double price;
	int speed;
	int numberOfDoors;
};

}
#endif // !_SDDS_CAR
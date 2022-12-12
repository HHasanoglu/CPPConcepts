#include "Car.h"

namespace Germany {

	void Car::evaluateTax() {

		tax = price * speed / (100 * numberOfDoors);
	}

	Car::Car(string Name, double Price, int speed, int numberOfDoors) {
		name = Name;
		price = Price;
		this->speed = speed;
		this->numberOfDoors = numberOfDoors;

		evaluateTax();
	}

	double Car::getTax() {

		return tax;
	}
}

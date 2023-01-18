#include<iostream>
#include<iomanip>
#include "FoodOrder.h"
using namespace std;
double g_taxrate;
double g_dailydiscount = 0;
namespace sdds {
	FoodOrder::FoodOrder()
	{
	}
	std::ostream& FoodOrder::display(std::ostream& coutref) const
	{
		static unsigned int counter = 0;
		counter++;
		cout << left;
		if (strlen(this->name)== 0)
		{
			return coutref << setw(2) << counter << ". No Order"<<endl;
		}
		coutref << setw(2) <<counter << ". " << setw(10) << this->name <<"|"<< setw(25) << this->description<<"|"<< fixed << setprecision(2) << setw(12) << this->price * (1+g_taxrate)<<"|";
		if (this->OrderIsDailySpecial)
		{
			coutref <<right<<setw(13) << price * (1 + g_taxrate) / g_dailydiscount << endl;
		}
		else
		{
			coutref << endl;
		}
	}

	void FoodOrder::read(std::istream& cin)
	{

		cin.getline(this->name, 128, ',');
		cin.getline(this->description, 128, ',');
		cin >> this->price;
		cin.ignore();
		char temp;
		cin >> temp;
		this->OrderIsDailySpecial = (temp == 'Y');

		
		//char localName[128]{};
//	Cin.getline(localName,100);
//	Cin.ignore();

//std::cout << localName;
//FoodOrder temp;
//temp.name = "Liz";
//temp.description = "Deluxe Fish Tacos";
//temp.price = 8.99;
//temp.OrderIsDailySpecial = true;
//*this = temp;
	}

	std::ostream& operator<<(std::ostream& left, const FoodOrder& right)
	{
		
		return right.display(left);
	}
	//std::istream& operator>>(std::istream& left, FoodOrder& right)
	//{
	//	return right.read(left);
	//}
}
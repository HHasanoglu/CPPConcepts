#include<iostream>
#ifndef _SDDS_FOODORDER_H_
#define _SDDS_FOODORDER_H_
namespace sdds {
	class FoodOrder
	{
	private:
		char name[12]{};
		char description[25]{};
		double price{};
		bool OrderIsDailySpecial{};
	public:
		FoodOrder();
		std::ostream& display(std::ostream& coutref = std::cout)const;
		void read(std::istream& file);


		friend std::ostream& operator<<(std::ostream& left, const FoodOrder& right);
		//friend std::istream& operator>>(std::istream& left, FoodOrder& right);
	};
}
extern double g_taxrate;
extern double g_dailydiscount;
#endif // !_SDDS_FOODORDER_H_

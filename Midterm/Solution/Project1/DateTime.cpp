#include <iostream>
using namespace std;
class Date
{
	private :
	int day, month, year;
public:
	Date(int day, int month, int year)
	{
		this->day = day;
		if (-100 <= month <= 100)
		{
			this->month = month;
		}else
		{
		this->month = 1;
		} 
		this->year = year;
	} 
	void displayDate()
	{
		cout << "Date: " << day << "-" << month << "-" << year << endl;
	}
};
int main()
{
	Date date = Date(17, 8,2006);
	date.displayDate();
	return 0;
}
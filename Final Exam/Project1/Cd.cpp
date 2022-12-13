#include "Cd.h"
#include <ostream>
using namespace std;
namespace sdds {
	Cd::Cd()
	{
		performers = new char[8];
		label = new char[8];
		strcpy(performers, "Unknown");
		strcpy(label, "Unknown");
		selections = 0;
		playtime = 0.0;
	}

	Cd::Cd(const char* performers, const char* label, int selections, double playtime)
	{
		this->performers = new char[strlen(performers) + 1];
		strcpy(this->performers, performers);
		this->label = new char[strlen(label) + 1];
		strcpy(this->label, label);
		this->selections = selections;
		this->playtime = playtime;
	}

	void Cd::Report()
	{
		cout << "Performers: " << performers << endl;
		cout << "Label: " << label << endl;
		cout << "Selections: " << selections << endl;
		cout << "Playtime: " << playtime << endl;
	}

	std::ostream& operator<<(std::ostream& left, const Cd& name)
	{
		return name.Display(left);
	}

	std::ostream& Cd::Display(std::ostream& coutref) const
	{
		return coutref << label;
	}


	Cd::~Cd()
	{
		delete[] performers;
		delete[] label;
	}
}
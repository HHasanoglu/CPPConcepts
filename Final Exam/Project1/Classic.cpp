#include "Classic.h"
#include<cstring>
using namespace std;

sdds::Classic::Classic()
{
	primaryWork= new char[8];
	primaryWork = "Unknown";
}

sdds::Classic::Classic(const char* primaryWork, const char* performers, const char* label, int selections, double playtime):Cd(performers,label,selections,playtime)
{
	this->primaryWork = new char[strlen(primaryWork) + 1];
	strcpy(this->primaryWork, primaryWork);
}

void sdds::Classic::Report() const
{
	Cd::Report();
	cout << "Primary Work: " << primaryWork << endl;
}


sdds::Classic::~Classic()
{
	delete[] primaryWork;
}

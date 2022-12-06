#include <iostream>
#include "Name.h"
using namespace std;
using namespace sdds;

void SayHello(Name name) {
	cout<<"Hello "<<name<<endl;
}

int main() {

	//Name name1 = "Hamid";
	//cout<<"Hello "<<name1<<endl;
	//cin >> name1;
	//cout<<"Hello "<<name1<<endl;

	//Name name2 = "Ali";
	//name1 = name2;

	//Name& name2 = name1;
	//name1 = name2;

	//cout << name1<<endl;
	//cout << name2<<endl;

	//Name name2;
	//name1 = name2;

	char newName[200];
	Name name1 = "Hamid";
	//SayHello(name1);

	strcpy(newName, name1);

	cout << newName;
	cout << endl;
	cout << int(name1);


	cout << endl;
	cout << endl;
	cout << endl;
	return 0;
}
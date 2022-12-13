#include <iostream>
#include "Cd.h"
#include "Classic.h"
using namespace std;
using namespace sdds;

int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);

    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);

    
    Cd* parentptr = &c1; // Create a parent pointer and make it point to Cd object

    cout << c1;
    cout << "***************************" << endl;

    c1.Report();               // Call Report() using Cd object

    c2.Report();               // Call Report() using Classic object

    cout << c2;
    cout << "***************************" << endl;

    parentptr->Report();       // Call Report() using Cd type pointer created above

    parentptr = &c2;           // Make ptr point to Classic Object

    parentptr->Report();       // Call Report() using Cd type pointer containing Classic object address

    return 0;
}

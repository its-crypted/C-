#include <iostream>
#include "people.h"

#include "birthday.h"
using namespace std;

people::people(string x, bdayC bo)
: name(x), dob(bo)
{
}

void people::printInfo() {
	cout << name << " was born on ";
	dob.printDate();
}

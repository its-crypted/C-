#include <iostream>
#include "birthday.h"
using namespace std;

bdayC::bdayC(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void bdayC::printDate(){
	cout << month << "/" << day << "/" << year << endl;
}

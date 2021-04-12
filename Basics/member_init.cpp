#include <iostream>
#include "member_init.h"

using namespace std;

piClass::piClass(int a, int b)
: regVar(a), 
constVar(b)
{
}

void piClass::print() {
	cout << "regular var is: " << regVar << " const var is: " << constVar << endl;
}

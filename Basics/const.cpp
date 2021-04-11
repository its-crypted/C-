#include "const.h"
#include <iostream>

using namespace std;

//piClass::piClass()
//{
//	cout << "Constructor" << endl;
//}

void piClass::printSh(){
	cout << "I'm a regular function" << endl;
}

void piClass::printSh2() const {
	cout << "I'm a constant function" << endl;
}

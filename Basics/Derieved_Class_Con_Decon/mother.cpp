#include "mother.h"
#include "daughter.h"
#include <iostream>


using namespace std;

Mother::Mother() 
{
	cout << "I'm mother constructor" << endl;
}

Mother::~Mother()
{
	cout << "I'm mother deconstructor" <<endl;
}

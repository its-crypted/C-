#include "mother.h"
#include "daughter.h"
#include <iostream>

using namespace std;

Daughter::Daughter()
{
	cout << "I'm Daughter Constructor" << endl;
}

Daughter::~Daughter()
{
	cout << "I'm a Daughter Deconstructor" << endl;
}

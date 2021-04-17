#include "mother.h"
#include "daughter.h"
#include <iostream>

//This is called the base class form which we're inheriting

using namespace std;

Mother::Mother() 
{
}

void Mother::sayName(){
	cout <<  "I'm a Robnert!" << endl;
}

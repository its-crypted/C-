#include <iostream>

using namespace std;

//Unary scope resolution operator.
//This is used when there are same varible withdifferent data type.
//eg. int tuna & double tuna

int tuna = 69;	//These are called global variables

int main()
{
	int tuna = 20;	// These are called local variables.
	cout << ::tuna << endl;// this will use the global variable.
	return 0;
}


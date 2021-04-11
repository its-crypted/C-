#include <iostream>
#include "const.h"

//const is used to make the variable static and not changeable

using namespace std;

int main()
{
	//const int x = 3; //you cannot change the value of x now.
	//x = 5;
	//cout << x << endl;
	
	piClass obj;
	obj.printSh(); 

	const piClass constObj;
	constObj.printSh2();

	return 0;
}

#include <iostream>
#include "sallyc.h"

//There is a different way to access the method(stuff) using pointer.

using namespace std;

int main()
{
	sallyc sallyObj;
	sallyc *sallyPointer = &sallyObj;

	sallyObj.printCrap();
	sallyPointer->printCrap();
	return 0;
}

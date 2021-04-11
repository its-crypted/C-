#include <iostream>
//Pointer is a special type of varible which contain a memory address as value.
//Pointer can store hexadecimal values which are in the RAM registers.
using namespace std;

int main()
{
	int fish = 5;
	//&fish: This means the address of fish variable in the memory
	//& is a memory address operator.
	cout << &fish << endl;

 // give the type of data which pointer is going to point like int float, etc.
 	int *fishPointer;
	fishPointer = &fish;
	cout << fishPointer << endl;
	return 0;
}

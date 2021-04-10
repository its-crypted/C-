#include <iostream>

using namespace std;

int main()
{
	//x += 5; x*=5; x/=5; x-=5
	int x = 20;
	cout << x++ << endl; // x will print first and then inc i.e 20.
	cout << x << endl;  // this will print incremented value i.e 21;

	cout << ++x << endl;  //this will increment x first and print x
	cout << x << endl;
	// also have --x & x--
	return 0;
}

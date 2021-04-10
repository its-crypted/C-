#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0)); //seed a random number; value of time changes 
//the resluts produced will be different everytime
	for(int x = 1; x < 10; x++) {
		cout << 1 + rand() % 6 << endl;//%6 will give the reaminder.
	}
	return 0;
}

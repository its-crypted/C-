#include <iostream>
using namespace std;

template <class pi>

pi addCrap(pi a, pi b) {
	return a + b;
}

int main()
{
	int x = 7, y = 43, z;
	z = addCrap(x,y);
	cout << z << endl;
	return 0;
}

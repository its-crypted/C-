#include <iostream>
using namespace std;

template <class FIRST, class SECOND> 
FIRST smaller(FIRST a, SECOND b) {
	return (a < b?a:b);	//a is less than b ?(return) a :(if not) return b;
}

int main()
{
	int x = 87;
	double y = 56.78;
	cout << smaller(x,y) << endl;
	return 0;
}

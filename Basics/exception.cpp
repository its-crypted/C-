#include <iostream>
using namespace std;

int main()
{
	try {
		int momsAge = 30;
		int sonsAge = 54;
		
		if ( sonsAge > momsAge) {
			throw 99;
		}
	} catch(int x) {
		cout << "Son cannot be older than mom, Error Number: " << x << endl;
	}
	return 0;
}

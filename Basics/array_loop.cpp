#include <iostream>

using namespace std;

int main()
{
	int pi[9];	// 9 integer element array

	cout << "Element - Value" << endl;

	for(int x = 0; x < 9; x++) {
		pi[x] = 99;
		cout << x << "  -----  " << pi[x] << endl;
	}
	return 0;
}

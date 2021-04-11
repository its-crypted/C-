#include <iostream>

using namespace std;

int main()
{
	int tun[5] = {23, 34, 44, 25, 90};
	int sum = 0;
	
	for(int x = 0; x < 5; x++) {
		sum += tun[x];
	}

	cout << sum << endl;

}

#include <iostream>

using namespace std;

int factorial(int x) {
	if(x == 1 || x == 0){
		return 1;
	}else{
		return x*factorial(x-1);
	}
}

int main()
{
	cout << factorial(5) << endl;
	return 0;
}

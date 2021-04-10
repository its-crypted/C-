#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter your age.\n";
	cin >> age;
	int money;
	cout << "Enter money you have.\n";
	cin >> money;

	if(age > 21 && money > 500){ //we can use or as || in statement
		cout << "your are allowed in\n";
	}

	return 0;
}

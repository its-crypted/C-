#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter your age." << endl;
	cin >> age;

	switch(age){
		case 16:
			cout << "You can drive now" << endl;
			break;
		case 18:
			cout << "Lotto tickets" << endl;
			break;
		case 21:
			cout << "By beer" << endl;
			break;
		default:
			cout << "Wrong input" << endl;
	}
	return 0;
}

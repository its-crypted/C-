#include <iostream>

using namespace std;

int main()
{
	int age;
	int ageTotal = 0;
	int number = 0;

	cout << "Enter first persons age or -1 to quit" << endl;
	cin >> age;

	while(age != -1) {
		ageTotal = ageTotal + age;
		number++;
		cout << "Enter next persons age or -1 to quit" << endl;
		cin >> age;
	}

	cout << "Number of people entered: " << number << endl;
	cout << "Average age: " << ageTotal/number << endl;
	return 0;
}

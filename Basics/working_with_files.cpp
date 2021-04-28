#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int getwant();
void displayItems(int x);

int main()
{
	int want;
	want = getwant();
	
	while (want != 4) {
		switch(want) {
			case 1:
				displayItems(1);
				break;
			case 2:
				displayItems(2);
				break;
			case 3:
				displayItems(3);
				break;
		}
		want = getwant();
	}
	return 0;
}

int getwant() {
	int choice;

	cout << "1 - Just palin items" << endl;
	cout << "2 - helpful items" << endl;
	cout << "3 - harmful items" << endl;
	cout << "4 - quit program" << endl;

	cin >> choice;
	return choice;
}

void displayItems(int x) {
	ifstream objectFile("objects.txt");
	string name;
	double power;

	if(x == 1) {
		while (objectFile >> name >> power) {
			if (power == 0) {
				cout << name << ' ' << power << endl;
			}
		}
	}

	if(x == 2) {
		while (objectFile >> name >> power) {
			if (power > 0) {
				cout << name << ' ' << power << endl;
			}
		}
	}

	if(x == 3) {
		while (objectFile >> name >> power) {
			if (power < 0) {
				cout << name << ' ' << power << endl;
			}
		}
	}
}

#include <iostream>
#include <fstream>
using namespace std;
int getwant();
int main()
{
	int want;
	want = getwant();
	
	while (want !=4) {
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
}

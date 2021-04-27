#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
	ofstream theFile("players.txt");
	
	cout << "Enter players ID, Name, and Money" << endl;
	cout << "press <Ctrl+D> to quit\n" << endl;
	int idnum;
	string name;
	double money;

	while ( cin >> idnum >> name >> money) {
		theFile << idnum << ' ' << name << ' ' << money << endl;
	}
	return 0;
}

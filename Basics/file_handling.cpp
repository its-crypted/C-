#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream pifile("jerky.txt");
	
	if (pifile.is_open()) {
		cout << "Ok file is open" << endl;
	} else {
		cout << "you messed up" << endl;
	}

	pifile << "Entering jerky.txt \n";
	pifile.close();

}

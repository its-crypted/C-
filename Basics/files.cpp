#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream pifile;
	pifile.open("tuna.txt");
	
	pifile << "I'm entering into tina.txt" << endl;
	pifile.close();
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pi;
	//cin >> pi;
	//cout << "string entered is " << pi << endl;
	getline(cin, pi); //this can get a sentence
	cout << pi << endl;

	string s1("hampster ");
	string s2;
	string s3;

	s2 = s1; //copying a string
	s3.assign(s1);

	cout << s1 << s2 << s3 <<endl;

	string x = 'omgwtfbbq';
	cout << s1.at(3) << endl;	// will give out the char at index 3

	// s1.length() will give you length of string.
	return 0;
}

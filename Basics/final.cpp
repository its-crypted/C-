#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("hi my name is pi and I'm computer engineer");
	cout << s1 << endl;
	//s1.erase(20);
	s1.replace(14, 2, "root");
	s1.insert(14, "toor ");
	cout << s1 << endl;
	return 0;
}

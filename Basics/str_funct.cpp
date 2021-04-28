#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1("OMG it a string!!");
	cout << s1.substr(17, 7) << endl;	// 17 is the char to begin with and 7 is the stopping char
	
	//swap functin
	string one("apples");
	string two("beans");

	cout << one << two << endl;
	one.swap(two);	//one will have value of two and vice versa

	//find function
	string s("ham is spam oh yes I am!");
	cout << s.find("am") << endl;
	cout << s.rfind("am") << endl;	//reverse find
	return 0;
}

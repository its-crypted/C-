#include <iostream>
#include <string>
using namespace std;

//constructors never have a return type.
//constructor name is always same as the class name.
//the main motive of constructors is to get variables 
//an initial value.


class piClass {
	public:
		piClass(string z){
			setName(z);
		}
		void setName(string x){
			name = x;
		}
		string getName() {
			return name;
		}
	private:
		string name;
};

int main()
{
	piClass bo("This is a string passed as constructors obj");	//while creating the obj the constructor will execute 
	cout << bo.getName();

	return 0;
}

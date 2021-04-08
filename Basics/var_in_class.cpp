#include <iostream>
#include <string>
using namespace std;
//variables in classes
//don't make variables of class public
class piClass {
	public:
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
	piClass bo;
	bo.setName("Pi");
	cout << bo.getName();
	return 0;
}

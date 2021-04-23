#include <iostream>
#include <string.h>

using namespace std;

class emp{
	public:
	string Name;
	string ID;
	string Cell;
	string Company;
};

int main(){
	int num;
	cout << "Enter the Number of Employees - " << endl;
	cin >> num;

	for (int i = 0; i < num; i++) {
		emp obj;
		cout << "Enter employeed name - " << endl;
		cin >> obj.Name;
		cout << "Enter emplyeed ID - " << endl;
		cin >> obj.ID;
		cout << "Enter employee cell - " << endl;
		cin >> obj.Cell;
		cout << "Enter employee Company - " << endl;
		cin >> obj.Company;
	}

	return 0;

}

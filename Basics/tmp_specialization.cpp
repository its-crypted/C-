#include <iostream>
using namespace std;

template <class T>
class pi {
	public:
		pi(T x) {
			cout << x << " is not a character!" <<endl;
		}
};

template<>
class pi<char> {
	public:
		pi(char x) {
			cout << x << " is indeed is a character!" << endl;
		}
};

int main()
{
	pi<int> obj1(7);
	pi<double> obj2(345.234);
	pi<char> obj3('q');
	return 0;
}

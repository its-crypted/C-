#include <iostream>
using namespace std;

template <class T>
class pi {
	T  first, second;
	public:
		pi(T a, T b) {
			first = a;
			second = b;
		}
		T bigger();
};

template <class T>
T pi<T>:: bigger() {
	return (first > second ? first : second);
}

int main()
{
	pi <int> bo(69, 234);
	cout << bo.bigger();
	return 0;
}

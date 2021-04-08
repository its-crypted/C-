#include <iostream>

using namespace std;

class mast{
	public:		//called as access specifier
		void cool(){
			cout << "This is class" << endl;
		}
};

int main()
{
	mast mast_obj;
	mast_obj.cool();
	return 0;
}

#include <iostream>
#include "people.h"
#include "birthday.h"

using namespace std;

int main() {
	
	bdayC birthObj(12,9,1998);

	people pi("Pi Matrix", birthObj);
	pi.printInfo();
}

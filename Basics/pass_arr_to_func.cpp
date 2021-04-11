#include <iostream>

using namespace std;
void printArray(int arr[], int sizeOfArray);
int main()
{
	int pi[3] = {23, 34, 89};
	int jessica[6] = {55, 20, 90, 34, 48, 19};
	printArray(pi, 3);
	printArray(jessica, 6);
	return 0;
}

void printArray(int arr[], int sizeOfArray) {
	for(int x = 0; x < sizeOfArray; x++) {
		cout << arr[x] << endl;
	}
}

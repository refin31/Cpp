#include <iostream>

using namespace std;

int main() {
	
	int number = 5;
	int i;
	
	for (i = 1; i <= 100; i++) {
		cout << number << " x " << i << " = " << number * i << endl;
	}
	
	return 0;
}
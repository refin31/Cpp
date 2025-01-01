#include <iostream>

using namespace std;

int main() {
	
	int countdown = 10;
	
	do {
		cout << "Hitung mundur: ";
		cout << countdown << endl;
		countdown--;
	} while (countdown >= 0);
	
	return 0;
}
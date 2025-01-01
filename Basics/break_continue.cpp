#include <iostream>

using namespace std;

int main() {
	
	// For Break
	cout << "===== For Break ===== \n";
	for (int i = 0; i <= 10; i++) {
		
		cout << i << endl;
		
		if (i == 5) {
			break; // the number will stop at 5
		}
	}
	
	// Continue
	cout << "===== For Continue ===== \n";
	for (int i = 0; i <= 10; i++) {
		
		if (i == 5) {
			continue; // 5 will be skipped
		}
		cout << i << endl;
	}
	
	// While Break
	cout << "===== While Break ===== \n";
	int i = 0;
	
	while (i <= 10) {
		cout << i << endl;
		if (i == 5) {
			break;
		}
		i++;
	}
	
	// Continue
	cout << "===== While Continue ===== \n";
	i = 0;
	
	while (i <= 10) {
		
		i++;
		if (i == 5) {
			continue;
		}
		cout << i << endl;
	}
	
	// Do While Break
	cout << "===== Do While ===== \n";
	i = 0;
	
	do {
		cout << i << endl;
		if (i == 5) {
			break;
		}
		i++;
	} while (i <= 10);
	
	// Do While Continue
	cout << "===== Do While Continue ===== \n";
	i = 0;
	
	do {
		i++;
		if (i == 5) {
			continue;
		}
		cout << i << endl;
	} while (i <= 10);
	
	
	return 0;
}
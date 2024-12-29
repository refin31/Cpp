#include <iostream>

using namespace std;

int main() {
	
	int day;
	
	cout << "Enter the day number (1-7): ";
	cin >> day;
	
	switch (day) {
		case 1:
			cout << "Monday";
			break; // untuk mengakhiri case
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			break;
		case 5:
			cout << "Friday";
			break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default: // untuk dijalankan jika tidak ada kasus yang cocok
			cout << "Invalid number";
	}
	
	return 0;
}
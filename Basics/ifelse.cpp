#include <iostream>

using namespace std;

int main() {
	
	// Program door code
	int doorCode = 1991;
	int code;
	
	cout << "Enter the door code: ";
	cin >> code;
	
	if (code == doorCode) {
		cout << "Yeah! the code is correct\n";
	} else {
		cout << "Sorry, the code is wrong\n";
	}
	
	// Program voting age
	int age;
	int votingAge = 18;
	
	cout << "Enter your age: ";
	cin >> age;
	
	if (age >= votingAge) {
		cout << "Old enough to vote!\n";
	} else {
		cout << "Not old enough to vote.\n";
	}

	// Program +/- number
	int myNum; // Is this a positive or negative number?
	
	cout << "Enter number: ";
	cin >> myNum;
	
	if (myNum > 0) {
		cout << "The value is a positive number.\n";
	} else if (myNum < 0) {
		cout << "The value is a negative number.\n";
	} else {
		cout << "The value is 0.\n";
	}
	
	return 0;
}

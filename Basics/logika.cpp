#include <iostream>

using namespace std;

int main() {
	
	int a = 3;
	int b = 2;
	
	bool hasil;
	
	// Operator logika: not, and, or
	
	// not : Membalikkan hasil, true menjadi false / false menjadi true
	cout << "=====NOT=====\n";
	hasil = !(a == 3); // false
	cout << hasil << endl;
	
	// and : Kedua nilai harus benar untuk menghasilkan true
	cout << "=====AND=====\n";
	hasil = (a == 3 and b == 2); // 1 and 1 = 1
	cout << hasil << endl;
	hasil = (a == 4 and b == 2); // 0 and 1 = 0
	cout << hasil << endl;
	hasil = (a == 3 && b == 3); // 1 and 0 = 0
	cout << hasil << endl;
	hasil = (a == 4 && b == 3); // 0 and 0 = 0
	cout << hasil << endl;
	
	// or : Salah satu nilai harus benar untuk menghasilkan true
	cout << "=====OR=====\n";
	hasil = (a == 3 or b == 2); // 1 or 1 = 1
	cout << hasil << endl;
	hasil = (a == 4 or b == 2); // 0 or 1 = 1
	cout << hasil << endl;
	hasil = (a == 3 || b == 3); // 1 or 0 = 1
	cout << hasil << endl;
	hasil = (a == 4 || b == 3); // 0 or 0 = 0
	cout << hasil << endl;
	
	// not and
	hasil = (!(a == 4 and b == 2)); // 0 not and 1 = 1
	cout << hasil << endl; // returns true (1) because ! (not) is used to reverse the result
	
	// not or
	hasil = (!(a == 4 or b == 2)); // 0 not and 1 = 0
	cout << hasil << endl; // returns false (0) because ! (not) is used to reverse the result
	
	return 0;
}
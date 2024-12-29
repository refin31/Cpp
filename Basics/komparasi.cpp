#include <iostream>

using namespace std;

int main() {
	
	int a = 2;
	int b = 2;
	
	bool hasil1, hasil2;
	
	// Komparasi, relation expression
	
	// Sebanding
	hasil1 = a == b;
	cout << hasil1 << endl; // 1 (true)
	// Tidak sebanding
	hasil2 = a != b;
	cout << hasil2 << endl; // 0 (false)
	
	// Kurang dari
	hasil1 = a < b;
	cout << hasil1 << endl; // 0 (false)
	// Lebih dari
	hasil2 = a > b;
	cout << hasil2 << endl; // 0 (false)
	
	// Kurang dari sama dengan
	hasil1 = a <= b; // 1 (true)
	cout << hasil1 << endl;
	// Lebih dari sama dengan
	hasil2 = a >= b; // 1 (true)
	cout << hasil2 << endl;
	
	return 0;
}
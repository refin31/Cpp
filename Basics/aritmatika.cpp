#include <iostream>

using namespace std;

int main(){

	int a = 8;
	int b = 4;
	int hasil;
	// operator: +, -, *, /, %
	
	// penjumlahan
	hasil = a + b; // 12 (8 + 4)
	cout << a << " + " << b << " = " << hasil << endl;
	
	// pengurangan
	hasil = a - b; // 4 (8 - 4)
	cout << a << " - " << b << " = " << hasil << endl;
	
	// perkalian
	hasil = a * b; // 32 (8 × 4)
	cout << a << " × " << b << " = " << hasil << endl;
	
	// pembagian
	hasil = a / b; // 2 (8 : 2)
	cout << a << " : " << b << " = " << hasil << endl;
	
	// modulus
	hasil = a % b; // 0 (8 % 4)
	cout << a << " % " << b << " = " << hasil << endl;
	
	// urutan eksekusi
	hasil = a + b * a; // 40 (8 + 4 × 8)
	cout << a << " + " << b << " × " << a << " = " << hasil << endl;
	
	return 0;
}
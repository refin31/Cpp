#include <iostream>

using namespace std;

int main() {
 
 int a = 5;
 
 // pointer
 int *aPtr = nullptr; // nullptr = address kosong
 aPtr = &a;
 
 cout << "Nilai a = " << a << endl;
 cout << "Alamat a = " << aPtr << endl;
 
 // dereferencing, mengambil data dari pointer
 a = 10;
 cout << "Nilai dari pointer *aPtr = " << *aPtr << endl;
 
 return 0;
}
#include <iostream>

using namespace std;

int main() {
 
 int a = 5;
 
 cout << "Nilai a = " << a << endl;
 cout << "Address a = " << &a << endl << endl;
 
 // reference
 int &b = a;
 
 cout << "Nilai b = " << b << endl;
 cout << "Address b = " << &b << endl << endl;
 
 b = 10;
 
 cout << "Nilai a = " << a << endl;
 cout << "Nilai b = " << b << endl << endl;
 
 a = 20;
 
 cout << "Nilai a = " << a << endl;
 cout << "Nilai b = " << b << endl;
 
 return 0;
}
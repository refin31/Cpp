#include <iostream>

using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main() {
 
 int a = 5;
 
 cout << "Nilai a = " << a << endl;
 cout << "Address a = " << &a << endl << endl;
 
 fungsi(&a); // fungsi dengan input pointer
 kuadrat(&a);
 
 cout << "Nilai a = " << a << endl;
 
 return 0;
}

void fungsi(int *b) {
 cout << "Nilai b = " << *b << endl << endl; // dereferencing
 cout << "Address b = " << b << endl << endl;
}

void kuadrat(int *valPtr) {
 *valPtr = *valPtr * *valPtr;
}

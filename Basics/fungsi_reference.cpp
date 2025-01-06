#include <iostream>

using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main() {
 int a = 5;
 
 cout << "Nilai a = " << a << endl;
 cout << "Address a = " << &a << endl;
 
 //fungsi(a);
 kuadrat(a);
 cout << "Nilai a = " << a << endl;
 
 return 0;
}

void fungsi(int &b) {
 b = 10;
 cout << "Nilai b = " << b << endl;
 cout << "Address b = " << &b << endl;
}

void kuadrat(int &nilaiRef) {
 nilaiRef = nilaiRef * nilaiRef;
}
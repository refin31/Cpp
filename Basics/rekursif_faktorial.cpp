#include <iostream>

using namespace std;

int faktorial(int x);

int main() {
 
 int nilai, hasil;
 
 cout << "Faktorial: ";
 cin >> nilai;
 
 hasil = faktorial(nilai);
 
 cout << "\nHasil faktorial: " << hasil << endl;
 
 return 0;
}

int faktorial(int x) {
 if (x <= 1) {
  cout << x;
  return x;
 } else {
  cout << x << " * ";
  return x * faktorial(x - 1);
 }
}
#include <iostream>

using namespace std;

long fibonacci(long x);

int main() {
 
 long nilai, hasil;
 
 cout << "Menghitung fibonacci ke: ";
 cin >> nilai;
 
 hasil = fibonacci(nilai);
 
 cout << hasil << endl;
 
 return 0;
}

long fibonacci(long x) {
 cout << x << endl;
 if (x == 0 || x == 1){
  return x;
 } else {
  return fibonacci(x - 1) + fibonacci(x - 2);
 }
}
#include <iostream>

using namespace std;

// Prototype
double tambah(double x, double y);
void println(double z);

int main() {
 
 double nilai1, nilai2, hasil;
 
 cout << "Masukan nilai x: ";
 cin >> nilai1;
 cout << "Masukan nilai y: ";
 cin >> nilai2;
 
 hasil = tambah(nilai1, nilai2);
 
 println(hasil);
 
 return 0;
}

double tambah(double x, double y) {
 return x + y;
}

void println(double z){
 cout << z << endl;
}
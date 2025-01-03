#include <iostream>

using namespace std;

// Fungsi menghitung luas persegi panjang
double luasPersegiPanjang (double panjang, double lebar) {
 double luas = panjang * lebar;
 return luas;
}

// Fungsi menghitung keliling persegi panjang
double kelilingPersegiPanjang (double panjang, double lebar) {
 double keliling = 2 * (panjang + lebar);
 return keliling;
}

int main() {
 
 double panjang, lebar;
 
 cout << "Panjang: ";
 cin >> panjang;
 cout << "Lebar: ";
 cin >> lebar;
 
 cout << "Luas: " << luasPersegiPanjang(panjang, lebar) << endl;
 cout << "Keliling: " << kelilingPersegiPanjang(panjang, lebar) << endl;

 return 0;
}
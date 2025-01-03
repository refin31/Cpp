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

// Fungsi menampilkan luas
void tampilkanLuas (double panjang, double lebar) {
 cout << "Luas: " << luasPersegiPanjang(panjang, lebar) << endl;
}

// Fungsi menampilkan keliling
void tampilkanKeliling(double panjang, double lebar) {
 cout << "Keliling: " << kelilingPersegiPanjang(panjang, lebar) << endl;
}

int main() {
 
 double panjang, lebar;
 
 cout << "Panjang: ";
 cin >> panjang;
 cout << "Lebar: ";
 cin >> lebar;
 
 tampilkanLuas(panjang, lebar);
 tampilkanKeliling(panjang, lebar);
 
 return 0;
}

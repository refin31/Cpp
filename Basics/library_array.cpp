#include <iostream>
#include <array>

using namespace std;

int main() {
 
 // membuat array dengan standart library
 // array <int, jumlah array> nama array
 array <int, 5> nilai;
 
 for (int i = 0; i <= 4; i++) {
  nilai[i] = i;
  cout << "Nilai [" << i << "] = " << nilai[i] << " Address: " << &nilai[i] << endl;
 }
 
 cout << endl;
 // ukuran array
 cout << "Jumlah: " << nilai.size() << endl;
 // address awal dari array
 cout << "Address awal: " << nilai.begin() << endl;
 // address akhir dari array
 cout << "Address akhir: " << nilai.end() << endl;
 // ambil nilai dengan index
 cout << "Nilai ke-2 = " << nilai.at(2) << endl;
 
 return 0;
}
#include <iostream>

using namespace std;

int main() {
 
 int nilai[5];
 nilai[0] = 0;
 nilai[1] = 1;
 nilai[2] = 2;
 nilai[3] = 3;
 nilai[4] = 4;
 
 cout << &nilai[0] << " Nilai = " << nilai[0] << endl;
 cout << &nilai[1] << " Nilai = " << nilai[1] << endl;
 cout << &nilai[2] << " Nilai = " << nilai[2] << endl;
 cout << &nilai[3] << " Nilai = " << nilai[3] << endl;
 cout << &nilai[4] << " Nilai = " << nilai[4] << endl;
 
 int *ptr = nilai;
 *(ptr + 2) = 8; // mengubah nilai array ke-3 menjadi 8
 nilai[4] = 10; // mengubah nilai array ke-5 menjadi 10
 
 cout << endl;
 cout << &nilai[0] << " Nilai = " << nilai[0] << endl;
 cout << &nilai[1] << " Nilai = " << nilai[1] << endl;
 cout << &nilai[2] << " Nilai = " << nilai[2] << endl;
 cout << &nilai[3] << " Nilai = " << nilai[3] << endl;
 cout << &nilai[4] << " Nilai = " << nilai[4] << endl;
 
 cout << "Ukuran array = " << sizeof(nilai) << " byte" << endl;
 cout << "Jumlah member array= " << sizeof(nilai) / sizeof(int) << endl;
 
 return 0;
}
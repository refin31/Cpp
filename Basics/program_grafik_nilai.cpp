#include <iostream>
#include <array>

using namespace std;

int main() {
 
 array <int, 10> nilai;
 
 cout << "Program Grafik Nilai" << endl << endl;
 
 for (int i = 0; i <= nilai.size(); i++) {
  cout << "Jumlah mahasiswa dengan nilai = ";
  if (i == 0) {
   cout << "0-9  : ";
  } else if (i == 10) {
   cout << "100  : ";
  } else {
   cout << i*10 << "-" << (i*10) + 9 << ": ";
  }
  cin >> nilai[i];
 }
 
 cout << "\nGrafik Nilai\n" << endl;
 
 for (int i = 0; i <= nilai.size(); i++) {
  if (i == 0) {
   cout << "0-9  : ";
  } else if (i == 10) {
   cout << "100  : ";
  } else {
   cout << i*10 << "-" << i*10+9 << ": ";
  }
  for (int bintang = 0; bintang < nilai[i]; bintang++) {
   cout << "*";
  }
  cout << "\n";
 }
 
 return 0;
}
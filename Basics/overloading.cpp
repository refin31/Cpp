#include <iostream>

using namespace std;

// overloading = menimpa

// basic function
int luas_kotak (int panjang, int lebar) {
 int luas = panjang * lebar;
 return luas;
}

// overload function
int luas_kotak (int sisi) {
 int luas = sisi * sisi;
 return luas;
}

double luas_kotak (double sisi) {
 double luas = sisi * sisi;
 return luas;
}

int main () {
 
 cout << "Luas kotak 2×3: " << luas_kotak(2, 3) << endl;
 cout << "Luas kotak 2×2: " << luas_kotak(2) << endl;
 cout << "Luas kotak 2.5×2.5: " << luas_kotak(2.5) << endl;
 
 return 0;
}
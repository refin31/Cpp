#include <iostream>
#include <array>

using namespace std;

int main() {
 
 /*
		for(declarasi variabel : array){
			statemen
		}
	*/
 
 array <int, 10> nilaiArray = {0,1,2,3,4,5,6,7,8,9};
 //int nilaiArray[10] = {0,1,2,3,4,5,6,7,8,9};
 
 for (int nilai : nilaiArray) {
  cout << "Address = " << &nilai << " Nilai = " << nilai << endl;
  nilai = 1; // tidak merubah array
 }
 
 cout << endl;
 // memanipulasi array dengan menggunakan referensi
 for (int &nilaiRef : nilaiArray) {
  nilaiRef *= 2;
  cout << "Address = " << &nilaiRef << " Nilai = " << nilaiRef << endl;
 }
 
 return 0;
}
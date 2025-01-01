#include <iostream>

using namespace std;

int main() {
	
	int nilaiN; // nilai n
	int fibN; // hasil perhitungan
	int fibN0; // nilai awal Fibonacci
	int fibN1; // nilai kedua Fibonacci
	
	cout << "===== FIBONACCI ===== \n";
	cout << "Masukan nilai n (positif): ";
	cin >> nilaiN;
	
	fibN0 = 0;
	fibN1 = 1;
	
	// Validasi input
	while (nilaiN <= 0) {
		cout << "Nilai n harus positif, masukan kembali: ";
		cin >> nilaiN;
	}
	
	cout << fibN0 << " " << fibN1 << " ";
	
	for (int i = 1; i < nilaiN-1; i++) {
		fibN = fibN0 + fibN1;
		fibN0 = fibN1;
		fibN1 = fibN;
		cout << fibN << " ";
	}
	
	return 0;
}
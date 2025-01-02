#include <iostream>
#include <cstdlib> // contains the random function
#include <ctime> // contains the srand function

using namespace std;

int main() {
	
	srand(time(0)); // Inisialisasi seed
	
	char pilih;
	int dadu;
	
	while (true) {
		cout << "Lempar dadu? (y/n): ";
		cin >> pilih;
		if (pilih == 'y' || pilih == 'Y') {
			dadu = 1 + (rand() % 6);
			cout << "Hasil lemparan dadu: " << dadu << endl;
		} else if (pilih == 'n' || pilih == 'N') {
			break;
		} else {
			cout << "Pilihan salah. Coba lagi" << endl;
		}
	} 
	
	return 0;
}
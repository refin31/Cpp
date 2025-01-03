#include <iostream>

using namespace std;

int kuadrat(int x) {

    int y;
    y = x * x;

    return y;
}

int tambah(int x, int y) {

    int c;
    c = x + y;

    return c;
}

int kurang(int x, int y) {
	
	return x - y;
}

int main() {

    int input, nilaiX, nilaiY, nilaiF, nilaiZ, hasil, hasil2, hasil3;
    
    cout << "Nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);

    cout << hasil << endl;
    
    cout << "Penjumlahan \n";
    cout << "Masukan nilai x: ";
    cin >> nilaiX;
    cout << "Masukan nilai y: ";
    cin >> nilaiY;
    
    hasil2 = tambah(nilaiX, nilaiY);
    
    cout << hasil2 << endl;
    
    cout << "Pengurangan \n";
    cout << "Masukan nilai f: ";
    cin >> nilaiF;
    cout << "Masukan nilai z: ";
    cin >> nilaiZ;
    
    hasil3 = kurang(nilaiF, nilaiZ);
    
    cout << hasil3 << endl;

    return 0;
}
#include <iostream>
#include <algorithm>

const size_t arraySize = 10;

void printArray (std::array <int, arraySize> angka) {
 std::cout << "Array: ";
 for (int &a : angka) {
  std::cout << a << " ";
 }
 std::cout << std::endl;
}

int main() {
 
 int angkaCari;
 bool find;
 
 std::array <int, arraySize> angka = {9, 4, 6, 7, 8, 1, 3, 2, 5, 0};
 printArray(angka);
 
 std::cout << "Mencari angka di array" << std::endl << "Masukan angka: ";
 std::cin >> angkaCari;
 
 std::sort(angka.begin(), angka.end());
 printArray(angka);
 
 find = std::binary_search(angka.begin(), angka.end(), angkaCari);
 
 if (find) {
  std::cout << "Found!";
 } else {
  std::cout << "Not Found!";
 }
 
 std::cout << std::endl;
 
 return 0;
}
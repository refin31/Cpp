#include <iostream>
#include <string>

int main() {
 
 std::string city("tokyo");
 std::cout << city << std::endl;
 
 std::string animal;
 std::cout << "Input: ";
 std::cin >> animal;
 std::cout << "Data yang anda input = ";
 std::cout << animal;
 std::cout << std::endl;
 
 return 0;
}
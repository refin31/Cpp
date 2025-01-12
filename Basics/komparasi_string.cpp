#include <iostream>
#include <string>

using namespace std;

int main() {
 
 string input;
 string key = "Hello!";
 
 cout << "Input the key: ";
 cin >> input;
 
 while (true) {
  if (input == key) {
   cout << "Correct!" << endl;
   break;
  }
  cout << "Wrong!" << endl;
  break;
 }
 
 cout << "Finish" << endl;
 
 return 0;
}
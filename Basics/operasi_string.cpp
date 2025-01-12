#include <iostream>
#include <string>

using namespace std;

int main() {
 
 string kata("cat");
 cout << kata << endl;
 
 // mengambil karakter berdasarkan index
 cout << "Index ke 0 : " << kata[0] << endl;
 cout << "Index ke 1 : " << kata[1] << endl;
 cout << "Index ke 2 : " << kata[2] << endl;
 
 // merubah karakter pada index
 kata[0] = 'e';
 cout << "Index ke 0 : " << kata[0] << endl;
 cout << kata << endl;
 
 // memyambung, concatenation
 string kata2(kata + "ing");
 cout << kata2 << endl;
 
 string kata3("apples");
 kata2.append(" " + kata3);
 
 cout << kata2 << endl;
 
 string kata4("bananas");
 kata2 += " " + kata4;
 
 cout << kata2 << endl;
 
 return 0;
}
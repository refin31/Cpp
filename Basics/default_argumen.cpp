#include <iostream>

using namespace std;

// fungsi prototipe
double volume(double p = 1, double l = 1, double t = 1);

int main() {
 
 cout << volume(3, 4, 5) << endl;
 cout << volume(3, 4) << endl;
 cout << volume(3) << endl;
 cout << volume() << endl;
 
 return 0;
}

// default argumen
double volume(double p, double l, double t) {
 return p * l * t;
}

#include <iostream>
#include <limits>

using namespace std;

int main(){
	
	// bilangan bulat
	unsigned int a = 5; // 32-bit
	long b = 6;
	short c = 7;
	
	// bilangan decimal
	float d = 1.0;
	double e = 2.0;
	
	// character
	char f = 'a'; // 8-bit
	
	// boolean
	bool g = true; // true/false
	
	cout << a << endl;
	cout << sizeof(a) << "byte" << endl;
	cout << numeric_limits<unsigned int>::min() << endl;
	cout << numeric_limits<unsigned int>::max() << endl;
	return 0;
}
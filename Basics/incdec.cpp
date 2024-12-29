#include <iostream>

using namespace std;

int main() {
    int x = 5;

    // Post-Increment
    cout << "Post-Increment:" << endl;
    cout << "Sebelum: x = " << x << endl;
    int y = x++;
    cout << "Sesudah: x = " << x << ", y = " << y << endl;

    x = 5;

    // Pre-Increment
    cout << "\nPre-Increment:" << endl;
    cout << "Sebelum: x = " << x << endl;
    y = ++x;
    cout << "Sesudah: x = " << x << ", y = " << y << endl;

    x = 5;

    // Post-Decrement
    cout << "\nPost-Decrement:" << endl;
    cout << "Sebelum: x = " << x << endl;
    y = x--;
    cout << "Sesudah: x = " << x << ", y = " << y << endl;

    x = 5;

    // Pre-Decrement
    cout << "\nPre-Decrement:" << endl;
    cout << "Sebelum: x = " << x << endl;
    y = --x;
    cout << "Sesudah: x = " << x << ", y = " << y << endl;

    return 0;
}
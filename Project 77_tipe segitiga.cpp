#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Masukkan panjang sisi segitiga:" << endl;
    cout << "Sisi a: ";
    cin >> a;
    cout << "Sisi b: ";
    cin >> b;
    cout << "Sisi c: ";
    cin >> c;

    // Memeriksa apakah bisa membentuk segitiga
    if (a + b > c && a + c > b && b + c > a) {
        // Menentukan jenis segitiga
        if (a == b && b == c) {
            cout << "Segitiga sama sisi." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Segitiga sama kaki." << endl;
        } else {
            cout << "Segitiga sembarang." << endl;
        }
    } else {
        cout << "Tidak dapat membentuk segitiga." << endl;
    }

    return 0;
}


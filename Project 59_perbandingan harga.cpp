#include <iostream>
using namespace std;

int main() {
    float harga1, harga2;

    cout << "Masukkan harga barang pertama: ";
    cin >> harga1;

    cout << "Masukkan harga barang kedua: ";
    cin >> harga2;

    if (harga1 > harga2) {
        cout << "Barang pertama lebih mahal.\n";
    }

    if (harga1 < harga2) {
        cout << "Barang kedua lebih mahal.\n";
    }

    if (harga1 == harga2) {
        cout << "Keduanya memiliki harga yang sama.\n";
    }

    return 0;
}


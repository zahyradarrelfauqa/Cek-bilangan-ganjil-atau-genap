#include <iostream>
using namespace std;

int main() {
    int usia;

    cout << "Masukkan usia Anda: ";
    cin >> usia;

    // Menentukan hak pilih
    if (usia >= 17) {
        cout << "Anda berhak memilih." << endl;
    } else {
        cout << "Anda tidak berhak memilih." << endl;
    }

    return 0;
}


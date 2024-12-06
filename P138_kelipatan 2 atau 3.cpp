#include <iostream>
using namespace std;

void periksaKelipatan(int angka) {
    if (angka % 2 == 0 && angka % 3 == 0) {
        cout << angka << " adalah kelipatan dari 2 dan 3." << endl;
    } else if (angka % 2 == 0) {
        cout << angka << " adalah kelipatan dari 2." << endl;
    } else if (angka % 3 == 0) {
        cout << angka << " adalah kelipatan dari 3." << endl;
    } else {
        cout << angka << " bukan kelipatan dari 2 atau 3." << endl;
    }
}

int main() {
    int angka;

    cout << "Masukkan angka: ";
    cin >> angka;

    periksaKelipatan(angka);

    return 0;
}


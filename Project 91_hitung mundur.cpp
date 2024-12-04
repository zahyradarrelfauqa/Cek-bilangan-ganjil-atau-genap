#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka untuk dihitung mundur: ";
    cin >> angka;

    cout << "Menghitung mundur:\n";
    while (angka >= 0) {
        cout << angka << endl;
        angka--;
    }

    cout << "Selesai!" << endl;
    return 0;
}


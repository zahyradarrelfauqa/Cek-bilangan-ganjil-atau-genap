#include <iostream>
using namespace std;

int main() {
    int hariKedaluwarsa;

    cout << "Masukkan jumlah hari hingga kedaluwarsa: ";
    cin >> hariKedaluwarsa;

    if (hariKedaluwarsa > 0) {
        cout << "Makanan ini masih layak untuk dikonsumsi." << endl;
    } else {
        cout << "Makanan ini sudah kedaluwarsa!" << endl;
    }

    return 0;
}


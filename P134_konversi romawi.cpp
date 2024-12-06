#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mendapatkan nilai desimal dari simbol Romawi
int nilaiSimbol(char simbol) {
    switch (simbol) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // Jika simbol tidak valid
    }
}

// Fungsi untuk mengonversi angka Romawi ke desimal
int romanKeDesimal(string romawi) {
    int hasil = 0;
    int panjang = romawi.length();

    for (int i = 0; i < panjang; i++) {
        int nilaiSaatIni = nilaiSimbol(romawi[i]);
        int nilaiBerikutnya = (i + 1 < panjang) ? nilaiSimbol(romawi[i + 1]) : 0;

        // Jika simbol saat ini lebih kecil dari simbol berikutnya, kurangkan nilai simbol saat ini
        if (nilaiSaatIni < nilaiBerikutnya) {
            hasil -= nilaiSaatIni;
        } else {
            hasil += nilaiSaatIni;
        }
    }

    return hasil;
}

int main() {
    string romawi;
    cout << "Masukkan angka Romawi: ";
    cin >> romawi;

    int desimal = romanKeDesimal(romawi);
    cout << "Angka desimal: " << desimal << endl;

    return 0;
}


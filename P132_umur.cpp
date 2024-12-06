#include <iostream>
#include <ctime> 
using namespace std;

int hitungUmur(int tahunLahir) {

    time_t sekarang = time(0);
    tm *ltm = localtime(&sekarang);
    int tahunSaatIni = 1900 + ltm->tm_year; 
    return tahunSaatIni - tahunLahir;
}

int main() {
    int tahunLahir;
    cout << "Masukkan tahun lahir Anda: ";
    cin >> tahunLahir;

    int umur = hitungUmur(tahunLahir);

    if (umur < 0) {
        cout << "Tahun lahir tidak valid." << endl;
    } else {
        cout << "Umur Anda adalah: " << umur << " tahun." << endl;
    }

    return 0;
}


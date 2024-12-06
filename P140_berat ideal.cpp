#include <iostream>
using namespace std;

double hitungBeratIdeal(int tinggi, char jenisKelamin) {
    double beratIdeal;
    int tinggiDasar = tinggi - 100;

    if (jenisKelamin == 'P' || jenisKelamin == 'p') { 
        beratIdeal = tinggiDasar - (0.1 * tinggiDasar); 
    } else if (jenisKelamin == 'W' || jenisKelamin == 'w') { 
        beratIdeal = tinggiDasar - (0.15 * tinggiDasar); 
    } else {
        cout << "Jenis kelamin tidak valid." << endl;
        return -1; 
    }

    return beratIdeal;
}

int main() {
    int tinggi;
    char jenisKelamin;

    cout << "Masukkan tinggi badan Anda (dalam cm): ";
    cin >> tinggi;

    cout << "Masukkan jenis kelamin Anda (P untuk Pria, W untuk Wanita): ";
    cin >> jenisKelamin;

    if (tinggi <= 0) {
        cout << "Tinggi badan tidak valid!" << endl;
        return 0;
    }

    double beratIdeal = hitungBeratIdeal(tinggi, jenisKelamin);

    if (beratIdeal != -1) {
        cout << "Berat badan ideal Anda adalah: " << beratIdeal << " kg" << endl;
    }

    return 0;
}



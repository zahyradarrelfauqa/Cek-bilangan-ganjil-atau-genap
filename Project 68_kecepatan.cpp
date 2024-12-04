#include <iostream>
using namespace std;

int main() {
    double jarak, waktu, kecepatan;

    cout << "Masukkan jarak (dalam kilometer): ";
    cin >> jarak;

    cout << "Masukkan waktu (dalam jam): ";
    cin >> waktu;

    if (waktu > 0) {
        kecepatan = jarak / waktu;
        cout << "Kecepatan rata-rata kendaraan adalah: " << kecepatan << " km/jam" << endl;
    } else {
        cout << "Waktu tidak boleh nol atau negatif!" << endl;
    }

    return 0;
}


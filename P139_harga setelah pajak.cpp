#include <iostream>
using namespace std;

double hitungHargaSetelahPajak(double harga, double tarifPajak) {
    double pajak = harga * tarifPajak / 100;  
    double hargaSetelahPajak = harga + pajak; 
    return hargaSetelahPajak;
}

int main() {
    double harga, tarifPajak;

    cout << "Masukkan harga barang: ";
    cin >> harga;

    cout << "Masukkan tarif pajak (dalam persen): ";
    cin >> tarifPajak;

    if (harga < 0 || tarifPajak < 0) {
        cout << "Harga atau tarif pajak tidak valid!" << endl;
        return 0;
    }

    double totalHarga = hitungHargaSetelahPajak(harga, tarifPajak);

    cout << "Harga setelah pajak adalah: " << totalHarga << endl;

    return 0;
}


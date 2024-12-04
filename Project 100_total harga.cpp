#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int pilihanMakanan, pilihanMinuman, jumlahMakanan, jumlahMinuman;
    float totalHarga = 0;
    char lagi;

    float hargaSotoAyam = 25000;
    float hargaSotoSapi = 30000;
    float hargaSotoGoreng = 28000;
    float hargaEsTeh = 5000;
    float hargaEsJeruk = 7000;
    float hargaAirMineral = 3000;

    do {

        cout << "=== Pilih Makanan ===" << endl;
        cout << "1. Soto Ayam      : Rp " << hargaSotoAyam << endl;
        cout << "2. Soto Sapi      : Rp " << hargaSotoSapi << endl;
        cout << "3. Soto Goreng    : Rp " << hargaSotoGoreng << endl;
        cout << "Pilih makanan : ";
        cin >> pilihanMakanan;

        cout << "Jumlah makanan: ";
        cin >> jumlahMakanan;

        switch (pilihanMakanan) {
            case 1:
                totalHarga += hargaSotoAyam * jumlahMakanan;
                break;
            case 2:
                totalHarga += hargaSotoSapi * jumlahMakanan;
                break;
            case 3:
                totalHarga += hargaSotoGoreng * jumlahMakanan;
                break;
            default:
                cout << "Pilihan makanan tidak valid!" << endl;
                continue; 
        }

        cout << "=== Pilih Minuman ===" << endl;
        cout << "4. Es Teh         : Rp " << hargaEsTeh << endl;
        cout << "5. Es Jeruk       : Rp " << hargaEsJeruk << endl;
        cout << "6. Air Mineral    : Rp " << hargaAirMineral << endl;
        cout << "Pilih minuman (4-6): ";
        cin >> pilihanMinuman;

        cout << "Jumlah minuman: ";
        cin >> jumlahMinuman;

        switch (pilihanMinuman) {
            case 4:
                totalHarga += hargaEsTeh * jumlahMinuman;
                break;
            case 5:
                totalHarga += hargaEsJeruk * jumlahMinuman;
                break;
            case 6:
                totalHarga += hargaAirMineral * jumlahMinuman;
                break;
            default:
                cout << "Pilihan minuman tidak valid!" << endl;
                continue; 
        }

        cout << "Pesanan berhasil ditambahkan!" << endl;
        cout << "Total Harga: Rp " << totalHarga << endl;

        cout << "Apakah Anda ingin memilih menu lagi? (y/n): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout << "Terima kasih telah berkunjung!" << endl;

    return 0;
}


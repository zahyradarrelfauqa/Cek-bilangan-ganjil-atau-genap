#include <iostream>
using namespace std;

int main() {
    int pilihan;
    char lagi;

    do {
        cout << "Menu Makanan:\n";
        cout << "1. Soto Ayam\n";
        cout << "2. Soto Sapi\n";
        cout << "3. Soto Goreng\n";
        cout << "4. Nasi Goreng\n";
        cout << "5. Mie Goreng\n";
        cout << "6. Exit\n";
        cout << "Pilih menu (1-6): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Anda memilih Soto Ayam.\n";
                break;
            case 2:
                cout << "Anda memilih Soto Sapi.\n";
                break;
            case 3:
                cout << "Anda memilih Soto Goreng.\n";
                break;
            case 4:
                cout << "Anda memilih Nasi Goreng.\n";
                break;
            case 5:
                cout << "Anda memilih Mie Goreng.\n";
                break;
            case 6:
                cout << "Terima kasih! Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }

        if (pilihan != 6) {
            cout << "Apakah Anda ingin memilih menu lain? (y/n): ";
            cin >> lagi;
        } else {
            lagi = 'n';
        }

    } while (lagi == 'y' || lagi == 'Y');

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    double totalPembelian;

    cout << "Masukkan total pembelian: ";
    cin >> totalPembelian;

    if (totalPembelian < 100) {
        cout << "Status: Pelanggan Baru" << endl;
    } else if (totalPembelian >= 100 && totalPembelian < 500) {
        cout << "Status: Pelanggan Reguler" << endl;
    } else {
        cout << "Status: Pelanggan Premium" << endl;
    }

    return 0;
}


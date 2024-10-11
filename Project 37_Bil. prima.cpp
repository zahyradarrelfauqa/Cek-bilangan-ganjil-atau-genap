#include <iostream>
using namespace std;

bool adalahPrima(int bilangan) {
    if (bilangan <= 1) return false; 
    for (int i = 2; i * i <= bilangan; i++) {
        if (bilangan % i == 0) return false;
    }
    return true;
}

int main() {
    int n, bilangan;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan bilangan ke-" << (i + 1) << ": ";
        cin >> bilangan;
        cout << bilangan << (adalahPrima(bilangan) ? " adalah bilangan prima." : " bukan bilangan prima.") << endl;
    }

    return 0;
}


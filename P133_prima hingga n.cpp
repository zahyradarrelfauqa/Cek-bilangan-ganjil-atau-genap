#include <iostream>
using namespace std;

bool isPrima(int angka) {
    if (angka <= 1) return false; 
    for (int i = 2; i * i <= angka; i++) { 
        if (angka % i == 0) return false;
    }
    return true;
}

void cetakBilanganPrima(int n) {
    if (n < 2) {
        cout << "Tidak ada bilangan prima hingga " << n << endl;
        return;
    }
    cout << "Bilangan prima hingga " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrima(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan nilai maksimum (n): ";
    cin >> n;

    cetakBilanganPrima(n);

    return 0;
}


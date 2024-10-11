#include <iostream>
using namespace std;

int main() {
    int n;
    double number;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah bilangan harus positif!" << endl;
        return 1;
    }

    double total = 0.0;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan bilangan ke-" << (i + 1) << ": ";
        cin >> number;
        total += number;
    }

    cout << "Rata-rata: " << total / n << endl;

    return 0;
}



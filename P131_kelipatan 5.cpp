#include <iostream>
using namespace std;

void cetakKelipatan5(int n) {
    if (n < 5) {
        cout << "Tidak ada kelipatan 5 hingga " << n << endl;
        return;
    }
    cout << "Kelipatan 5 hingga " << n << ": ";
    for (int i = 5; i <= n; i += 5) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan nilai maksimum (n): ";
    cin >> n;

    cetakKelipatan5(n);

    return 0;
}


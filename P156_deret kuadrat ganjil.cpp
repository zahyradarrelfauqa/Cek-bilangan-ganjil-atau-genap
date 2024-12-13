#include <iostream>
using namespace std;

void cetakKuadratGanjil(int n) {
    if (n <= 0) return;
    cetakKuadratGanjil(n - 1);
    if (n % 2 != 0) cout << n * n << " ";
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;
    cout << "Kuadrat dari bilangan ganjil hingga " << n << " adalah: ";
    cetakKuadratGanjil(n);
    cout << endl;
    return 0;
}


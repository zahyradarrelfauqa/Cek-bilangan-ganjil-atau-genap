#include <iostream>
using namespace std;

void cetakGanjil(int a, int b) {
    if (a > b) return;
    if (a % 2 != 0) cout << a << " ";
    cetakGanjil(a + 1, b);
}

int main() {
    int a, b;
    cout << "Masukkan batas bawah (a): ";
    cin >> a;
    cout << "Masukkan batas atas (b): ";
    cin >> b;
    cout << "Bilangan ganjil antara " << a << " dan " << b << " adalah: ";
    cetakGanjil(a, b);
    cout << endl;
    return 0;
}


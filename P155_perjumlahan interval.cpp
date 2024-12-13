#include <iostream>
using namespace std;

int jumlahInterval(int a, int b) {
    if (a > b) return 0;
    return a + jumlahInterval(a + 1, b);
}

int main() {
    int a, b;
    cout << "Masukkan batas bawah: ";
    cin >> a;
    cout << "Masukkan batas atas: ";
    cin >> b;
    cout << "Jumlah bilangan dari " << a << " hingga " << b << " adalah " << jumlahInterval(a, b) << endl;
    return 0;
}


#include <iostream>
using namespace std;

int hitungJumlahDigit(int bilangan) {
    return (bilangan == 0) ? 0 : 1 + hitungJumlahDigit(bilangan / 10);
}

int main() {
    int bilangan;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;
    cout << "Jumlah digit: " << hitungJumlahDigit(bilangan) << endl;

    return 0;
}


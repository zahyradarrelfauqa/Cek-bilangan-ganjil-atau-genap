#include <iostream>
using namespace std;

int fpb(int a, int b) {
    if (b == 0) return a;
    return fpb(b, a % b);
}

int main() {
    int a, b;
    cout << "Masukkan dua bilangan: ";
    cin >> a >> b;
    cout << "Faktor Persekutuan Terbesar (FPB) dari " << a << " dan " << b << " adalah: " << fpb(a, b) << endl;
    return 0;
}


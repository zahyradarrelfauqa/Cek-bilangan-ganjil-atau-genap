#include <iostream>
using namespace std;

int fpb(int a, int b) {
    if (b == 0) return a;
    return fpb(b, a % b);
}

int kpk(int a, int b) {
    return (a * b) / fpb(a, b);
}

int main() {
    int a, b;
    cout << "Masukkan dua bilangan: ";
    cin >> a >> b;
    
    cout << "KPK dari " << a << " dan " << b << " adalah: " << kpk(a, b) << endl;
    return 0;
}


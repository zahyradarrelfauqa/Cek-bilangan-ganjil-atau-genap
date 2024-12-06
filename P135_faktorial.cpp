#include <iostream>
using namespace std;

long long hitungFaktorial(int n) {
    long long faktorial = 1; 
    for (int i = 1; i <= n; i++) {
        faktorial *= i; 
    }
    return faktorial;
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;

    if (n < 0) {
        cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << endl;
    } else {
        cout << "Faktorial dari " << n << " adalah " << hitungFaktorial(n) << endl;
    }

    return 0;
}


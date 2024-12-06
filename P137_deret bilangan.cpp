#include <iostream>
using namespace std;

void deretAritmatika(int a1, int d, int n) {
    for (int i = 0; i < n; i++) {
        int suku = a1 + i * d;
        cout << suku << " ";
    }
    cout << endl;
}

int main() {
    int a1, d, n;

    cout << "Masukkan suku pertama (a1): ";
    cin >> a1;
    cout << "Masukkan beda (d): ";
    cin >> d;
    cout << "Masukkan jumlah suku (n): ";
    cin >> n;

    cout << "Deret Aritmatika: ";
    deretAritmatika(a1, d, n);

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    float tinggi1, tinggi2;
-
    cout << "Masukkan tinggi badan orang pertama (cm): ";
    cin >> tinggi1;

    cout << "Masukkan tinggi badan orang kedua (cm): ";
    cin >> tinggi2;

    if (tinggi1 > tinggi2) {
        cout << "Orang pertama lebih tinggi.\n";
    }

    if (tinggi1 < tinggi2) {
        cout << "Orang kedua lebih tinggi.\n";
    }

    if (tinggi1 == tinggi2) {
        cout << "Keduanya memiliki tinggi badan yang sama.\n";
    }

    return 0;
}


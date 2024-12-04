#include <iostream>
using namespace std;

int main() {
    double tinggiBadan;

    cout << "Masukkan tinggi badan (dalam cm): ";
    cin >> tinggiBadan;

    if (tinggiBadan < 150) {
        cout << "Status: Pendek" << endl;
    } else if (tinggiBadan >= 150 && tinggiBadan < 170) {
        cout << "Status: Sedang" << endl;
    } else {
        cout << "Status: Tinggi" << endl;
    }

    return 0;
}


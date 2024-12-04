#include <iostream>
using namespace std;

int main() {
    float sudut;

    cout << "Masukkan sudut dalam derajat (0 - 360): ";
    cin >> sudut;

    if (sudut < 0 || sudut >= 360) {
        cout << "Sudut tidak valid. Harus antara 0 dan 360 derajat." << endl;
    } else if (sudut < 45 || sudut >= 315) {
        cout << "Arah: Utara (N)" << endl;
    } else if (sudut < 135) {
        cout << "Arah: Timur (E)" << endl;
    } else if (sudut < 225) {
        cout << "Arah: Selatan (S)" << endl;
    } else {
        cout << "Arah: Barat (W)" << endl;
    }

    return 0;
}


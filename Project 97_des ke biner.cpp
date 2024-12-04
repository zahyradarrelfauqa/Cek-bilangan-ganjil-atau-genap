#include <iostream>
using namespace std;

int main() {
    int desimal;
    string biner = "";

    cout << "Masukkan angka desimal: ";
    cin >> desimal;

    if (desimal == 0) {
        biner = "0";
    } else {
        while (desimal > 0) {
            biner = char((desimal % 2) + '0') + biner;
            desimal /= 2;
        }
    }

    cout << "Angka biner: " << biner << endl;
    return 0;
}


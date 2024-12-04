#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    if (bilangan > 0) {
        cout << "Bilangan positif." << endl;
    } else if (bilangan < 0) {
        cout << "Bilangan negatif." << endl;
    } else {
        cout << "Bilangan adalah nol." << endl;
    }

    if (bilangan != 0) {
        if (bilangan % 2 == 0) {
            cout << "Bilangan genap." << endl;
        } else {
            cout << "Bilangan ganjil." << endl;
        }
}
	return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Masukkan password: ";
    cin >> password;

    if (password.length() < 6) {
        cout << "Password terlalu pendek! Minimal 6 karakter." << endl;
    } else {
        bool adaAngka = false;
        for (char c : password) {
            if (isdigit(c)) {
                adaAngka = true;
                break;
            }
        }
        if (adaAngka) {
            cout << "Password Anda kuat!" << endl;
        } else {
            cout << "Password harus mengandung angka!" << endl;
        }
    }

    return 0;
}


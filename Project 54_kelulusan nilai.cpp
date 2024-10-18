#include <iostream>
using namespace std;

int main() {
    int nilai;
    
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    if (nilai >= 75) 
        cout << "Selamat! Anda lulus." << endl;

    if (nilai >= 90) 
    cout << "Kategori: Sangat Baik" << endl;
    else if (nilai >= 80) 
            cout << "Kategori: Baik" << endl;
    if (nilai <= 75) 
        cout << "Maaf, Anda tidak lulus." << endl;

    return 0;
	}


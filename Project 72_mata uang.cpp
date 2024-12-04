#include <iostream>
using namespace std;

int main() {
    double jumlahUang;
    const double nilaiTukar = 15605; 

    cout << "Masukkan jumlah uang dalam USD: ";
    cin >> jumlahUang;

    double hasilKonversi = jumlahUang * nilaiTukar;

    cout << jumlahUang << " USD setara dengan " << hasilKonversi << " IDR." << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main(){
	double rataRataNilai;
    int kehadiran;

    cout << "Masukkan rata-rata nilai Anda: ";
    cin >> rataRataNilai;
    cout << "Masukkan persentase kehadiran Anda (0-100): ";
    cin >> kehadiran;

    if ((kehadiran >= 75 && rataRataNilai >= 2.5) || (rataRataNilai > 3.0)) {
        cout << "Anda adalah mahasiswa aktif." << endl;
    } else {
        cout << "Maaf, Anda tidak memenuhi syarat untuk menjadi mahasiswa aktif." << endl;
    }
	
	return 0;
}

#include<iostream>
using namespace std;

int main(){
	double ipk;
    int jumlahSKS;

    cout << "Masukkan IPK Anda: ";
    cin >> ipk;
    cout << "Masukkan jumlah SKS yang diambil: ";
    cin >> jumlahSKS;

    if ((ipk >= 3.5 && jumlahSKS >= 20) || (ipk > 3.8)) {
        cout << "Anda memenuhi syarat untuk mendaftar beasiswa." << endl;
    } else {
        cout << "Maaf, Anda tidak memenuhi syarat untuk mendaftar beasiswa." << endl;
    }
	return 0;
}

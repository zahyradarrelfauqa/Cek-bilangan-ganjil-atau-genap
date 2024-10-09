#include <iostream>
using namespace std;
#define phi 3.14

int main() {
    double jari_jari, tinggi;
    cout << "Masukkan jari-jari tabung: ";
    cin >> jari_jari;
    cout << "Masukkan tinggi tabung: ";
    cin >> tinggi;
    double volume =  phi* jari_jari * jari_jari * tinggi;
    cout << "Volume tabung: " << volume << endl;

    return 0;
}


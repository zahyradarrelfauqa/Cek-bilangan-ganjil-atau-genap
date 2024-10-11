#include <iostream>
using namespace std;

int main() {
    int jam1, menit1, detik1, jam2, menit2, detik2;

    cout << "Masukkan waktu pertama (jam menit detik): ";
    cin >> jam1 >> menit1 >> detik1;
    cout << "Masukkan waktu kedua (jam menit detik): ";
    cin >> jam2 >> menit2 >> detik2;

    int totalDetik1 = jam1 * 3600 + menit1 * 60 + detik1;
    int totalDetik2 = jam2 * 3600 + menit2 * 60 + detik2;

    int selisihDetik = totalDetik1 - totalDetik2;
    if (selisihDetik < 0) selisihDetik = -selisihDetik;

    cout << "Selisih waktu: "
         << selisihDetik / 3600 << " jam, "
         << (selisihDetik % 3600) / 60 << " menit, "
         << selisihDetik % 60 << " detik." << endl;

    return 0;
}


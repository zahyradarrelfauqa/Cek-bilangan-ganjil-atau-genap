#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran tabel pembagian: ";
    cin >> n;
    
    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout << (float)i / j << "   ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}


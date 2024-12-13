#include <iostream>
using namespace std;

void cetakPiramida(int n, int current = 1) {
    if (current > n) return;  
    for (int i = 0; i < n - current; i++) cout << " ";  
    for (int i = 0; i < current; i++) cout << current << " ";  
    cout << endl;
    cetakPiramida(n, current + 1);  
}

int main() {
    int n;
    cout << "Masukkan jumlah baris piramida: ";
    cin >> n;
    cetakPiramida(n);  
    return 0;
}


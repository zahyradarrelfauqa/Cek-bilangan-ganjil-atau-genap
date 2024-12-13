#include <iostream>
using namespace std;

int jumlahAritmatika(int n, int a = 1, int d = 1) {
    if (n == 0) return 0;  
    return a + jumlahAritmatika(n - 1, a + d, d);  
}

int main() {
    int n;
    cout << "Masukkan jumlah suku dalam deret aritmatika: ";
    cin >> n;
    cout << "Jumlah deret aritmatika dari 1 hingga " << n << " adalah: " << jumlahAritmatika(n) << endl;
    return 0;
}


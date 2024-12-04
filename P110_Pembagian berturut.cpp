#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai pembatas: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int j = 1;
        while (j <= i) {
            float result = (float)i / j; 
            cout << "Hasil " << i << " / " << j << " = " << result << endl;
            j++; 
        }
        cout << endl; 
    }

    return 0;
}


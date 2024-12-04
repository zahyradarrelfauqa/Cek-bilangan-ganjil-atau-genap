#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan batas angka untuk mencari bilangan prima: ";
    cin >> n;

    
    for (int i = 2; i <= n; i++) {
        int j = 2; 
        bool isPrime = true; 

       
        while (j * j <= i) {
            if (i % j == 0) {
                isPrime = false; 
                break; 
            }
            j++;
        }

        
        if (isPrime) {
            cout << i << " ";
        }
    }
    
    cout << endl; 

    return 0;
}


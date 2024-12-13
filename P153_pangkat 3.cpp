#include <iostream>
using namespace std;

int pangkatTiga(int n) {
    if (n == 0) return 1;
    return 3 * pangkatTiga(n - 1);
}

int main() {
    int n;
    cout << "Masukkan pangkat (n): ";
    cin >> n;
    cout << "3 pangkat " << n << " adalah: " << pangkatTiga(n) << endl;
    return 0;
}


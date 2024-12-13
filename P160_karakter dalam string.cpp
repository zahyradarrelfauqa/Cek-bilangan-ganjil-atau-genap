#include <iostream>
using namespace std;

int countCharacters(const string &str, int index = 0) {
    if (index == str.size()) return 0; 
    return 1 + countCharacters(str, index + 1);  
}

int main() {
    string str;
    cout << "Masukkan string: ";
    getline(cin, str);
    
    cout << "Jumlah karakter dalam string adalah: " << countCharacters(str) << endl;
    return 0;
}


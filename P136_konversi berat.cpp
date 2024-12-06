#include <iostream>
using namespace std;

void konversiBerat(double kg) {
    double gram = kg * 1000;    
    double ons = kg * 10;       
    double ton = kg / 1000;     

    cout << kg << " kg = " << gram << " gram" << endl;
    cout << kg << " kg = " << ons << " ons" << endl;
    cout << kg << " kg = " << ton << " ton" << endl;
}

int main() {
    double kg;

    cout << "Masukkan berat dalam kilogram: ";
    cin >> kg;

    if (kg < 0) {
        cout << "Berat tidak boleh negatif!" << endl;
        return 0;
    }

    konversiBerat(kg);

    return 0;
}


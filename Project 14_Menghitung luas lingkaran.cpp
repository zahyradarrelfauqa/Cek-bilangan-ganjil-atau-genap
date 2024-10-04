#include <iostream>
using namespace std;

int main()
{
	cout << "+=============================+"<<endl;
	cout << "|  Menghitung Luas Lingkaran  |"<<endl;
	cout << "+=============================+"<<endl;
	
	float jari_jari, luas;
	cout << "Masukkan jari-jari lingkaran: ";
	cin >> jari_jari;
	
	luas = 3.14159 * jari_jari * jari_jari;
	
	cout << "Luas lingkaran adalah: " << luas << endl;
	return 0;
}

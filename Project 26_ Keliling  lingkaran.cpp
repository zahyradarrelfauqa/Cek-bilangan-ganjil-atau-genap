#include<iostream>
using namespace std;
#define phi 3.14

int main(){
	float jarijari;
	float keliling;
	
	cout << "Masukkan jari-jari :";
	cin >> jarijari;
	keliling = 2 * phi * jarijari;
	cout << "Keliling lingkarannya adalah : "<< keliling << endl;
	
	return 0;
}

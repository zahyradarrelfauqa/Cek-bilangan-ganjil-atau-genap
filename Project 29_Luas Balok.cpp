#include <iostream>
using namespace std;

int main(){
	float panjang, lebar, tinggi, luas;
	
	cout<<"Masukkan Panjang : ";
	cin>>panjang;
	cout<<"Masukkan Lebar : ";
	cin>>lebar;
	cout<<"Masukan Tinggi : ";
	cin>>tinggi;
	luas=((2*panjang*lebar)+(2*panjang*tinggi)+(2*lebar*tinggi));
	
	cout<<endl;
	cout<<"Luas Balok adalah "<<luas<<endl;
	return 0;
}


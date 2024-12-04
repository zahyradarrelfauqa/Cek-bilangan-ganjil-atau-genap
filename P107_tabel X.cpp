#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Masukkan ukuran tabel perkalian : ";
	cin >> n;
	
	int i = 1;
	while (i <=n){
		int j = 1;
		while (j <=n){
			cout << i * j << "\t";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}

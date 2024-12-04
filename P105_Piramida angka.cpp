#include<iostream>
using namespace std;

int main(){
	int batas;
	cout<<"Masukkan jumlah batas: ";
	cin>>batas;
	
	for(int i = 1; i <= batas; i++){
		for(int j = batas; j >= i; j--){
	cout<<" ";
		}
	for(int k = 1;k <= i; k++){
		cout<<k;
		}
	k--;
	for(int l = 1; i <= i-1; l++){
	k--;
		cout<<k;
	}
	cout<<endl;
}
}

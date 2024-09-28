#include <iostream>
using namespace std;

int main() {
	int n;
	long factorial = 1.0;
	
	cout << "Masukkan bilangan bulat positif = ";
	cin >> n;
	
	if (n<0)
	   cout<<"Eror! Factorial of a negative number doesn't exist.";
	else {
		for(int i = 1; i<=n; ++i){
			factorial *= i;
		}
		cout <<  "Faktorial dari " << n << " = " << factorial;
	}
	
	return 0;
}

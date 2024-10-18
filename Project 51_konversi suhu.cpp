#include <iostream>
using namespace std;

int main(){
  float celcius, fahrenheit, kelvin, reamur ;
 
  cout << "Masukkan suhu dalam Celsius : ";
  cin >> celcius;
  cout << endl;
 
  fahrenheit = (9.0/5.0 * celcius) + 32;
  kelvin = celcius + 273.15;
  reamur = celcius * (4.0/5.0) ;
 
  cout << celcius << " derajat Celcius = " << fahrenheit <<" derajat Fahrenheit";
  cout << endl;
  cout << celcius << " derajat Celcius = " << kelvin <<" derajat Kelvin";
  cout << endl;
  cout << celcius << " derajat Celcius = " << reamur <<" derajat Reamur";
  cout << endl;
	return 0;
}

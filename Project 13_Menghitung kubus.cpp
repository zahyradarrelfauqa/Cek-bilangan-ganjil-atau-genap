#include <iostream>
using namespace std;

int main (){
  cout << "Menghitung Luas Permukaan dan Volume Kubus" << endl;
 
  float sisi, luas_permukaan, volume;
 
  cout << "Input panjang sisi kubus: ";
  cin >> sisi;
  cout << endl;
 
  luas_permukaan = 6 * (sisi * sisi);
  volume = sisi * sisi * sisi;
 
  cout << "Luas permukaan kubus = " << luas_permukaan << endl;
  cout << "Volume kubus = " << volume << endl;
 
  return 0;
}

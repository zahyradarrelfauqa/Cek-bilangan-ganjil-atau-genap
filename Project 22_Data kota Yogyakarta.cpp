#include <iostream>
#include <string>
using namespace std;

int main(){
	string nama1 = "Nama Kota : Yogyakarta";
	string nama2 = "Provinsi : DI Yogyakarta";
	int long populasi = 375.699;
	float luasWilayah = 3250;
	int jumlahKabupaten = 4;
	int jumlahKecamatan = 14;
	int jumlahKelurahan = 78;
	
	printf(" ~  Data Kota  ~ ");
	cout<< nama1 << endl;
	cout<< nama2 << endl;
	printf("Populasi : %id Jiwa\n", populasi);
	printf("Luas Wilayah : %.2f hektar\n", luasWilayah);
	printf("Jumlah Kabupaten : %d\n", jumlahKabupaten);
	printf("Jumlah Kecamatan : %d\n", jumlahKecamatan);
	printf("Jumlah Kelurahan : %d\n", jumlahKelurahan);
	
}
	

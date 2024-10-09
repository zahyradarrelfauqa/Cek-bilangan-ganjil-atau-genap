#include<stdio.h>

int main (){
	char nama_Negara[] = "Indonesia";
    char ibu_Kota[] = "Jakarta";
    char bahasa_Resmi[] = "Bahasa Indonesia";
    float luas_Wilayah = 1910931.0;
    double jumlah_Penduduk = 282.477 ;


    printf("Nama Negara: %s\n", nama_Negara);
    printf("Ibu Kota: %s\n", ibu_Kota);
    printf("Bahasa Resmi: %s\n", bahasa_Resmi);
    printf("Luas Wilayah: %.2f km²\n", luas_Wilayah);
    printf("Jumlah Penduduk: %.2f juta jiwa\n", jumlah_Penduduk);

	return 0;
}

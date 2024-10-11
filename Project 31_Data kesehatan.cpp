#include <iostream>

int main()
{
	int usia = 19;
	float berat = 64.2;
	double tinggi = 158.55;
	char jenis_kelamin = 'P';
	
	printf("------------------------------\n");
    printf("\tData Kesehatan\t\n");
	printf("------------------------------\n");
	printf("Usia : %i tahun\n", usia);
	printf("Berat : %.1f kg\n", berat);
	printf("Tinggi : %.2f cm\n", tinggi);
	printf("Jenis Kelamin : %c\n", jenis_kelamin);
	
	return 0;
}

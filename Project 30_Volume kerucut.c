#include <stdio.h>

int main(){
	const float p1 = 3.14159;
	float volume, r, t; 
	
	printf("Masukkan jari-jari dari kerucut\t: ");
	scanf("%f", &r);
	printf("Masukkan tinggi dari kerucut \t: ");
	scanf("%f", &t);
	
	volume = p1 * r * r * t / 3;
	printf("Hasil perhitungan volume kerucut adalah %.2f", volume);
	return 0;
}

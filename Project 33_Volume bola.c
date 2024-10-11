#include <stdio.h>
#define phi 3.14

int main(){
	float jari;
	float volume;
	
	printf("Input jari-jari bola : ");
	scanf("%f", &jari);
	
	volume = 4/3 * phi * jari * jari * jari;
	printf("\nVolume bola jari-jari %.2f cm adalah %.3f cm3",jari,volume);
	
	return 0;
}

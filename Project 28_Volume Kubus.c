#include <stdio.h>

int main() 
{
    double sisi;
    printf("Masukkan sisi kubus: ");
    scanf("%lf", &sisi);
    double volume = sisi * sisi * sisi;
    printf("Volume kubus adalah %.2lf cm3\n", volume);
    return 0;
}


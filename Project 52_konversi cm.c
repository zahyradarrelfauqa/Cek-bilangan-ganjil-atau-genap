#include <stdio.h>

int main() {
    float cm, m, km;

    printf("Masukkan panjang dalam centimeter: ");
    scanf("%f", &cm);

    m = cm / 100;       
    km = cm / 100000;     

    printf("Panjang dalam meter: %.2f m\n", m);
    printf("Panjang dalam kilometer: %.6f km\n", km);

    return 0;
}


#include <stdio.h>
#include <math.h>

double cariAkarKuadrat(double angka) {
    if (angka < 0) {
        printf("Bilangan negatif tidak memiliki akar kuadrat real.\n");
        return -1; 
    }
    return sqrt(angka);
}

int main() {
    double angka, hasil;

    printf("Masukkan sebuah bilangan: ");
    scanf("%lf", &angka);

    hasil = cariAkarKuadrat(angka);
    if (hasil != -1) {
        printf("Akar kuadrat dari %.2f adalah %.2f\n", angka, hasil);
    }

    return 0;
}


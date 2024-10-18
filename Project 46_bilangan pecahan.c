#include <stdio.h>

int main() {
    float number;

    printf("Masukkan sebuah bilangan pecahan: ");
    scanf("%f", &number);

    if (number > 0) {
        printf("Hasil: BENAR (Bilangan %.2f adalah bilangan positif)\n", number);
    } else if (number < 0) {
        printf("Hasil: SALAH (Bilangan %.2f adalah bilangan negatif)\n", number);
    } else {
        printf("Hasil: Hasil nol\n");
    }

    return 0;
}


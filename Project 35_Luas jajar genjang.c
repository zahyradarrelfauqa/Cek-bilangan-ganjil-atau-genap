#include <stdio.h>

int main() {
    float a, t, luas;

    printf("Masukkan panjang alas jajar genjang: ");
    scanf("%f", &a);
    printf("Masukkan tinggi jajar genjang: ");
    scanf("%f", &t);

    luas = a * t;

    printf("Luas jajar genjang adalah: %.2f\n", luas);

    return 0;
}


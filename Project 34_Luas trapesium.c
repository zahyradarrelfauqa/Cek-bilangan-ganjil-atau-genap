#include <stdio.h>

int main(){
    float a, b, h, luas;
    printf("Masukkan panjang sisi sejajar a: ");
    scanf("%f", &a);
    printf("Masukkan panjang sisi sejajar b: ");
    scanf("%f", &b);
    printf("Masukkan tinggi trapesium h: ");
    scanf("%f", &h);

    luas = (a + b) * h / 2;
    printf("Luas trapesium adalah: %.2f\n", luas);

    return 0;
}

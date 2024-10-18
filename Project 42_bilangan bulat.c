#include <stdio.h>

int main() {
    float number;

    printf("Masukkan sebuah bilangan: ");
    scanf("%f", &number);

    if (number == (int)number) {
        printf("Hasil: BENAR (Bilangan adalah bulat)\n");
    } else {
        printf("Hasil: SALAH (Bilangan bukan bulat)\n");
    }
    return 0;
}


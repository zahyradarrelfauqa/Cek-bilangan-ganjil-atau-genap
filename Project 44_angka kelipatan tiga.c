#include <stdio.h>

int main() {
    int number;

    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &number);

    if (number % 3 == 0) {
        printf("Hasil: BENAR (Bilangan adalah kelipatan tiga)\n");
    } else {
        printf("Hasil: SALAH (Bilangan bukan kelipatan tiga)\n");
    }
    return 0;
}


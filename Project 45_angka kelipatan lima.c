#include <stdio.h>

int main() {
    int number;

    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &number);

    if (number % 5 == 0) {
        printf("Hasil: BENAR (Bilangan %d adalah kelipatan 5)\n", number);
    } else {
        printf("Hasil: SALAH (Bilangan %d bukan kelipatan 5)\n", number);
    }
    
    return 0;
}


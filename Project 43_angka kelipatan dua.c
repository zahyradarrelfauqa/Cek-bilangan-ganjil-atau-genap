#include <stdio.h>

int main() {
    int number;

    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Hasil: BENAR (Bilangan %d adalah kelipatan 2)\n", number);
    } else {
        printf("Hasil: SALAH (Bilangan %d bukan kelipatan 2)\n", number);
    }
    
    return 0;
}


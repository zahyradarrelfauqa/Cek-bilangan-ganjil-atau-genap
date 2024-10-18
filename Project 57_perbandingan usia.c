#include <stdio.h>

int main() {
    int usia1, usia2;

    printf("Masukkan usia orang pertama: ");
    scanf("%d", &usia1);

    printf("Masukkan usia orang kedua: ");
    scanf("%d", &usia2);

    if (usia1 > usia2) {
        printf("Orang pertama lebih tua.\n");
    }

    if (usia1 < usia2) {
        printf("Orang kedua lebih tua.\n");
    }

    if (usia1 == usia2) {
        printf("Keduanya memiliki usia yang sama.\n");
    }

    return 0;
}


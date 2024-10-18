#include <stdio.h>

int main() {
    float nilai1, nilai2;

    printf("Masukkan nilai pertama: ");
    scanf("%f", &nilai1);

    printf("Masukkan nilai kedua: ");
    scanf("%f", &nilai2);

    if (nilai1 > nilai2) {
        printf("Nilai pertama lebih besar.\n");
    }

    if (nilai1 < nilai2) {
        printf("Nilai kedua lebih besar.\n");
    }

    if (nilai1 == nilai2) {
        printf("Keduanya memiliki nilai yang sama.\n");
    }

    return 0;
}


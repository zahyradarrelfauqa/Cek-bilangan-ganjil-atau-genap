#include <stdio.h>

int main() {
    int a, b;

    printf("Masukkan dua angka: ");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Hasil: BENAR (Angka sama)\n");
    } else {
        printf("Hasil: SALAH (Angka tidak sama)\n");
    }
    return 0;
}


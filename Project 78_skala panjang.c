#include <stdio.h>

int main() {
    float panjang;
    int pilihan;

    printf("Pilih jenis konversi panjang:\n");
    printf("1. Meter ke Centimeter\n");
    printf("2. Centimeter ke Meter\n");
    printf("Masukkan pilihan (1 atau 2): ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("Masukkan panjang dalam meter: ");
        scanf("%f", &panjang);
        printf("%.2f meter = %.2f centimeter.\n", panjang, panjang * 100);
    } else if (pilihan == 2) {
        printf("Masukkan panjang dalam centimeter: ");
        scanf("%f", &panjang);
        printf("%.2f centimeter = %.2f meter.\n", panjang, panjang / 100);
    } else {
        printf("Pilihan tidak valid. Harap masukkan 1 atau 2.\n");
    }

    return 0;
}


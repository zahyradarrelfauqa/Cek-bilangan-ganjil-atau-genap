#include <stdio.h>

int main() {
    int jumlah, angka, i = 0, total = 0;

    printf("Masukkan jumlah angka yang akan dijumlahkan: ");
    scanf("%d", &jumlah);

    while (i < jumlah) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka);
        total += angka;
        i++;
    }

    printf("Total penjumlahan: %d\n", total);
    return 0;
}


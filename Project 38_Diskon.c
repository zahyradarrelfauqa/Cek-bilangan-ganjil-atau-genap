#include <stdio.h>

int main() {
    float harga_asli, persentase_diskon, diskon, harga_setelah_diskon;
    printf("Masukkan harga asli: ");
    scanf("%f", &harga_asli);

    printf("Masukkan persentase diskon (dalam %%): ");
    scanf("%f", &persentase_diskon);
    diskon = (persentase_diskon / 100) * harga_asli;

    harga_setelah_diskon = harga_asli - diskon;

    printf("Diskon: %.2f\n", diskon);
    printf("Harga setelah diskon: %.2f\n", harga_setelah_diskon);

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char jenisKendaraan[20];
    char status[20];

    printf("Masukkan jenis kendaraan (mobil/motor): ");
    scanf("%s", jenisKendaraan);

    printf("Masukkan status kendaraan (aktif/tidak_aktif): ");
    scanf("%s", status);

    if (strcmp(jenisKendaraan, "mobil") == 0 || strcmp(jenisKendaraan, "motor") == 0) {
        if (strcmp(status, "aktif") == 0) {
            printf("Kendaraan %s dalam keadaan aktif.\n", jenisKendaraan);
        } else if (strcmp(status, "tidak_aktif") == 0) {
            printf("Kendaraan %s dalam keadaan tidak aktif.\n", jenisKendaraan);
        } else {
            printf("Status tidak valid. Harap masukkan 'aktif' atau 'tidak_aktif'.\n");
        }
    } else {
        printf("Jenis kendaraan tidak valid. Harap masukkan 'mobil' atau 'motor'.\n");
    }

    return 0;
}


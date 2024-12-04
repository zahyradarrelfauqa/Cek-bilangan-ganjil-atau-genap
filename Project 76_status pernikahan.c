#include <stdio.h>

int main() {
    int status;

    printf("Pilih status pernikahan:\n");
    printf("1. Belum Menikah\n");
    printf("2. Menikah\n");
    printf("3. Cerai\n");
    printf("4. Janda/Duda\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &status);

    switch (status) {
        case 1:
            printf("Status: Belum Menikah.\n");
            break;
        case 2:
            printf("Status: Menikah.\n");
            break;
        case 3:
            printf("Status: Cerai.\n");
            break;
        case 4:
            printf("Status: Janda/Duda.\n");
            break;
        default:
            printf("Pilihan tidak valid. Harap masukkan angka antara 1 dan 4.\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int usia;

    printf("Masukkan usia Anda: ");
    scanf("%d", &usia);

    if (usia >= 0 && usia <= 12) {
        printf("Anda adalah Anak-anak.\n");
    } else if (usia >= 13 && usia <= 17) {
        printf("Anda adalah Remaja.\n");
    } else if (usia >= 18 && usia <= 64) {
        printf("Anda adalah Dewasa.\n");
    } else if (usia >= 65) {
        printf("Anda adalah Lansia.\n");
    } else {
        printf("Usia yang dimasukkan tidak valid.\n");
    }

    return 0;
}


#include <stdio.h>

int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

int main() {
    int sisi, luas;

    printf("Masukkan panjang sisi persegi: ");
    scanf("%d", &sisi);

    luas = hitungLuasPersegi(sisi);

    printf("Luas persegi: %d\n", luas);

    return 0;
}


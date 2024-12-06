#include <stdio.h>

void LuasJajarGenjang() {
    int alas, tinggi;

    printf("Masukkan alas: ");
    scanf("%d", &alas);
    printf("Masukkan tinggi: ");
    scanf("%d", &tinggi);

    printf("Luas jajar genjang: %d\n", alas * tinggi);
}

int main() {
    LuasJajarGenjang();
    return 0;
}


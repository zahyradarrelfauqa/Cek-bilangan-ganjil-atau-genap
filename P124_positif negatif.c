#include <stdio.h>
 
void cekPositifNegatif(int angka) {
    if (angka > 0) {
        printf("Angka %d adalah POSITIF.\n", angka);
    } else if (angka < 0) {
        printf("Angka %d adalah NEGATIF.\n", angka);
    } else {
        printf("Angka %d adalah NOL.\n", angka);
    }
}

int main() {
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    cekPositifNegatif(angka);

    return 0;
}


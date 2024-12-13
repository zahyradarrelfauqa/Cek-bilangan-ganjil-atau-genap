#include <stdio.h>

int penjumlahanGenap(int n) {
    if (n <= 0) {
        return 0; 
    }
    if (n % 2 == 0) { 
        return n + penjumlahanGenap(n - 2); 
    }
    return penjumlahanGenap(n - 1); 
}

int main() {
    int angka;
    printf("Masukkan angka batas deret: ");
    scanf("%d", &angka);

    if (angka < 1) {
        printf("Masukkan angka positif lebih dari 0.\n");
    } else {
        printf("Hasil penjumlahan bilangan genap dari 1 hingga %d adalah %d\n", angka, penjumlahanGenap(angka));
    }

    return 0;
}


#include <stdio.h>

int main() {
    char kata[100];
    int i = 0, jumlahKarakter = 0;

    printf("Masukkan kata: ");
    scanf("%s", kata);

    while (kata[i] != '\0') {
        jumlahKarakter++;
        i++;
    }

    printf("Jumlah karakter dalam kata: %d\n", jumlahKarakter);
    return 0;
}


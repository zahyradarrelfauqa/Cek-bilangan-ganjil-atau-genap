#include <stdio.h>
#include <ctype.h>

void cekHuruf(const char *teks) {
    int hurufKapital = 0, hurufKecil = 0, i = 0;

    while (teks[i] != '\0') {
        if (isupper(teks[i])) {
            hurufKapital++;
        } else if (islower(teks[i])) {
            hurufKecil++;
        }
        i++;
    }


    printf("Jumlah huruf kapital: %d\n", hurufKapital);
    printf("Jumlah huruf kecil: %d\n", hurufKecil);
}

int main() {
    char teks[100];

    printf("Masukkan sebuah kata atau kalimat: ");
    fgets(teks, sizeof(teks), stdin); 

    cekHuruf(teks);

    return 0;
}


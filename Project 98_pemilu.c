#include <stdio.h>

int main() {
    int suara;
    int totalSuara = 0;
    int kandidat[100];
    int jumlahKandidat = 0;
    char lagi;

    do {
        printf("Masukkan jumlah suara untuk kandidat %d: ", jumlahKandidat + 1);
        scanf("%d", &suara);

        kandidat[jumlahKandidat] = suara;
        totalSuara += suara;
        jumlahKandidat++;

        printf("Apakah Anda ingin menambahkan suara untuk kandidat lainnya? (y/n): ");
        scanf(" %c", &lagi);

    } while (lagi == 'y' || lagi == 'Y');

    printf("\nHasil Suara Pemilu:\n");
    for (int i = 0; i < jumlahKandidat; i++) {
        printf("Kandidat %d: %d suara (%.2f%%)\n", i + 1, kandidat[i], (kandidat[i] / (float)totalSuara) * 100);
    }

    printf("Total suara: %d\n", totalSuara);
    return 0;
}


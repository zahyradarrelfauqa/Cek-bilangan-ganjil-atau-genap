#include <stdio.h>

float hitungKecepatanRataRata(float jarak, float waktu) {
    if (waktu == 0) {
        printf("Waktu tidak bisa 0.\n");
        return 0;
    }
    return jarak / waktu;
}

int main() {
    float jarak, waktu, kecepatan;

    printf("Masukkan jarak (dalam satuan meter): ");
    scanf("%f", &jarak);
    printf("Masukkan waktu (dalam satuan detik): ");
    scanf("%f", &waktu);

    kecepatan = hitungKecepatanRataRata(jarak, waktu);

    if (kecepatan != 0) {
        printf("Kecepatan rata-rata: %.2f meter/detik\n", kecepatan);
    }

    return 0;
}


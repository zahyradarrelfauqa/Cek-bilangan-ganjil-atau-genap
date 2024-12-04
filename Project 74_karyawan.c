#include <stdio.h>

int main() {
    int skor;

    printf("Masukkan skor kinerja karyawan (0-100): ");
    scanf("%d", &skor);

    if (skor < 0 || skor > 100) {
        printf("Skor tidak valid. Harus antara 0 dan 100.\n");
    } else if (skor >= 90) {
        printf("Kinerja sangat baik.\n");
    } else if (skor >= 75) {
        printf("Kinerja baik.\n");
    } else if (skor >= 60) {
        printf("Kinerja cukup.\n");
    } else if (skor >= 50) {
        printf("Kinerja kurang.\n");
    } else {
        printf("Kinerja sangat buruk.\n");
    }

    return 0;
}


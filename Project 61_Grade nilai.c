#include <stdio.h>

int main() {
    float nilai;

    printf("Masukkan nilai (0 - 100): ");
    scanf("%f", &nilai);

    if (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid. Harus antara 0 dan 100.\n");
    } else if (nilai >= 85) {
        printf("Grade: A\n");
    } else if (nilai >= 70) {
        printf("Grade: B\n");
    } else if (nilai >= 55) {
        printf("Grade: C\n");
    } else if (nilai >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: E\n");
    }

    return 0;
}


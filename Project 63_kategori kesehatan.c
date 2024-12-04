#include <stdio.h>

int main() {
    float tinggi, berat, bmi;

    printf("Masukkan tinggi badan Anda (dalam meter): ");
    scanf("%f", &tinggi);

    printf("Masukkan berat badan Anda (dalam kilogram): ");
    scanf("%f", &berat);

    bmi = berat / (tinggi * tinggi);

    printf("BMI Anda adalah: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("Kategori: Kurus\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Kategori: Normal\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("Kategori: Kelebihan Berat Badan\n");
    } else {
        printf("Kategori: Obesitas\n");
    }

    return 0;
}


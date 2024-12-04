#include <stdio.h>

int main() {
    int suhu;

    printf("Masukkan suhu (dalam derajat Celsius): ");
    scanf("%d", &suhu);

    if (suhu < 0) {
        printf("Cuaca sangat dingin.\n");
    } else if (suhu >= 0 && suhu <= 15) {
        printf("Cuaca dingin.\n");
    } else if (suhu > 15 && suhu <= 25) {
        printf("Cuaca sejuk.\n");
    } else if (suhu > 25 && suhu <= 35) {
        printf("Cuaca hangat.\n");
    } else {
        printf("Cuaca sangat panas.\n");
    }

    return 0;
}


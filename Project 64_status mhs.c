#include <stdio.h>

int main() {
    float ipk;

    printf("Masukkan IPK Anda: ");
    scanf("%f", &ipk);

    if (ipk >= 3.50) {
        printf("Status: Cum Laude\n");
    } else if (ipk >= 3.00) {
        printf("Status: Baik Sekali\n");
    } else if (ipk >= 2.50) {
        printf("Status: Baik\n");
    } else if (ipk >= 2.00) {
        printf("Status: Cukup\n");
    } else {
        printf("Status: Kurang\n");
    }

    return 0;
}


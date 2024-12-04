#include <stdio.h>
#include <string.h>

int main() {
    char ktp[17]; 
    int valid = 1; 

    printf("Masukkan nomor KTP (16 digit): ");
    scanf("%s", ktp);

    if (strlen(ktp) != 16) {
        valid = 0; 
    } else {
        for (int i = 0; i < 16; i++) {
            if (ktp[i] < '0' || ktp[i] > '9') {
                valid = 0;
                break;
            }
        }
    }

    if (valid) {
        printf("Nomor KTP valid.\n");
    } else {
        printf("Nomor KTP tidak valid.\n");
    }

    return 0;
}



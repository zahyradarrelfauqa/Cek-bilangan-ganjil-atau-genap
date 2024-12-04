#include <stdio.h>

int main() {
    int n = 10;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int distance = (i - n / 2) * (i - n / 2) + (j - n / 2) * (j - n / 2);
            if (distance <= (n / 2) * (n / 2)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main() {
    int groups, group = 1;

    printf("Masukkan jumlah grup: ");
    scanf("%d", &groups);

    while (group <= groups) {
        int count, sum = 0, num, i = 1;

        printf("Masukkan jumlah angka untuk grup %d: ", group);
        scanf("%d", &count);

        while (i <= count) {
            printf("Masukkan angka ke-%d: ", i);
            scanf("%d", &num);

            int isPrime = 1;
            if (num < 2) isPrime = 0;
            for (int j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (!isPrime) {
                sum += num;
            }

            i++;
        }

        printf("Jumlah bilangan non-prima di grup %d: %d\n", group, sum);
        group++;
    }
    return 0;
}


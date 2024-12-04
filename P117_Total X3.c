#include <stdio.h>

int main() {
    int groups, group = 1;

    printf("Masukkan jumlah grup: ");
    scanf("%d", &groups);

    while (group <= groups) {
        int count, sum = 0, num, i = 0;

        printf("Masukkan jumlah angka untuk grup %d: ", group);
        scanf("%d", &count);

        while (i < count) {
            printf("Masukkan angka ke-%d: ", i + 1);
            scanf("%d", &num);
            if (num % 3 == 0) {
                sum += num;
            }
            i++;
        }

        printf("Total kelipatan 3 di grup %d: %d\n", group, sum);
        group++;
    }
    return 0;
}


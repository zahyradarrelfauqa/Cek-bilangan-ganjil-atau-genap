#include <stdio.h>

int main() {
    int groups, group = 1;

    printf("Masukkan jumlah grup: ");
    scanf("%d", &groups);

    while (group <= groups) {
        int count, num, maxEven = -1, i = 0;

        printf("Masukkan jumlah angka dalam grup %d: ", group);
        scanf("%d", &count);

        while (i < count) {
            printf("Masukkan angka ke-%d: ", i + 1);
            scanf("%d", &num);
            if (num % 2 == 0 && (maxEven == -1 || num > maxEven)) {
                maxEven = num;
            }
            i++;
        }

        if (maxEven != -1) {
            printf("Bilangan genap terbesar di grup %d: %d\n", group, maxEven);
        } else {
            printf("Tidak ada bilangan genap di grup %d.\n", group);
        }
        group++;
    }
    return 0;
}


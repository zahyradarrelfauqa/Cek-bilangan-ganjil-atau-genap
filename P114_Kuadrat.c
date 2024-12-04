#include <stdio.h>

int main() {
    int groups, group = 1;

    printf("Masukkan jumlah grup: ");
    scanf("%d", &groups);

    while (group <= groups) {
        int count, i = 1;

        printf("Masukkan jumlah angka untuk grup %d: ", group);
        scanf("%d", &count);

        while (i <= count) {
            int num;
            printf("Masukkan angka ke-%d: ", i);
            scanf("%d", &num);

            printf("Kuadrat dari %d adalah %d\n", num, num * num);
            i++;
        }
        group++;
    }
    return 0;
}


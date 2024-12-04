#include <stdio.h>

int main() {
    int groupCount, group = 1;

    printf("Masukkan jumlah grup angka: ");
    scanf("%d", &groupCount);

    while (group <= groupCount) {
        int numCount, count = 0, num;

        printf("Masukkan jumlah angka untuk grup %d: ", group);
        scanf("%d", &numCount);

        while (count < numCount) {
            printf("Masukkan angka ke-%d: ", count + 1);
            scanf("%d", &num);

            if (num > 0) {
                printf("%d adalah bilangan positif.\n", num);
            } else if (num < 0) {
                printf("%d adalah bilangan negatif.\n", num);
            } else {
                printf("%d adalah nol.\n", num);
            }
            count++;
        }
        group++;
    }
    return 0;
}


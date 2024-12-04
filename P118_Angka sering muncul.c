#include <stdio.h>

int main() {
    int groups, group = 1;

    printf("Masukkan jumlah grup: ");
    scanf("%d", &groups);

    while (group <= groups) {
        int count, nums[100], freq[100] = {0}, maxFreq = 0, mostFrequent, i = 0;

        printf("Masukkan jumlah angka dalam grup %d: ", group);
        scanf("%d", &count);

        while (i < count) {
            printf("Masukkan angka ke-%d: ", i + 1);
            scanf("%d", &nums[i]);

            // Update frekuensi
            for (int j = 0; j <= i; j++) {
                if (nums[j] == nums[i]) {
                    freq[j]++;
                    if (freq[j] > maxFreq) {
                        maxFreq = freq[j];
                        mostFrequent = nums[j];
                    }
                    break;
                }
            }
            i++;
        }

        printf("Angka paling sering muncul di grup %d: %d (%d kali)\n", group, mostFrequent, maxFreq);
        group++;
    }
    return 0;
}


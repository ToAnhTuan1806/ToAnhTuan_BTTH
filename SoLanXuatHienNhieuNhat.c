#include <stdio.h>
#include <string.h>

void findMostFrequent(int array[], int size) {
    int frequency[30001] = {0};
    int maxFreq = 0;

    for (int i = 0; i < size; i++) {
        frequency[array[i]]++;
        if (frequency[array[i]] > maxFreq) {
            maxFreq = frequency[array[i]];
        }
    }

    printf("Most frequent numbers: ");
    for (int i = 0; i < size; i++) {
        if (frequency[array[i]] == maxFreq) {
            printf("%d ", array[i]);
            frequency[array[i]] = 0;
        }
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int array[100];

        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]);
        }

        printf("Test %d:\n", test);
        findMostFrequent(array, n);
    }

    return 0;
}


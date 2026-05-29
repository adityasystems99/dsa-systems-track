#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
    int freq;
} Pair;

int compare(const void *a, const void *b) {

    Pair *p1 = (Pair*)a;
    Pair *p2 = (Pair*)b;

    return p2->freq - p1->freq; // descending
}

int main() {

    int nums[] = {1,1,1,2,2,3};
    int n = 6;
    int k = 2;

    int freq[20001] = {0};

    // Count frequencies
    for(int i = 0; i < n; i++) {
        freq[nums[i] + 10000]++;
    }

    Pair arr[20001];
    int size = 0;

    // Store unique numbers and frequencies
    for(int i = 0; i < 20001; i++) {

        if(freq[i] > 0) {

            arr[size].num = i - 10000;
            arr[size].freq = freq[i];

            size++;
        }
    }

    // Sort by frequency descending
    qsort(arr, size, sizeof(Pair), compare);

    printf("Top %d frequent elements:\n", k);

    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i].num);
    }

    return 0;
}
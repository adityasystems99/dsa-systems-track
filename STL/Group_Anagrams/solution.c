#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compareChar(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {

    char strs[][10] = {
        "eat",
        "tea",
        "tan",
        "ate",
        "nat",
        "bat"
    };

    int n = 6;

    for(int i = 0; i < n; i++) {

        char key[10];

        strcpy(key, strs[i]);

        qsort(key,
              strlen(key),
              sizeof(char),
              compareChar);

        printf("%s -> %s\n",
               strs[i],
               key);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define LEN 1000
#define LIMIT 10

int comp(const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main() {
    int array[LEN];

    for (int i = 0; i < LEN; i++) {
        array[i] = rand() % LIMIT;
    }

    qsort(array, sizeof(array) / sizeof(*array), sizeof(*array), comp);

    for (int i = 0; i < LEN; i++) {
        printf("%i - %d\n", i, array[i]);
    }

    return 0;
}

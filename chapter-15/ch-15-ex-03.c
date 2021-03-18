#include <stdio.h>
#include <string.h>

#define LEN 100

void int_to_bin_array(int N, int * bin[]);
int count_1_in_bin_array(int bin[]);

int main() {
    int bin[LEN];
    int N = 15;
    int C;

    memset(bin, 0, sizeof(bin));
    int_to_bin_array(N, (int **) bin);

    C = count_1_in_bin_array(bin);

    printf("Количество включённых разрядов у числа %d : %d", N, C);

    return 0;
}

void int_to_bin_array(int N, int * bin[]) {
    for(int i = 0; N > 0; i++, N = N / 2) {
        *(bin + i) = (N % 2);
    }
}

int count_1_in_bin_array(int bin[]) {
    int C = 0;
    for (int i = 0; i < LEN; i++) {
        if (*(bin + i) == 1) {
            C++;
        }
    }
    return C;
}
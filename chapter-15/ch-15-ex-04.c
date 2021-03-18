#include <stdio.h>
#include <string.h>

#define LEN 100

void int_to_bin_array(int N, int * bin[]);
int if_1_in_position(const int bin[], int pos);

int main() {
    int bin[LEN];
    int N = 15;
    int pos = 1;
    int C;

    memset(bin, 0, sizeof(bin));
    int_to_bin_array(N, (int **) bin);

    C = if_1_in_position(bin, pos);

    printf("У числа %d в разряде %i стоит 1 ? : %d", N, pos, C);

    return 0;
}

void int_to_bin_array(int N, int * bin[]) {
    for(int i = 0; N > 0; i++, N = N / 2) {
        *(bin + i) = (N % 2);
    }
}

int if_1_in_position(const int bin[], int pos) {
    return bin[pos * 2] == 1 ? 1 : 0;
}
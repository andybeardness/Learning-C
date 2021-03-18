#include <stdio.h>

void to_binary(int n);
void to_base_n1_10(int n, int b);

int main() {
    unsigned long n = 10;
    to_base_n1_10(n, 8);

    return 0;
}

void to_binary(int n) {
    /* изначальная функция */
    int r;
    r = n  % 2;
    if (n >=  2)
        to_binary (n  / 2);
    putchar('0' +  r);
}

void to_base_n1_10(int n, int b) {
    int r;
    r = n  % b;
    if (n >=  b)
        to_base_n1_10 (n  / b, b);
    putchar('0' +  r);
}
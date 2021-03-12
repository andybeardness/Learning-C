#include <stdio.h>

#define MAX 8

int intpow(int base, int p);

int main() {
    int mass[MAX];
    int p = 0;

    for (int i = 0; i < MAX; i++) {
        mass[i] = intpow(2, i);
    }

    printf("Первые восемь (8) степеней двойки :\n");
    printf("| ------- | --------- |\n");
    printf("| Степень | Результат |\n");

    do {
        printf("| %7i | %9i |\n", p, intpow(2, p));
        p++;
    } while (p < MAX);

    printf("| ------- | --------- |\n");

    return 0;
}

int intpow(int base, int p) {
    int res = 1;

    for (int i = 0; i < p; i++) {
        res *= base;
    }

    return res;
}
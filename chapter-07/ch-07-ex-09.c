#include <stdio.h>

int is_simple(int a);

int main() {
    int n;

    printf("Введите любое целое число: ");
    scanf("%i", &n);

    printf("Все просты числа, которые меньше, чем %i: \n", n);
    for (int s = 2; s < n; s++) {
        if (is_simple(s)) {
            printf("\t\t-- %i\n", s);
        }
    }

    return 0;
}

int is_simple(int a) {
    for (int s = 2; s < a / 2; s++) {
        if (a % s == 0) return 0;
    }
    return 1;
}
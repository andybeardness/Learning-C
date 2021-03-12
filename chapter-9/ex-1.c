#include <stdio.h>

int min(int x, int y) { return x < y ? x : y; }

int main() {
    int a, b;
    printf("Введите два целых числа через пробел : ");
    scanf("%i %i", &a, &b);

    printf("Минимальное из них это %i", min(a, b));

    return 0;
}
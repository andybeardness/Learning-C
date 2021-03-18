#include <stdio.h>

#define LEN 8

int main() {
    double mass_vals[LEN], mass_sums[LEN];

    printf("Введите по очереди восемь (8) элементов массива\n"
           "Допускаются числа с плавающей точкой\n");

    for (int i = 0; i < LEN; i++) {
        scanf("%lf", &mass_vals[i]);
        mass_sums[i] = 0;
    }

    printf("\n\n");

    mass_sums[0] = mass_vals[0];

    for (int i = 1; i < LEN; i++) {
        mass_sums[i] = mass_sums[i - 1] + mass_vals[i];
    }

    printf("Изначальный массив : ");

    for (int i = 0; i < LEN; ++i) {
        printf("%5.2lf ", mass_vals[i]);
    }
    printf("\n");

    printf("Нарастающая сумма  : ");

    for (int i = 0; i < LEN; ++i) {
        printf("%5.2lf ", mass_sums[i]);
    }
    printf("\n");

    return 0;
}
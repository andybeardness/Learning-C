#include <stdio.h>

int main() {
    int min, max;

    printf("Введите нижний предел (целое число): ");
    scanf("%i", &min);

    printf("Введите верхний предел (целое число): ");
    scanf("%i", &max);

    for (int i = min; i <= max; i++) {
        printf("| %10i | %10i | %10i | \n", i, i * i, i * i * i);
    }

    return 0;
}
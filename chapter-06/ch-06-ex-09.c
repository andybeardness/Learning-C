#include <stdio.h>

int main() {
    int down, up;
    int sq_down, sq_up;
    int summ = 0;

    while (1) {
        printf("Введите нижний и верхний пределы последовательности (целое число) : ");
        scanf("%i %i", &down, &up);

        if (down == up) {
            printf("Работа завершена");
            break;
        }

        sq_down = down * down;
        sq_up = up * up;

        for (int i = down; i <= up; i++) {
            summ += i * i;
        }

        printf("Сумма квадратов целых чисел от %i до %i равна %i\n\n", sq_down, sq_up, summ);
    }

    return 0;
}

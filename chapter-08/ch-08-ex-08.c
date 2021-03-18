#include <stdio.h>

int main() {
    int ch;
    float left, right;
    float res;

    while (1) {
        printf("Выберите математическую операцию:\n"
               "1 сложение           2 вычитание \n"
               "3 умножение          4 деление   \n"
               "5 выход из программы             \n"
               "Ваш выбор: ");

        scanf("%i", &ch);

        if (ch == 5) break;

        printf("Введите первое число : ");
        if ( scanf("%f", &left) != 1 ) {
            continue;
        }

        printf("Введите второе число : ");
        if ( scanf("%f", &right) != 1 ) {
            continue;
        }

        switch (ch) {
            case 1: res = left + right; break;
            case 2: res = left - right; break;
            case 3: res = left * right; break;
            case 4: res = right == 0 ? 0 : left / right; break;
        }

        printf("Результат такой : %.2f\n\n", res);

    }
    return 0;
}
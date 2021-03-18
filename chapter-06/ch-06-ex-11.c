#include <stdio.h>

double power (int base, int pow);

int main() {
    double unsigned_summ;
    double signed_summ;

    int range_list[3];

    printf("Введите три целых числа -- длины последовательностей\n"
           "Например    : 20 100 500\n"
           "Вводить тут : ");

    scanf("%i %i %i",
          &range_list[0],
          &range_list[1],
          &range_list[2]
    );

    for (int r = 0; r < 3; r++) {
        // unsigned
        unsigned_summ = 0;
        for (int i = 1; i <= range_list[r]; i++) {
            unsigned_summ += ( 1. / i );
        }

        printf("Сумма беззнакового ряда для %i элементов : %lf\n", range_list[r], unsigned_summ);

        // signed
        signed_summ = 0;
        for (int i = 1; i <= range_list[r]; i++) {
            signed_summ += ( 1. / i ) * power(-1, i + 1);
        }

        printf("Сумма знакового ряда для %i элементов    : %lf\n", range_list[r], signed_summ);

        printf("\n\n");
    }

    return 0;
}

double power (int base, int pow) {
    double res = 1;

    for (int i = 0; i < pow; i++) {
        res *= base;
    }

    return res;
}
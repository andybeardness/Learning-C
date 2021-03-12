#include <stdio.h>

int main() {
    int num;

    int num2_count = 0;
    int num1_count = 0;

    int num2_summ = 0;
    int num1_summ = 0;

    double num2_mean;
    double num1_mean;

    do {
        scanf("%i", &num);

        if (num % 2 == 0) {
            num2_count++;
            num2_summ += num;
        }
        else {
            num1_count++;
            num1_summ += num;
        }
    } while (num != 0);

    num2_mean = ( (double)num2_summ ) / ( (double)num2_count );
    num1_mean = ( (double)num1_summ ) / ( (double)num1_count );

    printf("Количество   чётных чисел %i а их среднее %4.2lf\n", num2_count, num2_mean);
    printf("Количество нечётных чисел %i а их среднее %4.2lf\n", num1_count, num1_mean);

    return 0;
}
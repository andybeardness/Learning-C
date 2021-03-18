#include <stdio.h>

double get_simple_uplift(double base, double current);
double get_hard_uplift(double base, double current);

int main() {
    double d_simple_base = 100,
           d_simple_current = d_simple_base;

    double d_hard_base = 100,
           d_hard_current = d_hard_base;

    int years = 0;
    do {
        d_simple_current += get_simple_uplift(d_simple_base, d_simple_current);
        d_hard_current   += get_hard_uplift(d_hard_base, d_simple_current);
        years++;

        printf("Год № %i :\n", years);
        printf("\t\tУ Дафны : %.2lf\n", d_simple_current);
        printf("\t\tУ Дайры : %.2lf\n", d_hard_current);
    } while (d_hard_current <= d_simple_current);

    return 0;
}

double get_simple_uplift(double base, double current) {
    return base * 0.1;
}
double get_hard_uplift(double base, double current) {
    return current * 0.05;
}
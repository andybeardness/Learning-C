#include <stdio.h>

double power(double base, int pow);

/**
 * Уже сделал в упражнении 7
 * @return 0
 */
int main() {
    printf("Тестирую функцию :\n");
    printf(" 10 ^  10 == %.2lf\n", power(10., 10));
    printf(" 10 ^ -10 == %.2lf\n", power(10., -10));
    printf("  2 ^  -2 == %.2lf\n", power(2., -2));
    printf("  0 ^  10 == %.2lf\n", power(0., 10));
    printf("  0 ^   0 == %.2lf\n", power(0., 0));
    printf("  2 ^   5 == %.2lf\n", power(2., 5));
    printf("  2 ^  10 == %.2lf\n", power(2., 10));

    return 0;
}

double power(double base, int pow) {
    if (base == 0. && pow != 0) return 0.;
    if (base != 0. && pow == 0) return 1.;
    if (base == 0. && pow == 0) return 1. / 0.;

    double res = 1.;

    if (pow > 0) {
        for (int i = 0; i < pow; i++) {
            res *= base;
        }
    }
    else if (pow < 0) {
        res = 1. / power(base, -pow); // рекурсия туточки
    }

    return res;
}
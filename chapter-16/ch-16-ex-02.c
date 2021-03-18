#include <stdio.h>
#include "H-ch-16-all.h"

int main() {
    double result_1 = GARMONIC(1., 2., 3., 4., 5., 6., 7., 8., 9.);
    double result_2 = GARMONIC(11., 22., 33., 44., 55., 66., 77., 88., 99.);

    printf("Результат № 1 : %lf\n", result_1);
    printf("Результат № 2 : %lf\n", result_2);

    return 0;
}
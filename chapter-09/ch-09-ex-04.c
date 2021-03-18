#include <stdio.h>

double garmonic(double a, double b);

int main() {
    double a, b;
    double g;

    printf("Введите два числа с плавающей точкой   : ");
    scanf("%lf %lf", &a, &b);

    g = garmonic(a, b);

    printf("Среднее гармоническое этих чисел равно : %.2lf\n", g);

    return 0;
}

double garmonic(double a, double b) {
    double _a, _b;
    double _r, r;

    _a = 1. / a;
    _b = 1. / b;

    _r = (_a + _b) / 2.;
    r  = 1. / _r;
    
    return r;
}




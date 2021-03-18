#include <stdio.h>

void larger_of(double *a, double *b);
void show_ab(double a, double b);
double max(double a, double b);

int main() {
    double a, b;

    printf("Введите два числа с плавающей точкой через пробел : ");
    scanf("%lf %lf", &a, &b);

    show_ab(a, b);

    larger_of(&a, &b);

    show_ab(a, b);

    return 0;
}

void larger_of(double *a, double *b) {
    printf("Меняю значения переменных...\n");

    double _max = max(*a, *b);
    *a = _max;
    *b = _max;
}

void show_ab(double a, double b) {
    printf("\t\tЧисло А : %.2lf\n", a);
    printf("\t\tЧисло B : %.2lf\n", b);
}

double max(double a, double b) {
    return a > b ? a : b;
}


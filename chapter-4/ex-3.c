#include <stdio.h>

typedef double real;

int main() {
    real number;

    printf("Введите число с плавающей точкой : ");
    scanf("%lf", &number);

    printf("%lf, %e, %+lf, %+e", number, number, number, number);

    return 0;
}
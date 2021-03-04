#include <stdio.h>

int main() {
    double d;

    printf("Введите число (с плавающей точкой): ");
    scanf("%lf", &d);

    printf("Введено число \"%lf\", в е-форме оно записывается так \"%e\"\n", d, d);
    return 0;
}
#include <stdio.h>

float cube_flt(float f);

int main() {
    float f;

    printf("Программа для возведения числа типа \"float\" в куб с помощью функции\n");

    printf("Введите число с плавающей точкой : ");
    scanf("%f", &f);

    printf("%.3f ^ 3 == %.3f\n", f, cube_flt(f));

    return 0;
}

float cube_flt(float f) {
    return f * f * f;
}
#include <stdio.h>

#define COEF 2.54;

int main() {
    double cm_height, inch_height;

    printf("Введите свой рост в сантиметрах: ");
    scanf("%lf", &cm_height);

    inch_height = cm_height / COEF;

    printf("Ваш рост в дюймах : %.2lf\n", inch_height);

    return 0;
}
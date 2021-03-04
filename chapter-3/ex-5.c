#include <stdio.h>

int main() {
    double secs_in_year = 3.156e7;
    double years;
    double result;

    printf("Введите ваш возраст в годах: ");
    scanf("%lf", &years);

    result = years * secs_in_year;

    printf("Вы прожили примерно %lf секунд\n", result);

    return 0;
}
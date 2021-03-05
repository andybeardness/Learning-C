#include <stdio.h>

void Temperatures(double tf);

int main() {
    double tf = 1.;

    printf("Программа просит на вход грудусы по Фаренгейту,\n"
           "и выводит граду по Цельсию и Кельвину\n\n");

    printf("Для выхода из программы достаточно ввести любой\n"
           "нечисловой символ (например \"q\", без кавычек)\n\n");

    printf("Введите значение градусов по Фаренгейту: ");

    while(scanf("%lf", &tf) == 1) {
        Temperatures(tf);
    }

    return 0;
}

void Temperatures(double tf) {
    const double C_MUL = 1.8;
    const double C_PLUS = 32.0;
    const double K_PLUS = 273.16;

    double tc = C_MUL * tf + C_PLUS;
    double tk = tc + K_PLUS;

    printf("%.2lf°F == %.2lf°C == %.2lf°K\n\n", tf, tc, tk);

    printf("Введите значение градусов по Фаренгейту: ");
}

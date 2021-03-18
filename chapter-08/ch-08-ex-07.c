#include <stdio.h>

#define WEEKHOURS 40
#define OVERWORK 1.5
#define FIRST300 0.15
#define NEXT150 0.20
#define OTHERMONEY 0.05

int main() {
    double money_per_hour;

    double money;
    int hours, overhours;

    char ch;

    printf("Введите число. соответстующее вашей часовой ставке :\n"
           "a) $  8.75 в час                  b) $  9.33 в час\n"
           "c) $ 10.00 в час                  d) $ 11.20 в час\n"
           "e) Выход\n");

    printf("Ваш вариант : ");

    ch = getchar();

    switch (ch) {
        case 'a': money_per_hour =  8.75; break;
        case 'b': money_per_hour =  9.33; break;
        case 'c': money_per_hour = 10.00; break;
        case 'd': money_per_hour = 11.20; break;
        case 'e': goto exit;
        default :
            printf("Такого варианта не было, поэтому программа закроется ха-ха-ха!");
            goto exit;
    }

    printf("Введите количество часов, отработанных за неделю: ");

    scanf("%i", &hours);

    if (hours > WEEKHOURS) {
        overhours = hours - WEEKHOURS;
        hours = WEEKHOURS;
    }
    else {
        overhours = 0;
    }

    money = hours * money_per_hour + overhours * money_per_hour * OVERWORK;

    if (money <= 300) {
        money = money - 300 + (300 - 300 * FIRST300);
    }
    if (money > 300 && money <= 450) {
        money = money - 150 + (150 - 150 * NEXT150);
    }
    if (money > 450) {
        money = money - (money - 450) * OTHERMONEY;
    }

    printf("Итого ты заработал : %.2lf", money);

    exit: return 0;
}
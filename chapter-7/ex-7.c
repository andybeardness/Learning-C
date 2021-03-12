#include <stdio.h>

#define HOURMONEY 10.0
#define WEEKHOURS 40
#define OVERWORK 1.5
#define FIRST300 0.15
#define NEXT150 0.20
#define OTHERMONEY 0.05

int main() {
    double money;
    int hours, overhours;

    printf("Введите количество часов, отработанных за неделю: ");
    scanf("%i", &hours);

    if (hours > WEEKHOURS) {
        overhours = hours - WEEKHOURS;
        hours = WEEKHOURS;
    }
    else {
        overhours = 0;
    }

    money = hours * HOURMONEY + overhours * HOURMONEY * OVERWORK;

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

    return 0;
}
#include <stdio.h>

#define MILLION 1000000.
#define K100 100000.
#define PERCENT 1.08

int main() {
    double money = MILLION;
    int years = 0;

    do {
        printf("Сейчас у чаки : $ %10.2lf\n", money);

        money -= K100;
        money *= PERCENT;

        printf("Прошёл %i год\n", ++years);

    } while (money >= 0);

    printf("Чаки остался без денег в году № %i", years);

    return 0;
}
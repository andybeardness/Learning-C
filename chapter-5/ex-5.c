#include <stdio.h>

int main() {
    int days;

    printf("Программа посчитает, сколько вы накопите за N дней,\n"
           "если будете откладывать каждый день на $1 больше,\n"
           "чем в предыдущий\n\n");

    printf("Введите кол-во дней : ");
    scanf("%i", &days);

    int money = 0;
    int money_sum = 0;

    while (++money <= days) {
        money_sum += money;
        printf("В день № %10i у вас будет $%10i\n", money, money_sum);
    }

    return 0;
}
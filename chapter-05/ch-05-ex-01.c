#include <stdio.h>

#define MIN_TO_HOUR 60;

int main() {
    int time = 1;
    int hours, minutes;

    while (time) {
        printf("Введите время в минутах, а я переведу в формат \"Х часов, У минут\"\n");
        printf("Для выхода из программы -- введите 0 (ноль)\n");
        printf("Ваше кол-во минут : ");
        scanf("%i", &time);

        if (!time)
            break;

        hours = time / MIN_TO_HOUR;
        minutes = time % MIN_TO_HOUR;

        printf("Ответ : %i часов, %i минут\n\n\n", hours, minutes);

    }

    return 0;
}
#include <stdio.h>

int main() {
    const int days_in_weeks = 7;

    int user_days;
    int days, weeks;

    printf("Введите кол-во дней : ");
    scanf("%i", &user_days);

    weeks = user_days / days_in_weeks;
    days = user_days % days_in_weeks;

    printf("%i дней это %i недель и %i дней", user_days, weeks, days);

    return 0;
}
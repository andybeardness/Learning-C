#include <stdio.h>
#include <string.h>

#define LEN 12

struct month {
    char title[3];
    int number;
};

int main() {
    char m[3];
    int d, mn, days;

    struct month months[LEN] = {
            {"jan", 1},
            {"feb", 2},
            {"mar", 3},
            {"apr", 4},
            {"may", 5},
            {"jun", 6},
            {"jul", 7},
            {"aug", 8},
            {"sep", 9},
            {"oct", 10},
            {"nov", 11},
            {"dec", 12}
    };

    printf("Введите аббревиатуру месяца и номер дня : ");
    scanf("%s %i", m, &d);

    for (int i = 0; i < LEN; i++) {
        if (strcmp(months[i].title, m) == 0) {
            mn = i;
        }
    }

    days = 30 * mn + d;

    printf("Прошло %i дней\n", days);

    return 0;
}

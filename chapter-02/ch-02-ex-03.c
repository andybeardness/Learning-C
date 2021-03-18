#include <stdio.h>

int main() {
    int years = 27;
    int day_in_years = 365;

    int days = years * day_in_years;

    printf("I am %i y.o. and it is ~ %i days\n", years, days);

    return 0;
}

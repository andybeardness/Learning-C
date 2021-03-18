/*
 * вычисляет итоговые данные по годам,
 * ежегодные средние  значения и ежемесячные
 * средние значения осадков за период в несколько лет
 */
#include <stdio.h>
#define  MONTHS 12 // количество месяцев в году
#define  YEARS 5 // количество лет, в течение которых проводились наблюдения

float do1(float rain[][MONTHS]);
void do2(float total);
void do3(float rain[][MONTHS]);

int main (void) {
    // инициализация массива данными об осадках за период с  2000 по  2004
    const float rain[YEARS][MONTHS] = {
            {4.3f, 4.3f, 4.3f, 3.0f, 2.0f, 1.2f, 0.2f, 0.2f, 0.4f, 2.4f, 3.5f, 6.6f},
            {8.5f, 8.2f, 1.2f, 1.6f, 2.4f, 0.0f, 5.2f, 0.9f, 0.3f, 0.9f, 1.4f, 7.3f},
            {9.1f, 8.5f, 6.7f, 4.3f, 2.1f, 0.8f, 0.2f, 0.2f, 1.1f, 2.3f, 6.1f, 8.4f},
            {7.2f, 9.9f, 8.4f, 3.3f, 1.2f, 0.8f, 0.4f, 0.0f, 0.6f, 1.7f, 4.3f, 6.2f},
            {7.6f, 5.6f, 3.8f, 2.8f, 3.8f, 0.2f, 0.0f, 0.0f, 0.0f, 1.3f, 2.6f, 5.2f}
    };

    float total = do1(rain);
    do2(total);
    do3(rain);

    return 0;
}

float do1(float rain[][MONTHS]) {
    int year, month;
    float subtot, total;

    printf(" ГОД КОЛИЧЕСТВО ОСАДКОВ (в дюймах) \n");

    for (year = 0, total = 0; year < YEARS; year++) {
        // для каждого  года суммарное количество осадков за каждый месяц
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2000 + year, subtot);
        total += subtot; // общая сумма  за  все годы
    }

    return total;
}

void do2(float total) {
    printf("\nCpeднeгoдoвoe количество осадков составляет %.lf дюймов .\n\n", total / YEARS );
}
void do3(float rain[][MONTHS]) {
    int year, month;
    float subtot = 0;

    printf(" Янв  Фев  Мар  Апр  Май  Июн  Июл  Авг  Сен  Окт  Ноя  Дек \n") ;

    for (month = 0; month < MONTHS;  month++) {
        // суммарные осадки по  каждому месяцу  на  протяжении  всего периода
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month]; // rain[year][month];
        printf ("%4.1f ", subtot / YEARS);
    }

    printf("\n");
}
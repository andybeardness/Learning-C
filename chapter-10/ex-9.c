#include <stdio.h>

#define LEN 5

void sum_arrs(double a[LEN], double b[LEN], double c[LEN]);
void show_arr(double * a, char * title);

int main() {
    double a[LEN] = {1, 2, 3, 4, 5};
    double b[LEN] = {9, 8, 7, 6, 5};
    double * c[LEN];

    show_arr(a, "Массив А");
    show_arr(b, "Массив В");
    show_arr(c, "Массив С ДО суммирования");
    sum_arrs(a, b, c);
    show_arr(c, "Массив С ПОСЛЕ суммирования");

    return 0;
}

void sum_arrs(double a[LEN], double b[LEN], double c[LEN]) {
    for (int i = 0; i < LEN; i++)
        *(c + i) = a[i] + b[i];
}

void show_arr(double * a, char * title) {
    printf("%s : \n", title);
    for (int i = 0; i < LEN; i++)
        printf("%1.1lf - ", *(a + i));

    printf("\b\b\b \n\n");
}
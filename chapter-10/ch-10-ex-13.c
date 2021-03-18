#include <stdio.h>

#define ROWS 3
#define COLS 5

double get_mean_row(double arr[]);
double get_mean_all(double arr[][COLS]);
double get_max_all(double arr[][COLS]);
void show_results(double mean[], double mean_all, double max_all);

int main() {
    double arr[ROWS][COLS];
    double mean[ROWS];
    double mean_all;
    double max_all;

    printf("Нужно будет ввести пять чисел три раза подряд!\n");

    for (int r = 0; r < ROWS; r++) {
        printf("Введите через пробел пять чисел : ");
        scanf("%lf %lf %lf %lf %lf",
              &arr[r][0], &arr[r][1], &arr[r][2], &arr[r][3], &arr[r][4]);
    }

    for (int r = 0; r < ROWS; r++) {
        mean[r] = get_mean_row(arr[r]);
    }

    mean_all = get_mean_all(arr);

    max_all = get_max_all(arr);

    show_results(mean, mean_all, max_all);

    return 0;
}

double get_mean_row(double arr[]) {
    double s = 0;

    for (int c = 0; c < COLS; c++)
        s += arr[c];

    return s / COLS;
}

double get_mean_all(double arr[][COLS]) {
    double s = 0;

    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            s += arr[r][c];

    return s / (ROWS * COLS);
}

double get_max_all(double arr[][COLS]) {
    double m = arr[0][0];

    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            if (arr[r][c] > m)
                m = arr[r][c];

    return m;
}

void show_results(double mean[], double mean_all, double max_all) {
    printf("Результаты: \n");

    for (int r = 0; r < ROWS; r++)
        printf("Среднее по столбцу № %i      : %5.2lf\n", r, mean[r]);

    printf("Среднее по всем элементам        : %5.2lf\n", mean_all);
    printf("Максимальное по всем элементам   : %5.2lf\n", max_all);
}

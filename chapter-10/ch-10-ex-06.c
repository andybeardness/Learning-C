#include <stdio.h>

#define NROWS 3
#define NCOLS 4

void show_arr(const double * arr, char * title);
void copy_arr(double * arr_main, double * arr_copied);

int main() {
    double arr[NROWS][NCOLS] = {
            {1.1, 2.1, 3.1, 4.1},
            {1.2, 2.2, 3.2, 4.2},
            {1.3, 2.3, 3.3, 4.3}
    };

    double arr_cp1[NROWS][NCOLS];

    show_arr(arr, "Изначальный массив");

    show_arr(arr, "Индексирование через инкремент указателей 2D > Основной массив");
    show_arr(arr_cp1, "Индексирование через инкремент указателей 2D > Побочный массив ДО копирования");
    copy_arr(arr, arr_cp1);
    show_arr(arr_cp1, "Индексирование через инкремент указателей 2D > Побочный массив ПОСЛЕ копирования");

    return 0;
}

void show_arr(const double * arr, char * title) {
    printf("%s : \n", title);
    for (int r = 0; r < NROWS; r++) {
        for (int c = 0; c < NCOLS; c++) {
            printf("%1.1lf - ", *(arr + r * NCOLS) + c );
        }
        printf("\b\b\b \n");
    }
}

void copy_arr(double * arr_main, double * arr_copied) {
    for (int r = 0; r < NROWS; r++)
        for (int c = 0; c < NCOLS; c++)
            *(arr_copied + r * NCOLS) = *(arr_main + r * NCOLS);
}
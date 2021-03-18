#include <stdio.h>

#define LEN 9

void show_arr(double * arr, char title[]);
void copy_arr_classic(double * arr_main, double * arr_copied);
void copy_arr_pointer(double * arr_main, double * arr_copied);

int main() {
    double arr[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    double arr_cp1[LEN], arr_cp2[LEN];

    show_arr(arr, "Инициализация");

    show_arr(arr, "Классическое индексирование > Основной массив");
    show_arr(arr_cp1, "Классическое индексирование > Побочный массив ДО копирования");
    copy_arr_classic(arr, arr_cp1);
    show_arr(arr_cp1, "Классическое индексирование > Побочный массив ПОСЛЕ копирования");

    show_arr(arr, "Индексирование через инкремент указателей > Основной массив");
    show_arr(arr_cp2, "Индексирование через инкремент указателей > Побочный массив ДО копирования");
    copy_arr_pointer(arr, arr_cp2);
    show_arr(arr_cp2, "Индексирование через инкремент указателей > Побочный массив ПОСЛЕ копирования");

    return 0;
}

void show_arr(double * arr, char title[]) {
    printf("%s : \n", title);
    for (int i = 0; i < LEN; i++) {
        printf("%2.1lf - ", arr[i]);
    }
    printf("\b\b\b \n\n");
}

void copy_arr_classic(double * arr_main, double * arr_copied) {
    for(int i = 0; i < LEN; i++) {
        arr_copied[i] = arr_main[i];
    }
}

void copy_arr_pointer(double * arr_main, double * arr_copied) {
    for(int i = 0; i < LEN; i++) {
        *(arr_copied + i) = *(arr_main + i);
    }
}
#include <stdio.h>

#define LEN_7 7
#define LEN_3 3
#define START 3
#define STOP 5

void copy_3_5(double * arr7, double * arr3);
void show_arr(double * arr, size_t size, char * title);

int main() {
    double arrmax[LEN_7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double arrmin[LEN_3];

    size_t sz_arrmax = sizeof(arrmax) / sizeof(double);
    size_t sz_arrmin = sizeof(arrmin) / sizeof(double);

    show_arr(arrmax, sz_arrmax, "Массив arrmax ДО копирования");
    show_arr(arrmin, sz_arrmin, "Массив arrmin ДО копирования");

    copy_3_5(arrmax, arrmin);

    show_arr(arrmax, sz_arrmax, "Массив arrmax ПОСЛЕ копирования");
    show_arr(arrmin, sz_arrmin, "Массив arrmin ПОСЛЕ копирования");

    return 0;
}

void copy_3_5(double * arr7, double * arr3) {
    for (int i = START; i <= STOP; i++)
        *(arr3 + i - START) = *(arr7 + i);
}

void show_arr(double * arr, size_t size, char * title) {
    printf("%s : \n", title);
    for (int i = 0; i < size; i++) {
        printf("%1.1lf - ", *(arr + i));
    }
    printf("\b\b\b \n\n");
}

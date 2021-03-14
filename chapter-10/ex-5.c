#include <stdio.h>

double get_diff_max_min(double a, double b);
double get_max(double * arr, size_t size);
double get_min(double * arr, size_t size);

int main() {
    double arr[] = {1.12, 2.23, 3.34, 4.45, 5.56, 6.67, 7.78, 8.89, 9.90};
    size_t arr_size = sizeof(arr) / sizeof(double);

    printf("Разность между максимальным и минимальным значением в массиве == %2.2lf",
           get_diff_max_min(
                get_max(arr, arr_size),
                get_min(arr, arr_size)
           )
    );

    return 0;
}

double get_diff_max_min(double a, double b) {
    return a >= b ? a - b : b - a;
}

double get_max(double * arr, size_t size) {
    double max = *(arr);

    for (int i = 1; i < size; i++)
        if ( *(arr + i) > max )
            max = *(arr + i);

    return max;
}

double get_min(double * arr, size_t size) {
    double min = *(arr);

    for (int i = 1; i < size; i++)
        if ( *(arr + i) < min )
            min = *(arr + i);

    return min;
}
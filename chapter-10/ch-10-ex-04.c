#include <stdio.h>

int get_max_from_arr(double * arr, size_t size);

int main() {
    double arr[] = {1.0, 0.0, 2.0, 9.0, 3.0, 8.0, 4.0, 7.0, 5.0, 6.0};
    size_t arr_size = sizeof(arr) / sizeof(double);

    printf("Индекс максимального значения в массиве == %i", get_max_from_arr(arr, arr_size));

    return 0;
}

int get_max_from_arr(double * arr, size_t size) {
    double max = *(arr);
    int maxi = 0;

    for (int i = 1; i < size; i++)
        if ( *(arr + i) > max ) {
            max = *(arr + i);
            maxi = i;
        }

    return maxi;
}
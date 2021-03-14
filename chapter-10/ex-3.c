#include <stdio.h>

int get_max_from_arr(int * arr, size_t size);

int main() {
    int arr[] = {1, 0, 2, 9, 3, 8, 4, 7, 5, 6};
    size_t arr_size = sizeof(arr) / sizeof(int);

    printf("Максимальное значение в массиве == %d", get_max_from_arr(arr, arr_size));

    return 0;
}

int get_max_from_arr(int * arr, size_t size) {
    int max = *(arr);

    for (int i = 1; i < size; i++)
        if ( *(arr + i) > max )
            max = *(arr + i);

    return max;
}
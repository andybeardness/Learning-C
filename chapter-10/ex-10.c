#include <stdio.h>

#define ROWS 3
#define COLS 5

void square(double array[][COLS]);
void show(double array[][COLS], char * title);

int main (void) {
    double arr[ROWS][COLS] = {
            {1.1, 2.1, 3.1, 4.1, 5.1},
            {1.2, 2.2, 3.2, 4.2, 5.2},
            {1.3, 2.3, 3.3, 4.3, 5.3}
    };

    show(arr, "Массив ДО уквадрачивания");
    square(arr);
    show(arr, "Массив ПОСЛЕ уквадрачивания");

    return 0;
}

void square(double array[][COLS]){
    for(int r = 0; r < ROWS; r++) {
        for(int c = 0; c < COLS; c++)
            array[r][c] = array[r][c] * array[r][c];
    }
}

void show(double array[][COLS], char * title) {
    printf("%s : \n", title);
    for(int r = 0; r < ROWS; r++){
        for(int c = 0; c < COLS; c++)
            printf("%5.2lf - ", array[r][c]);
        printf("\b\b\b \n");
    }
    printf("\n\n");
}